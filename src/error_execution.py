"""
YourAssistantCoder (yac) - error_execution.py
Live execution feedback loop with nap system.
"""

import io
import sys
import time
from contextlib import redirect_stdout, redirect_stderr
from rich.panel import Panel
from rich.prompt import Prompt
from rich import box


class ErrorExecution:
    MAX_FAILURES = 3

    INSTALL_HINTS = {
        "ImportError":      "pip install {pkg}",
        "ModuleNotFoundError": "pip install {pkg}",
        "PermissionError":  "sudo chmod +x {file}",
        "FileNotFoundError": "check path or install missing binary",
    }

    def __init__(self, ams, console):
        self.ams                 = ams
        self.console             = console
        self.consecutive_failures = 0
        self.last_error          = ""
        self._agent_ref          = None   # set by agent.py after init

    def bind_agent(self, agent):
        self._agent_ref = agent

    # --- Main entry ----------------------------------------------------------

    def Run(self, code: str, __globals__: dict) -> str:
        stdout_buf = io.StringIO()
        stderr_buf = io.StringIO()

        try:
            with redirect_stdout(stdout_buf), redirect_stderr(stderr_buf):
                exec(code, __globals__)

            output = stdout_buf.getvalue() + stderr_buf.getvalue()
            self.consecutive_failures = 0
            self.ams.logger.write("EXEC_OK", output[:80] or "(no output)")
            return output or "OK"

        except Exception as e:
            self.consecutive_failures += 1
            self.last_error = str(e)
            err_type = type(e).__name__

            self.ams.logger.write(
                "EXEC_FAIL",
                f"{err_type}: {e} (attempt {self.consecutive_failures}/{self.MAX_FAILURES})"
            )

            # Check if user needs to run something
            user_cmd = self._detect_user_cmd(e)
            if user_cmd:
                self._prompt_user_cmd(user_cmd, reason=str(e))
                # Retry once after user acts
                return self.Run(code, __globals__)

            if self.consecutive_failures >= self.MAX_FAILURES:
                return self._prompt_nap()

            return f"ERROR ({err_type}): {e}\nFix this and retry."

    # --- Detect if user needs to run a command -------------------------------

    def _detect_user_cmd(self, e: Exception) -> str | None:
        err_type = type(e).__name__

        if err_type in ("ImportError", "ModuleNotFoundError"):
            pkg = str(e).split("'")[1] if "'" in str(e) else str(e).split()[-1]
            return f"pip install {pkg}"

        if err_type == "PermissionError":
            return f"sudo chmod +x {e.filename}" if hasattr(e, "filename") else None

        return None

    # --- Prompt user to run a command ----------------------------------------

    def _prompt_user_cmd(self, cmd: str, reason: str = ""):
        self.console.print(Panel(
            f"[dim]{reason}[/dim]\n\n"
            f"Run this command to continue:\n\n"
            f"  [bold cyan]$ {cmd}[/bold cyan]",
            title="[bold yellow]YAC: Action Required[/bold yellow]",
            box=box.ROUNDED,
            padding=(1, 2),
        ))
        self.ams.logger.write("PROMPT_CMD", cmd)
        input("  Press Enter when done... ")

    # --- Nap prompt ----------------------------------------------------------

    def _prompt_nap(self) -> str:
        self.console.print(Panel(
            f"[dim]3 consecutive execution failures:[/dim]\n"
            f"[red]{self.last_error}[/red]\n\n"
            f"[bold]Try giving it a nap?[/bold]\n\n"
            f"  [cyan]N[/cyan]  Nap - reset context, retry fresh\n"
            f"  [yellow]C[/yellow]  Continue anyway\n"
            f"  [red]A[/red]  Abort session",
            title="[bold yellow]⚠  YAC: Claude is making mistakes[/bold yellow]",
            box=box.ROUNDED,
            padding=(1, 2),
        ))

        self.ams.logger.write("NAP_PROMPT", "User shown nap dialog")
        choice = input("  Choice [N/C/A]: ").strip().upper()

        if choice == "N":
            return self._do_nap()
        elif choice == "A":
            self.ams.logger.write("ABORT", "User aborted session")
            self.ams.WorkingStop(Yes=True)
            sys.exit(0)
        else:
            self.consecutive_failures = 0
            return f"Continuing after {self.MAX_FAILURES} failures."

    def _do_nap(self) -> str:
        if self._agent_ref:
            self._agent_ref.nap()
        self.consecutive_failures = 0
        self.ams.logger.write("NAP", "Context reset after 3 consecutive failures")
        self.console.print("\n[dim]Claude had a nap. Retrying fresh...[/dim]\n")
        return "NAP_TAKEN"
