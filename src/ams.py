"""
YourAssistantCoder (yac) - ams.py
Action Monitoring System.
CheckOut, UseTool, SpecialUse, Working, WorkingStop, printtoconsole.
"""

import time
import threading
from pathlib import Path
from typing import Optional

from permissions import AllowToken, Permissions, issue_token
from notify import PFPSNotify


# --- AMS Logger -------------------------------------------------------------

class AMSLogger:
    def __init__(self, log_path: Path):
        self.log_path = log_path
        self.log_path.parent.mkdir(parents=True, exist_ok=True)

    def write(self, event: str, detail: str):
        ts   = time.strftime("%H:%M:%S")
        line = f"[{ts}] {event:<12} -> {detail}\n"
        with open(self.log_path, "a", encoding="utf-8") as f:
            f.write(line)


# --- AMS Core ----------------------------------------------------------------

class AMS:
    # Tools Claude is allowed to call via UseTool
    ALLOWED_TOOLS = {
        "read_chunk",
        "write_chunk",
        "append_chunk",
        "create_file",
        "delete_file",
        "list_files",
    }

    def __init__(self, pfps, console, session_id: str):
        self.pfps       = pfps
        self.console    = console
        self.session_id = session_id
        self.logger     = AMSLogger(pfps.AMSLocation(".ams") / "session.log")
        self._working   = False
        self._stop_event = threading.Event()
        self._current_token: Optional[AllowToken] = None

    # --- CheckOut ------------------------------------------------------------

    def CheckOut(self, permission_level: str, files: list = None) -> AllowToken:
        """
        Claude requests a permission token.
        Returns AllowToken scoped to permission_level and optional file list.
        """
        role_map = {
            Permissions.Read:            "Viewer",
            Permissions.ReadWrite:       "Editor",
            Permissions.ReadWriteDelete: "Owner",
            Permissions.SpecialUse:      "Owner",
        }
        role  = role_map.get(permission_level, "Viewer")
        token = issue_token(role, self.session_id, files)
        self._current_token = token
        self.logger.write("CHECKOUT", f"{permission_level!r} -> (role={role})")
        return token

    # --- UseTool -------------------------------------------------------------

    def UseTool(self, toolname: str, token: AllowToken, **kwargs):
        """
        Claude calls a tool by name. AMS validates, logs, dispatches.
        """
        if toolname not in self.ALLOWED_TOOLS:
            self.logger.write("BLOCKED", f"Unknown tool: {toolname!r}")
            raise ValueError(f"[BLOCKED] Tool {toolname!r} is not in the allowed tool list")

        if token.expired:
            self.logger.write("BLOCKED", f"Expired token attempted {toolname!r}")
            raise PermissionError(f"Token expired - cannot use {toolname!r}")

        self.logger.write("USETOOL", f"{toolname} | {kwargs}")

        # Dispatch to PFPS
        dispatch = {
            "read_chunk":   lambda: self.pfps.ReadChunk(token, kwargs["filename"], kwargs["chunk_key"]),
            "write_chunk":  lambda: self.pfps.WriteChunk(token, kwargs["filename"], kwargs["chunk_key"], kwargs["content"]),
            "append_chunk": lambda: self.pfps.AppendChunk(token, kwargs["filename"], kwargs["content"]),
            "create_file":  lambda: self.pfps.CreateFile(token, kwargs["filename"], kwargs.get("content", "")),
            "delete_file":  lambda: self.pfps.DeleteFile(token, kwargs.get("chunk_key", ""), kwargs["filename"]),
            "list_files":   lambda: self.pfps.ListFiles(token, kwargs.get("subpath", ".")),
        }

        result = dispatch[toolname]()

        # result=False means suspicious chain was detected
        if result is False:
            self._prompt_terminate(kwargs.get("filename", "unknown"))

        return result

    # --- SpecialUse ----------------------------------------------------------

    def SpecialUse(self, String: str, ask_confirm: bool = False) -> str:
        """
        For ops outside normal tools - edge cases, risky operations.
        ask_confirm=True → prompts user before executing.
        Returns result string.
        """
        self.logger.write("SPECIAL", f"{String!r} | confirm={ask_confirm}")

        if ask_confirm:
            self.console.print(f"\n[bold yellow]⚠  AMS SpecialUse[/bold yellow]")
            self.console.print(f"   Claude wants to execute: [cyan]{String}[/cyan]")
            answer = self.console.input("   Allow? [bold green]y[/bold green]/[bold red]n[/bold red]: ").strip().lower()
            if answer != "y":
                self.logger.write("SPECIAL", "DENIED by user")
                return "DENIED"

        # Execute the special string as a sandboxed shell command
        import subprocess
        try:
            result = subprocess.run(
                String,
                shell=True,
                capture_output=True,
                text=True,
                cwd=str(self.pfps.root),
                timeout=30,
            )
            output = result.stdout + result.stderr
            self.logger.write("SPECIAL", f"RESULT: {output[:100]}")
            return output
        except subprocess.TimeoutExpired:
            return "TIMEOUT"
        except Exception as e:
            return f"ERROR: {e}"

    # --- Suspicious chain prompt ---------------------------------------------

    def _prompt_terminate(self, filename: str):
        self.console.print(f"\n[bold red]⚠  PFPS Warning[/bold red]")
        self.console.print(f"   Suspicious operation chain detected on [cyan]{filename}[/cyan]")
        answer = self.console.input("   Terminate agent response? [bold red]y[/bold red]/[bold green]n[/bold green]: ").strip().lower()
        if answer == "y":
            self.logger.write("TERMINATE", f"User terminated response on {filename}")
            if self._current_token:
                self._current_token.revoke()
            self._stop_event.set()

    # --- Working / WorkingStop -----------------------------------------------

    def Working(self, Yes: bool = True, message: str = ""):
        if not Yes:
            return
        self._working = True
        self._stop_event.clear()
        self.logger.write("WORKING", message)
        self.console.print(f"\n[bold green]⟳[/bold green]  [italic]{message}[/italic]")

    def WorkingStop(self, Yes: bool = True):
        if not Yes:
            return
        self._working = False
        self.logger.write("WORKSTOP", "Graceful exit")
        self.console.print(f"\n[bold blue]✓[/bold blue]  [dim]Agent finished.[/dim]")
        self.pfps.commit_session()

    @property
    def should_stop(self) -> bool:
        return self._stop_event.is_set()

    # --- printtoconsole ------------------------------------------------------

    def printtoconsole(self, message: str):
        """
        Claude's only Rich stdout pipe. Logged by AMS.
        Max 2000 chars to prevent spam.
        """
        # Strip raw ANSI escape codes to prevent injection
        import re
        clean = re.sub(r"\x1b\[[0-9;]*m", "", message)
        clean = clean[:2000]   # output size cap

        self.logger.write("CONSOLE", clean[:80])
        self.console.print(clean)

    # --- Build Claude's globals ----------------------------------------------

    def build_globals(self) -> dict:
        """
        Construct the restricted __globals__ dict Claude executes inside.
        """
        import builtins

        g = {
            # Environment descriptor
            "__globals__": {
                "PathSandboxed": self.pfps.SandboxPath,
                "AMSlocation":   self.pfps.AMSLocation(".ams"),
                "Read+Write":    Permissions.ReadWrite,
            },

            # AMS API
            "CheckOut":       self.CheckOut,
            "UseTool":        self.UseTool,
            "SpecialUse":     self.SpecialUse,
            "Working":        self.Working,
            "WorkingStop":    self.WorkingStop,
            "printtoconsole": self.printtoconsole,

            # PFPS direct ops (require token as first arg)
            "PFPS": self.pfps,
        }

        # Unlock raw print() if project registered with allow_print=True
        if self.pfps.config.get("allow_print", False):
            g["print"] = builtins.print

        return g
