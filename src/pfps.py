"""
YourAssistantCoder (yac) - pfps.py
Python File Protection System.
Sandbox, chunking, git-like tracking, write locks.
"""

import hashlib
import json
import os
import time
import threading
from pathlib import Path
from dataclasses import dataclass, field, asdict
from typing import Optional

from permissions import AllowToken, issue_token
from notify import (
    notify_contention, notify_agent_resumed,
    notify_suspicious_chain, notify_dirty_session,
)


# --- Exceptions -------------------------------------------------------------

class SandboxViolation(Exception): pass
class PermissionError_(Exception): pass
class TokenExpired(Exception):     pass
class TokenInvalid(Exception):     pass
class LockConflict(Exception):     pass


# --- Lock States ------------------------------------------------------------

class LockState:
    Free       = "free"
    AgentHolds = "agent"
    UserHolds  = "user"
    Contention = "contention"


# --- Delta record ------------------------------------------------------------

@dataclass
class Delta:
    op:        str          # INSERT | DELETE | CREATE | REMOVE
    session:   str
    timestamp: str
    at_line:   Optional[int] = None
    content:   Optional[str] = None
    lines:     Optional[int] = None
    snapshot:  Optional[str] = None
    chunk_ref: Optional[str] = None


# --- PFPS Core ---------------------------------------------------------------

