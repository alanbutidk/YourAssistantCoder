"""
YourAssistantCoder (yac) - yac.py
CLI entry point.
"""

import sys
import argparse
from console import console, print_banner
from pfps import PFPS
from agent import run_agent, clear_api_key


def cmd_init(args):
    path = args.path or "."
    # If path doesn't exist, create it
    import os
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
    import json
    with open(pfps.sandbox_json, "w") as f:
        json.dump(pfps.config, f, indent=2)
    console.print(f"[bold green]✓[/bold green] Project [cyan]{args.name}[/cyan] registered at [dim]{pfps.root}[/dim] | model: [magenta]{args.model}[/magenta]")


def cmd_run(args):
    print_banner()
    pfps  = PFPS.LoadProject(args.path or ".")
    model = args.model or pfps.config.get("model", "claude")
    run_agent(args.prompt, pfps, role=pfps.config.get("role", "Editor"), model=model)


def cmd_log(args):
    pfps     = PFPS.LoadProject(args.path or ".")
    log_path = pfps.AMSLocation(".ams") / "session.log"
    if not log_path.exists():
        console.print("[dim]No session log yet.[/dim]")
        return
    console.print(log_path.read_text())


def cmd_status(args):
    pfps = PFPS.LoadProject(args.path or ".")
    files = pfps.ListFiles(
        __import__("permissions").issue_token("Viewer", "status"),
    )
    console.print(f"[bold]Tracked files ({len(files)}):[/bold]")
    for f in files:
        console.print(f"  [cyan]{f}[/cyan]")


def cmd_rollback(args):
    pfps = PFPS.LoadProject(args.path or ".")
    pfps.Rollback(args.file)
    console.print(f"[bold green]✓[/bold green] Rolled back [cyan]{args.file}[/cyan]")


def cmd_key_clear(args):
    from agent import clear_api_key
    clear_api_key(args.provider)


def main():
    parser = argparse.ArgumentParser(prog="yac", description="YourAssistantCoder")
    sub    = parser.add_subparsers(dest="command")

    # init
    p_init = sub.add_parser("init", help="Register a project")
    p_init.add_argument("name")
    p_init.add_argument("--path",        default=".")
    p_init.add_argument("--role",        default="Editor", choices=["Viewer","Editor","Owner"])
    p_init.add_argument("--model",       default="claude", choices=["claude","gpt","gemini"])
    p_init.add_argument("--allow-print", action="store_true")

    # run
    p_run = sub.add_parser("run", help="Run agent with a prompt")
    p_run.add_argument("prompt")
    p_run.add_argument("--path",  default=".")
    p_run.add_argument("--model", default=None, choices=["claude","gpt","gemini"],
                       help="Override model for this run")

    # log
    p_log = sub.add_parser("log", help="View AMS session log")
    p_log.add_argument("--path", default=".")

    # status
    p_status = sub.add_parser("status", help="Show tracked files")
    p_status.add_argument("--path", default=".")

    # rollback
    p_rb = sub.add_parser("rollback", help="Roll back a file")
    p_rb.add_argument("file")
    p_rb.add_argument("--path", default=".")

    # key-clear
    p_kc = sub.add_parser("key-clear", help="Remove stored API key")
    p_kc.add_argument("--provider", default="claude", choices=["claude","gpt","gemini"])

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
        print_banner()
        parser.print_help()


if __name__ == "__main__":
    main()
