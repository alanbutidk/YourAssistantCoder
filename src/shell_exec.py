"""
YourAssistantCoder (yac) - shell_exec.py
Shell command execution with user confirmation.
Works in both CLI (rich prompt) and TUI (popup via callback).
"""

import subprocess
import threading
from pathlib import Path


# Dangerous command patterns that always require confirmation
ALWAYS_CONFIRM = {
    "rm", "del", "rmdir", "rd", "format", "mkfs",
    "dd", "shred", "sudo", "su", "chmod", "chown",
    "curl", "wget", "pip", "npm", "yarn", "apt",
    "reg", "regedit", "shutdown", "reboot", "halt",
}

def _is_dangerous(cmd: str) -> bool:
    first = cmd.strip().split()[0].lower().rstrip(".exe")
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

    def _cli_confirm(self, cmd: str) -> bool:
        from rich.console import Console
        from rich.panel import Panel
        c = Console()
        c.print(Panel(
            f"[bold]Shell command requested:[/bold]\n\n  [cyan]{cmd}[/cyan]",
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
        if not self._confirm_cb(cmd):
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