class PFPS:
    MAX_CHUNKS   = 5
    MAX_SESSION_OPS = 200

    # Suspicious op chains to watch for (per file)
    SUSPICIOUS_CHAINS = [
        ["READ", "DELETE", "CREATE"],   # delete + recreate
        ["WRITE", "WRITE", "WRITE"],    # runaway rewrite
        ["CREATE", "DELETE"],           # probe
    ]

    def __init__(self, project_root: str):
        self.root        = Path(project_root).resolve()
        self.pfps_dir    = self.root / ".PFPS"
        self.chunks_dir  = self.pfps_dir / "ReadableChunks"
        self.tracked_dir = self.pfps_dir / "tracked"
        self.ams_dir     = self.pfps_dir / "ams"

        for d in [self.pfps_dir, self.chunks_dir, self.tracked_dir, self.ams_dir]:
            d.mkdir(parents=True, exist_ok=True)

        self.sandbox_json = self.pfps_dir / "sandbox.json"
        self.config: dict = {}

        self._locks: dict[str, dict]  = {}   # filename -> lock info
        self._op_chains: dict[str, list] = {}  # filename -> recent ops
        self._session_op_count: int    = 0
        self._session_id: str          = ""
        self._sleep_events: dict[str, threading.Event] = {}
        self._watchers: dict[str, any] = {}

    # --- Registration --------------------------------------------------------

    @classmethod
    def RegisterProject(
        cls,
        name: str,
        root: str,
        role: str       = "Editor",
        allow_print: bool = False,
        track_files: list = None,
        ignore: list    = None,
        files_scope: list = None,
    ) -> "PFPS":
        instance = cls(root)
        config = {
            "name":         name,
            "root":         str(instance.root),
            "role":         role,
            "allow_print":  allow_print,
            "track_files":  track_files or ["*.py", "*.js", "*.ts", "*.md"],
            "ignore":       ignore or ["__pycache__", ".env", ".git", "node_modules"],
            "files_scope":  files_scope or [],
            "registered_at": time.strftime("%Y-%m-%dT%H:%M:%S"),
        }
        instance.config = config
        with open(instance.sandbox_json, "w", encoding="utf-8") as f:
            json.dump(config, f, indent=2)

        # Take initial HEAD snapshot of all tracked files
        instance._snapshot_all()
        return instance

    @classmethod
    def LoadProject(cls, root: str) -> "PFPS":
        instance = cls(root)
        if not instance.sandbox_json.exists():
            raise FileNotFoundError(f"No PFPS project found at {root}. Run 'yac init' first.")
        with open(instance.sandbox_json, encoding="utf-8") as f:
            instance.config = json.load(f)

        # Check for dirty session
        instance._check_dirty_session()
        return instance

    # --- Session -------------------------------------------------------------

    def start_session(self, session_id: str):
        self._session_id      = session_id
        self._session_op_count = 0
        self._op_chains.clear()
        # Mark session as active (dirty until WorkingStop commits it)
        session_file = self.ams_dir / "active_session.json"
        with open(session_file, "w", encoding="utf-8") as f:
            json.dump({"session_id": session_id, "started_at": time.strftime("%Y-%m-%dT%H:%M:%S"), "clean": False}, f)

    def commit_session(self):
        """Called by WorkingStop - marks session as cleanly finished."""
        session_file = self.ams_dir / "active_session.json"
        if session_file.exists():
            with open(session_file, encoding="utf-8") as f:
                data = json.load(f)
            data["clean"]       = True
            data["finished_at"] = time.strftime("%Y-%m-%dT%H:%M:%S")
            with open(session_file, "w", encoding="utf-8") as f:
                json.dump(data, f, indent=2)

    def _check_dirty_session(self):
        session_file = self.ams_dir / "active_session.json"
        if session_file.exists():
            with open(session_file, encoding="utf-8") as f:
                data = json.load(f)
            if not data.get("clean", True):
                notify_dirty_session(data.get("session_id", "unknown"))

    def _increment_ops(self, token: AllowToken) -> bool:
        """Returns False if op limit exceeded."""
        from notify import notify_op_limit
        self._session_op_count += 1
        if self._session_op_count >= self.MAX_SESSION_OPS:
            notify_op_limit(self._session_id, self.MAX_SESSION_OPS)
            return False
        return True

    # --- Path safety ---------------------------------------------------------

    def SandboxPath(self, path: str) -> Path:
        """Resolve path and ensure it stays inside the sandbox."""
        resolved = (self.root / path).resolve()
        # Symlink check
        try:
            real = resolved.resolve(strict=False)
        except Exception:
            real = resolved
        if not str(real).startswith(str(self.root)):
            raise SandboxViolation(f"[SANDBOX] Escape attempt blocked: {path!r} resolves outside sandbox")
        # Only block explicitly ignored paths, never block normal files
        ignore = self.config.get("ignore", [])
        rel = str(resolved.relative_to(self.root))
        for ig in ignore:
            if ig in rel:
                raise SandboxViolation(f"[SANDBOX] Access to ignored path: {path!r}")
        return resolved

    def AMSLocation(self, subdir: str = ".ams") -> Path:
        return self.pfps_dir / subdir

    # --- Token validation ----------------------------------------------------

    def _validate_token(self, token: AllowToken, tool: str, filename: str):
        if token.expired:
            from notify import notify_token_expired
            notify_token_expired(token.role, token.session_id)
            raise TokenExpired(f"Token expired for role {token.role!r}")
        if not token.valid:
            raise TokenInvalid("Token has been revoked")
        if not token.can_use_tool(tool):
            raise PermissionError_(f"[DENIED] Token level {token.level!r} cannot use {tool!r}")
        if filename != "*" and not token.can_touch_file(filename):
            raise PermissionError_(f"[DENIED] Token scope does not include {filename!r}")

    # --- Chunking ------------------------------------------------------------

    def _compute_chunks(self, filepath: Path) -> list[tuple[str, str]]:
        """Split file into up to 5 even chunks. Returns list of (range_label, content)."""
        with open(filepath, "r", errors="replace", encoding="utf-8") as f:
            lines = f.readlines()

        total      = len(lines)
        if total == 0:
            return [("lines 0-0", "")]

        chunk_size = max(1, total // self.MAX_CHUNKS)
        remainder  = total % self.MAX_CHUNKS
        chunks     = []

        start = 0
        for i in range(self.MAX_CHUNKS):
            extra = 1 if i == self.MAX_CHUNKS - 1 else 0
            end   = start + chunk_size + (remainder if extra else 0)
            end   = min(end, total)
            if start >= total:
                break
            label   = f"lines {start + 1}-{end}"
            content = "".join(lines[start:end])
            chunks.append((label, content))
            start = end

        return chunks

    def BuildVarFile(self, filename: str):
        """Create/refresh the .var file for a tracked file."""
        filepath = self.SandboxPath(filename)
        chunks   = self._compute_chunks(filepath)
        var_path = self.chunks_dir / f"_{filename.replace('/', '_')}.var"

        lines = [f"# YAC ReadableChunks - {filename}\n",
                 f"# Generated: {time.strftime('%Y-%m-%dT%H:%M:%S')}\n\n"]
        for i, (label, content) in enumerate(chunks, 1):
            # Escape content for safe embedding
            escaped = content.replace("\\", "\\\\").replace('"', '\\"')
            lines.append(f'CHUNK_{i} = ("{label}", "{escaped}")\n')

        with open(var_path, "w", encoding="utf-8") as f:
            f.writelines(lines)

        return var_path

    def ReadChunkVar(self, filename: str) -> dict[str, tuple]:
        """Load chunk vars for a file into a dict: {'CHUNK_1': (label, content), ...}"""
        var_path = self.chunks_dir / f"_{filename.replace('/', '_')}.var"
        if not var_path.exists():
            self.BuildVarFile(filename)

        result = {}
        namespace = {}
        with open(var_path, encoding="utf-8") as f:
            exec(f.read(), namespace)
        for i in range(1, self.MAX_CHUNKS + 1):
            key = f"CHUNK_{i}"
            if key in namespace:
                result[key] = namespace[key]
        return result

    # --- Git-like tracking ---------------------------------------------------

    def _file_hash(self, filepath: Path) -> str:
        h = hashlib.sha256()
        try:
            with open(filepath, "rb") as f:
                h.update(f.read())
        except FileNotFoundError:
            return "0" * 64
        return h.hexdigest()[:16]

    def _file_track_dir(self, filename: str) -> Path:
        safe = filename.replace("/", "_").replace("\\", "_")
        d    = self.tracked_dir / safe
        d.mkdir(parents=True, exist_ok=True)
        return d

    def _snapshot_all(self):
        import fnmatch
        patterns = self.config.get("track_files", ["*"])
        ignore   = self.config.get("ignore", ["__pycache__", ".git"])
        for f in self.root.rglob("*"):
            if not f.is_file():
                continue
            rel = str(f.relative_to(self.root))
            if ".PFPS" in rel:
                continue
            if any(ig in rel for ig in ignore):
                continue
            track_all = "*" in patterns
            if track_all or any(fnmatch.fnmatch(f.name, p) for p in patterns):
                self._write_head(rel, f)

    def _write_head(self, filename: str, filepath: Path):
        track_dir = self._file_track_dir(filename)
        head_path = track_dir / "HEAD"
        h         = self._file_hash(filepath)
        with open(head_path, "w", encoding="utf-8") as f:
            json.dump({
                "hash":          h,
                "last_session":  self._session_id,
                "last_op":       "SNAPSHOT",
                "last_modified": time.strftime("%Y-%m-%dT%H:%M:%S"),
                "clean":         True,
            }, f, indent=2)

    def _record_delta(self, filename: str, delta: Delta):
        track_dir   = self._file_track_dir(filename)
        deltas_dir  = track_dir / "deltas"
        deltas_dir.mkdir(exist_ok=True)
        existing    = sorted(deltas_dir.glob("*.delta"))
        index       = len(existing) + 1
        delta_path  = deltas_dir / f"{index:04d}.delta"
        with open(delta_path, "w", encoding="utf-8") as f:
            json.dump(asdict(delta), f, indent=2)

        # Update HEAD
        head_path = track_dir / "HEAD"
        filepath  = self.SandboxPath(filename)
        h         = self._file_hash(filepath)
        with open(head_path, "w", encoding="utf-8") as f:
            json.dump({
                "hash":          h,
                "last_session":  self._session_id,
                "last_op":       delta.op,
                "last_modified": delta.timestamp,
                "clean":         False,
            }, f, indent=2)

        # Append to history log
        history = track_dir / "history.log"
        with open(history, "a", encoding="utf-8") as f:
            f.write(f"[{delta.timestamp}] {delta.op:8s} session={self._session_id}\n")

    # --- Op chain monitor ----------------------------------------------------

    def _record_op(self, filename: str, op: str) -> bool:
        """
        Track op sequence per file. Returns False if suspicious chain detected.
        """
        chain = self._op_chains.setdefault(filename, [])
        chain.append(op)
        if len(chain) > 6:
            chain.pop(0)

        for pattern in self.SUSPICIOUS_CHAINS:
            plen = len(pattern)
            if chain[-plen:] == pattern:
                notify_suspicious_chain(filename, chain[-plen:])
                return False   # Caller should prompt user to terminate
        return True

    # --- Write lock + watchdog -----------------------------------------------

    def _lock_path(self, filename: str) -> Path:
        return self._file_track_dir(filename) / "write.lock"

    def _acquire_lock(self, filename: str, holder: str, token: AllowToken):
        lock_p = self._lock_path(filename)
        if lock_p.exists():
            with open(lock_p, encoding="utf-8") as f:
                existing = json.load(f)
            if existing["held_by"] == LockState.UserHolds:
                raise LockConflict(f"User holds write lock on {filename}")
        with open(lock_p, "w", encoding="utf-8") as f:
            json.dump({
                "held_by":  holder,
                "session":  token.session_id,
                "since":    time.strftime("%Y-%m-%dT%H:%M:%S"),
                "file":     filename,
            }, f)

    def _release_lock(self, filename: str):
        lock_p = self._lock_path(filename)
        if lock_p.exists():
            lock_p.unlink()

    def _start_watchdog(self, filename: str, token: AllowToken):
        """Watch for user editing the file while agent holds lock."""
        try:
            from watchdog.observers import Observer
            from watchdog.events import FileSystemEventHandler

            filepath = self.SandboxPath(filename)

            class Handler(FileSystemEventHandler):
                def __init__(inner_self):
                    inner_self.sleep_start = None

                def on_modified(inner_self, event):
                    if Path(event.src_path).resolve() == filepath.resolve():
                        lock_p = self._lock_path(filename)
                        if lock_p.exists():
                            with open(lock_p, encoding="utf-8") as f:
                                lock_data = json.load(f)
                            if lock_data["held_by"] == LockState.AgentHolds:
                                # User started editing - sleep agent
                                inner_self.sleep_start = time.time()
                                with open(lock_p, "w", encoding="utf-8") as f:
                                    json.dump({**lock_data, "held_by": LockState.UserHolds}, f)
                                notify_contention(filename)
                                ev = self._sleep_events.get(filename)
                                if ev:
                                    ev.clear()

                def on_closed(inner_self, event):
                    if Path(event.src_path).resolve() == filepath.resolve():
                        lock_p = self._lock_path(filename)
                        if lock_p.exists():
                            with open(lock_p, encoding="utf-8") as f:
                                lock_data = json.load(f)
                            if lock_data["held_by"] == LockState.UserHolds:
                                # User done - wake agent
                                sleep_duration = time.time() - (inner_self.sleep_start or time.time())
                                token.extend(sleep_duration)
                                with open(lock_p, "w", encoding="utf-8") as f:
                                    json.dump({**lock_data, "held_by": LockState.AgentHolds}, f)
                                # Recompute chunks since user may have edited
                                self.BuildVarFile(filename)
                                notify_agent_resumed(filename)
                                ev = self._sleep_events.get(filename)
                                if ev:
                                    ev.set()

            observer = Observer()
            observer.schedule(Handler(), str(filepath.parent), recursive=False)
            observer.start()
            self._watchers[filename] = observer
            self._sleep_events[filename] = threading.Event()
            self._sleep_events[filename].set()   # start as "awake"
        except ImportError:
            pass  # watchdog not installed, skip file watching

    def _stop_watchdog(self, filename: str):
        obs = self._watchers.pop(filename, None)
        if obs:
            obs.stop()
            obs.join()
        self._sleep_events.pop(filename, None)

    def _wait_if_sleeping(self, filename: str):
        ev = self._sleep_events.get(filename)
        if ev and not ev.is_set():
            ev.wait()   # block until user releases file

    # --- File operations -----------------------------------------------------

    def ReadChunk(self, token: AllowToken, filename: str, chunk_key: str = "CHUNK_1") -> str:
        self._validate_token(token, "read_chunk", filename)
        if not self._increment_ops(token):
            raise RuntimeError("Session op limit reached")
        self._wait_if_sleeping(filename)
        self._record_op(filename, "READ")

        # Auto-build var file if missing
        var_path = self.chunks_dir / f"_{filename.replace('/', '_').replace(chr(92), '_')}.var"
        if not var_path.exists():
            self.BuildVarFile(filename)

        chunks = self.ReadChunkVar(filename)
        if chunk_key not in chunks:
            available = list(chunks.keys())
            raise KeyError(f"Chunk {chunk_key!r} not found in {filename}. Available: {available}")

        self._record_delta(filename, Delta(
            op="READ", session=self._session_id,
            timestamp=time.strftime("%Y-%m-%dT%H:%M:%S"),
            chunk_ref=chunk_key,
        ))
        label, content = chunks[chunk_key]
        return f"[{label}]\n{content}"

    def WriteChunk(self, token: AllowToken, filename: str, chunk_key: str, new_content: str):
        self._validate_token(token, "write_chunk", filename)
        if not self._increment_ops(token):
            raise RuntimeError("Session op limit reached")
        self._wait_if_sleeping(filename)

        filepath = self.SandboxPath(filename)
        self._acquire_lock(filename, LockState.AgentHolds, token)
        self._start_watchdog(filename, token)

        try:
            chunks = self.ReadChunkVar(filename)
            if chunk_key not in chunks:
                raise KeyError(f"Chunk {chunk_key!r} not found")

            label, old_content = chunks[chunk_key]
            # Parse line range from label e.g. "lines 1-60"
            parts      = label.replace("lines ", "").split("-")
            start_line = int(parts[0]) - 1
            end_line   = int(parts[1])

            with open(filepath, "r", errors="replace", encoding="utf-8") as f:
                all_lines = f.readlines()

            new_lines        = new_content.splitlines(keepends=True)
            all_lines[start_line:end_line] = new_lines

            with open(filepath, "w", encoding="utf-8") as f:
                f.writelines(all_lines)

            # Rebuild var file
            self.BuildVarFile(filename)

            ok = self._record_op(filename, "WRITE")
            self._record_delta(filename, Delta(
                op="WRITE", session=self._session_id,
                timestamp=time.strftime("%Y-%m-%dT%H:%M:%S"),
                at_line=start_line + 1,
                chunk_ref=chunk_key,
                snapshot=old_content,
            ))
            return ok   # False = suspicious chain detected
        finally:
            self._release_lock(filename)
            self._stop_watchdog(filename)

    def AppendChunk(self, token: AllowToken, filename: str, content: str):
        self._validate_token(token, "append_chunk", filename)
        if not self._increment_ops(token):
            raise RuntimeError("Session op limit reached")
        self._wait_if_sleeping(filename)

        filepath = self.SandboxPath(filename)
        self._acquire_lock(filename, LockState.AgentHolds, token)

        try:
            with open(filepath, "r", errors="replace", encoding="utf-8") as f:
                before_lines = len(f.readlines())
            with open(filepath, "a", encoding="utf-8") as f:
                f.write(content)

            self.BuildVarFile(filename)
            ok = self._record_op(filename, "WRITE")
            self._record_delta(filename, Delta(
                op="INSERT", session=self._session_id,
                timestamp=time.strftime("%Y-%m-%dT%H:%M:%S"),
                at_line=before_lines + 1,
                content=content,
            ))
            return ok
        finally:
            self._release_lock(filename)

    def CreateFile(self, token: AllowToken, filename: str, content: str = ""):
        self._validate_token(token, "create_file", filename)
        if not self._increment_ops(token):
            raise RuntimeError("Session op limit reached")

        filepath = self.SandboxPath(filename)
        if filepath.exists():
            raise FileExistsError(f"{filename} already exists")

        filepath.parent.mkdir(parents=True, exist_ok=True)
        with open(filepath, "w", encoding="utf-8") as f:
            f.write(content)

        self.BuildVarFile(filename)
        ok = self._record_op(filename, "CREATE")
        self._record_delta(filename, Delta(
            op="CREATE", session=self._session_id,
            timestamp=time.strftime("%Y-%m-%dT%H:%M:%S"),
            content=content,
        ))
        return ok

    def DeleteFile(self, token: AllowToken, chunk_key: str, filename: str):
        """chunk_key is passed for AMS logging context (which chunk was last read)."""
        self._validate_token(token, "delete_file", filename)
        if not self._increment_ops(token):
            raise RuntimeError("Session op limit reached")
        self._wait_if_sleeping(filename)

        filepath = self.SandboxPath(filename)
        if not filepath.exists():
            raise FileNotFoundError(f"{filename} does not exist")

        # Snapshot before delete for rollback
        with open(filepath, "r", errors="replace", encoding="utf-8") as f:
            snapshot = f.read()

        filepath.unlink()

        # Remove var file
        var_path = self.chunks_dir / f"_{filename.replace('/', '_')}.var"
        if var_path.exists():
            var_path.unlink()

        ok = self._record_op(filename, "DELETE")
        self._record_delta(filename, Delta(
            op="DELETE", session=self._session_id,
            timestamp=time.strftime("%Y-%m-%dT%H:%M:%S"),
            chunk_ref=chunk_key,
            snapshot=snapshot,
        ))
        return ok

    def ListFiles(self, token: AllowToken, subpath: str = ".") -> list[str]:
        self._validate_token(token, "list_files", "*")
        dirpath = self.SandboxPath(subpath)
        result  = []
        ignore  = self.config.get("ignore", [])
        track   = self.config.get("track_files", ["*.py"])
        import fnmatch
        for f in sorted(dirpath.rglob("*")):
            if not f.is_file():
                continue
            rel = str(f.relative_to(self.root))
            if any(ig in rel for ig in ignore):
                continue
            if ".PFPS" in rel:
                continue
            result.append(rel)
            # Auto-build var file so agent can read chunks immediately
            if any(fnmatch.fnmatch(f.name, p) for p in track):
                try:
                    self.BuildVarFile(rel)
                except Exception:
                    pass
        return result

    # --- Rollback ------------------------------------------------------------

    def Rollback(self, filename: str, to_session: str = None):
        """
        Roll back a file to before a given session touched it.
        If to_session is None, rolls back the last delta.
        """
        track_dir  = self._file_track_dir(filename)
        deltas_dir = track_dir / "deltas"
        deltas     = sorted(deltas_dir.glob("*.delta"))

        if not deltas:
            raise ValueError(f"No deltas recorded for {filename}")

        # Find the snapshot in the last DELETE or WRITE delta
        for delta_path in reversed(deltas):
            with open(delta_path, encoding="utf-8") as f:
                d = json.load(f)
            if to_session and d["session"] != to_session:
                continue
            if d.get("snapshot"):
                filepath = self.SandboxPath(filename)
                with open(filepath, "w", encoding="utf-8") as f:
                    f.write(d["snapshot"])
                self.BuildVarFile(filename)
                return True

        raise ValueError(f"No snapshot found to roll back {filename}")