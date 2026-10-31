"""
YourAssistantCoder (yac) - shell_exec.py
Shell command execution with user confirmation.
Works in both CLI (rich prompt) and TUI (popup via callback).
"""

import re
import subprocess
import threading
from pathlib import Path

from rich.markup import escape

_CONTROL = re.compile(
    r"\x1b\[[0-?]*[ -/]*[@-~]|\x1b\][^\x07\x1b]*(?:\x07|\x1b\\)|[\x00-\x09\x0b-\x1f\x7f]"
)
# Zero-width and bidi-override characters can make a command read differently
# from what it does (Trojan Source), so they are shown as \uXXXX instead.
_INVISIBLE = re.compile("[\u200b-\u200f\u202a-\u202e\u2060-\u2069\ufeff]")


def display_text(text: str) -> str:
    """Make agent-supplied text safe to show in an approval prompt.

    The prompts render Rich markup, and the command was interpolated raw, so a
    command could contain [conceal]...[/conceal] (or a fake [/cyan]) and the
    user would approve something other than what would run. This escapes the
    markup, drops terminal control codes, shows newlines as \\n (a newline
    runs a second command) and makes invisible characters visible."""
    text = _CONTROL.sub("", str(text))
    text = _INVISIBLE.sub(lambda m: f"\\u{ord(m.group()):04x}", text)
    return escape(text.replace("\n", "\\n"))


# Dangerous command patterns that always require confirmation
ALWAYS_CONFIRM = {
    "rm", "del", "rmdir", "rd", "format", "mkfs",
    "dd", "shred", "sudo", "su", "chmod", "chown",
    "curl", "wget", "pip", "npm", "yarn", "apt",
    "reg", "regedit", "shutdown", "reboot", "halt",
}

def _is_dangerous(cmd: str) -> bool:
    parts = cmd.strip().split()
    if not parts:
        return False
    # Compare the program name only: "/bin/rm" and "RM.EXE" are both rm.
    # (rstrip(".exe") stripped characters, not the suffix.)
    first = parts[0].lower().replace("\\", "/").rsplit("/", 1)[-1]
    if first.endswith(".exe"):
        first = first[:-4]
    return first in ALWAYS_CONFIRM


class ShellExecutor:
    """
    Executes shell commands after user confirmation.
    confirm_callback: callable(cmd) -> bool
        In CLI mode: rich prompt
        In TUI mode: injected popup callback
    """

    def __init__(self, project_root: str, confirm_callback=None):
        self.root             = Path(project_root).resolve()
        self._confirm_cb      = confirm_callback or self._cli_confirm
        self._pending_event   = threading.Event()
        self._pending_result  = False
        self._confirm_lock    = threading.Lock()

    def _cli_confirm(self, cmd: str) -> bool:
        from rich.console import Console
        from rich.panel import Panel
        c = Console()
        c.print(Panel(
            f"[bold]Shell command requested:[/bold]\n\n  [cyan]{display_text(cmd)}[/cyan]",
            title="[yellow]YAC: Confirm Shell Command[/yellow]",
            border_style="yellow",
        ))
        ans = input("  Allow? [y/N]: ").strip().lower()
        return ans == "y"

    def set_tui_confirm(self, callback):
        """Inject TUI popup confirmation callback."""
        self._confirm_cb = callback

    def run(self, cmd: str, reason: str = "") -> str:
        """
        Run a shell command after confirmation.
        Returns stdout+stderr as string, or error message.
        """
        # One prompt at a time, otherwise parallel agents interleave their
        # confirmations and the user can't tell which answer goes where.
        with self._confirm_lock:
            allowed = self._confirm_cb(cmd)
        if not allowed:
            return "DENIED: User rejected shell command."

        try:
            result = subprocess.run(
                cmd,
                shell=True,
                capture_output=True,
                text=True,
                cwd=str(self.root),
                timeout=60,
            )
            output = result.stdout
            if result.stderr:
                output += f"\nSTDERR: {result.stderr}"
            if result.returncode != 0:
                output += f"\nEXIT CODE: {result.returncode}"
            return output.strip() or "OK (no output)"
        except subprocess.TimeoutExpired:
            return "ERROR: Command timed out after 60s"
        except Exception as e:
            return f"ERROR: {e}"