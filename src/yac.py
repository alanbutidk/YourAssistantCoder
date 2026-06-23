"""
YourAssistantCoder (yac) - yac.py
CLI entry point. No args = TUI.
"""

import sys
import os
import argparse
from pathlib import Path


# ── Strict project root detection ────────────────────────────────────────────
# Order: 1) --path arg  2) walk up from CWD  3) CWD itself

def find_project_root(start: str = ".") -> str:
    current = Path(start).resolve()
    while True:
        if (current / ".PFPS" / "sandbox.json").exists():
            return str(current)
        parent = current.parent
        if parent == current:
            return str(Path(start).resolve())
        current = parent


def get_script_dir() -> Path:
    """Always returns the directory of yac.py itself, never CWD."""
    return Path(__file__).resolve().parent


# ── Commands ──────────────────────────────────────────────────────────────────

def cmd_init(args):
    from pfps import PFPS
    from console import console
    import json

    # Resolve path relative to CWD, never relative to script
    path = str(Path(args.path).resolve()) if args.path else str(Path.cwd())
    os.makedirs(path, exist_ok=True)

    pfps = PFPS.RegisterProject(
        name        = args.name,
        root        = path,
        role        = args.role,
        allow_print = args.allow_print,
        track_files = ["*.py", "*.js", "*.ts", "*.md"],
        ignore      = ["__pycache__", ".env", ".git", "node_modules"],
    )
    pfps.config["model"] = args.model
    with open(pfps.sandbox_json, "w", encoding="utf-8") as f:
        json.dump(pfps.config, f, indent=2)

    console.print(f"[bold green]✓[/bold green] Project [cyan]{args.name}[/cyan] at [dim]{path}[/dim] | model: [magenta]{args.model}[/magenta]")


def cmd_run(args):
    from pfps import PFPS
    from agent import run_agent
    from console import console, print_banner
    print_banner()

    # Strict order: --path > walk up from CWD
    if args.path and args.path != ".":
        root = str(Path(args.path).resolve())
    else:
        root = find_project_root(str(Path.cwd()))

    pfps  = PFPS.LoadProject(root)
    model = args.model or pfps.config.get("model", "claude")
    run_agent(args.prompt, pfps, role=pfps.config.get("role", "Editor"), model=model)


def cmd_log(args):
    from pfps import PFPS
    from console import console
    root = find_project_root(args.path if args.path != "." else str(Path.cwd()))
    pfps = PFPS.LoadProject(root)
    log_path = pfps.AMSLocation(".ams") / "session.log"
    if not log_path.exists():
        console.print("[dim]No session log yet.[/dim]")
        return
    console.print(log_path.read_text(encoding="utf-8"))


def cmd_status(args):
    from pfps import PFPS
    from permissions import issue_token
    from console import console
    root  = find_project_root(args.path if args.path != "." else str(Path.cwd()))
    pfps  = PFPS.LoadProject(root)
    files = pfps.ListFiles(issue_token("Viewer", "status"))
    console.print(f"[bold]Tracked files ({len(files)}):[/bold]")
    for f in files:
        console.print(f"  [cyan]{f}[/cyan]")


def cmd_rollback(args):
    from pfps import PFPS
    from console import console
    root = find_project_root(args.path if args.path != "." else str(Path.cwd()))
    pfps = PFPS.LoadProject(root)
    pfps.Rollback(args.file)
    console.print(f"[bold green]✓[/bold green] Rolled back [cyan]{args.file}[/cyan]")


def cmd_key_clear(args):
    from agent import clear_api_key
    clear_api_key(args.provider)


# ── Entry point ───────────────────────────────────────────────────────────────

def main():
    # No args at all -> launch TUI
    if len(sys.argv) == 1:
        from tui import run_tui
        run_tui()
        return

    parser = argparse.ArgumentParser(prog="yac", description="YourAssistantCoder")
    sub    = parser.add_subparsers(dest="command")

    p_init = sub.add_parser("init")
    p_init.add_argument("name")
    p_init.add_argument("--path",        default=None)
    p_init.add_argument("--role",        default="Editor", choices=["Viewer","Editor","Owner"])
    p_init.add_argument("--model",       default="gpt",    choices=["claude","gpt","gemini"])
    p_init.add_argument("--allow-print", action="store_true")

    p_run = sub.add_parser("run")
    p_run.add_argument("prompt")
    p_run.add_argument("--path",  default=".")
    p_run.add_argument("--model", default=None, choices=["claude","gpt","gemini"])

    p_log = sub.add_parser("log")
    p_log.add_argument("--path", default=".")

    p_st = sub.add_parser("status")
    p_st.add_argument("--path", default=".")

    p_rb = sub.add_parser("rollback")
    p_rb.add_argument("file")
    p_rb.add_argument("--path", default=".")

    p_kc = sub.add_parser("key-clear")
    p_kc.add_argument("--provider", default="gpt", choices=["claude","gpt","gemini"])

    args = parser.parse_args()
    dispatch = {
        "init":      cmd_init,
        "run":       cmd_run,
        "log":       cmd_log,
        "status":    cmd_status,
        "rollback":  cmd_rollback,
        "key-clear": cmd_key_clear,
    }

    if args.command in dispatch:
        dispatch[args.command](args)
    else:
        # Unknown or missing command -> TUI
        from tui import run_tui
        run_tui()


if __name__ == "__main__":
    main()