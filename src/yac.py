"""
YourAssistantCoder (yac) - yac.py
CLI entry point. No args = TUI.
"""

import sys
import os
import argparse
from pathlib import Path


# Strict project root detection::
# Order: 1) --path arg  2) walk up from CWD  3) CWD itself


def find_project_root(start: str = ".") -> str:
    current = Path(start).resolve()
    while True:
        if (current / ".YAC" / ".PFPS" / "sandbox.json").exists():
            return str(current)
        parent = current.parent
        if parent == current:
            return str(Path(start).resolve())
        current = parent


def get_script_dir() -> Path:
    """Always returns the directory of yac.py itself, never CWD."""
    return Path(__file__).resolve().parent


#  Commands


def cmd_init(args):
    from pfps import PFPS
    from console import console
    import json

    # Resolve path relative to CWD, never relative to script
    path = str(Path(args.path).resolve()) if args.path else str(Path.cwd())
    os.makedirs(path, exist_ok=True)
    TFiles = ["*"]
    IFiles = ["__pycache__", ".env", ".git", "node_modules"]
    PName = args.name
    PRole = args.role
    PPrint = args.allow_print
    pfps = PFPS.RegisterProject(
        name=PName,
        root=path,
        role=PRole,
        allow_print=PPrint,
        track_files=TFiles,
        ignore=IFiles,
    )
    pfps.config["model"] = args.model
    with open(pfps.sandbox_json, "w", encoding="utf-8") as f:
        json.dump(pfps.config, f, indent=2)

    console.print(
        f"[bold green]✓[/bold green] Project [cyan]{args.name}[/cyan] at [dim]{path}[/dim] | model: [magenta]{args.model}[/magenta]"
    )


def cmd_chat(args):
    """Interactive Rich REPL: keeps prompting until you quit, and supports
    the same slash-commands as the Textual TUI (/git, /diagnose, /model,
    plus the plain prompt-prefix ones)."""
    from pfps import PFPS
    from agent import run_agent
    from console import console, print_banner
    from commands import (
        COMMANDS,
        MODELS,
        DIAGNOSE_PROMPT,
        parse_git_command,
        parse_yes_run_command,
        is_yes_run_usage,
        is_diagnose_command,
        is_model_command,
        is_team_usage,
        parse_model_switch,
        parse_optimize_command,
        parse_team_command,
    )
    from rich.table import Table
    from rich.markup import escape

    print_banner()

    if args.path and args.path != ".":
        root = str(Path(args.path).resolve())
    else:
        root = find_project_root(str(Path.cwd()))

    pfps = PFPS.LoadProject(root)
    model = args.model or pfps.config.get("model", "claude")

    console.print(f"[dim]Root:[/dim] [cyan]{root}[/cyan]")
    console.print(f"[dim]Model:[/dim] [magenta]{model}[/magenta]")
    console.print(
        "[dim]Type / for a list of slash-commands. Ctrl+C or 'exit' to quit.[/dim]\n"
    )

    def show_commands():
        table = Table(
            title="Slash commands", show_header=True, header_style="bold cyan"
        )
        table.add_column("Command")
        table.add_column("Description")
        for c in COMMANDS:
            table.add_row(c.usage, c.description)
        console.print(table)

    def show_models():
        table = Table(title="Models", show_header=True, header_style="bold cyan")
        table.add_column("Key")
        table.add_column("Name")
        table.add_column("")
        for key, label in MODELS:
            marker = "[green]current[/green]" if key == model else ""
            table.add_row(key, label, marker)
        console.print(table)
        console.print("[dim]Switch with: /model <name>[/dim]")

    while True:
        try:
            prompt = console.input("[bold cyan]you[/bold cyan] › ").strip()
        except (EOFError, KeyboardInterrupt):
            console.print("\n[dim]bye.[/dim]")
            break

        if not prompt:
            continue
        if prompt.lower() in ("exit", "quit", ":q"):
            break

        if prompt == "/":
            show_commands()
            continue

        if is_model_command(prompt):
            if prompt.strip() == "/model":
                show_models()
            else:
                switched = parse_model_switch(prompt)
                if switched:
                    model = switched
                    console.print(
                        f"[green]✓[/green] model switched to [magenta]{model}[/magenta] (this session only; use 'yac edit-role' to persist)"
                    )
                else:
                    console.print(
                        "[yellow]Unknown model. Type /model to see the list.[/yellow]"
                    )
            continue

        if is_yes_run_usage(prompt):
            console.print("[yellow]Usage: /yes-run <shell command>[/yellow]")
            continue

        yes_cmd = parse_yes_run_command(prompt)
        if yes_cmd is not None:
            from shell_exec import ShellExecutor

            executor = ShellExecutor(str(pfps.root), confirm_callback=lambda c: True)
            result = executor.run(yes_cmd, reason=f"user requested: {prompt}")
            console.print(escape(result))
            pfps.AppendHistory("shell", yes_cmd, result[:300])
            continue

        git_cmd = parse_git_command(prompt)
        if git_cmd is not None:
            from shell_exec import ShellExecutor

            executor = ShellExecutor(str(pfps.root))
            result = executor.run(git_cmd, reason=f"user requested: {prompt}")
            console.print(escape(result))  # git prints "[main abc123] ..."
            pfps.AppendHistory("shell", git_cmd, result[:300])
            continue

        if is_team_usage(prompt):
            console.print("[yellow]Usage: /team <what you want done>[/yellow]")
            continue

        team_prompt = parse_team_command(prompt)
        if team_prompt is not None:
            run_agent(
                team_prompt,
                pfps,
                role=pfps.config.get("role", "Editor"),
                model=model,
                team=True,
            )
            continue

        if is_diagnose_command(prompt):
            prompt = DIAGNOSE_PROMPT

        optimize_prompt = parse_optimize_command(prompt)
        if optimize_prompt is not None:
            prompt = optimize_prompt

        run_agent(prompt, pfps, role=pfps.config.get("role", "Editor"), model=model)


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

    pfps = PFPS.LoadProject(root)
    model = args.model or pfps.config.get("model", "claude")
    run_agent(
        args.prompt,
        pfps,
        role=pfps.config.get("role", "Editor"),
        model=model,
        team=args.team,
    )


def cmd_log(args):
    from pfps import PFPS
    from console import console

    root = find_project_root(args.path if args.path != "." else str(Path.cwd()))
    pfps = PFPS.LoadProject(root)
    log_path = pfps.AMSLocation(".ams") / "session.log"
    if not log_path.exists():
        console.print("[dim]No session log yet.[/dim]")
        return
    # The log holds arbitrary text (code, brackets). As Rich markup, a stray
    # [/x] raised MarkupError and anything like [main] silently vanished.
    console.print(log_path.read_text(encoding="utf-8"), markup=False, highlight=False)


def cmd_status(args):
    from pfps import PFPS
    from permissions import issue_token
    from console import console

    root = find_project_root(args.path if args.path != "." else str(Path.cwd()))
    pfps = PFPS.LoadProject(root)
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


def cmd_edit_role(args):
    import json

    root = find_project_root(args.path if args.path != "." else str(Path.cwd()))
    cfg_path = Path(root) / ".YAC" / ".PFPS" / "sandbox.json"
    if not cfg_path.exists():
        print("No PFPS project found.")
        return
    cfg = json.loads(cfg_path.read_text(encoding="utf-8"))
    cfg["model"] = args.model
    cfg["role"] = args.role
    cfg_path.write_text(json.dumps(cfg, indent=2), encoding="utf-8")
    from console import console

    console.print(
        f"[green]✓[/green] model=[magenta]{args.model}[/magenta] role=[cyan]{args.role}[/cyan]"
    )


def cmd_key_clear(args):
    from agent import clear_api_key

    clear_api_key(args.provider)


#  Entry point


def main():
    # No args at all -> launch TUI
    if len(sys.argv) == 1:
        from tui import run_tui

        run_tui()
        return

    parser = argparse.ArgumentParser(prog="yac", description="YourAssistantCoder")
    sub = parser.add_subparsers(dest="command")

    p_init = sub.add_parser("init")
    p_init.add_argument("name")
    p_init.add_argument("--path", default=None)
    p_init.add_argument(
        "--role", default="Editor", choices=["Viewer", "Editor", "Owner"]
    )
    p_init.add_argument(
        "--model",
        default="gpt",
        choices=[
            "claude",
            "gpt",
            "gemini",
            "ollama",
            "deepseek",
            "mistral",
            "openrouter_free",
        ],
    )
    p_init.add_argument("--allow-print", action="store_true")

    p_run = sub.add_parser("run")
    p_run.add_argument("prompt")
    p_run.add_argument("--path", default=".")
    p_run.add_argument(
        "--team",
        action="store_true",
        help="Plan the work and run it with several agents",
    )
    p_run.add_argument(
        "--model",
        default=None,
        choices=[
            "claude",
            "gpt",
            "gemini",
            "ollama",
            "deepseek",
            "mistral",
            "openrouter_free",
        ],
    )

    p_chat = sub.add_parser("chat", help="Interactive Rich REPL with slash-commands")
    p_chat.add_argument("--path", default=".")
    p_chat.add_argument(
        "--model",
        default=None,
        choices=[
            "claude",
            "gpt",
            "gemini",
            "ollama",
            "deepseek",
            "mistral",
            "openrouter_free",
        ],
    )

    p_log = sub.add_parser("log")
    p_log.add_argument("--path", default=".")

    p_st = sub.add_parser("status")
    p_st.add_argument("--path", default=".")

    p_rb = sub.add_parser("rollback")
    p_rb.add_argument("file")
    p_rb.add_argument("--path", default=".")

    p_kc = sub.add_parser("key-clear")
    p_kc.add_argument(
        "--provider",
        default="gpt",
        choices=[
            "claude",
            "gpt",
            "gemini",
            "ollama",
            "deepseek",
            "mistral",
            "openrouter_free",
        ],
    )

    # edit-role MODEL ROLE  (strict positional index)
    p_er = sub.add_parser(
        "edit-role", help="Change model and role: edit-role MODEL ROLE"
    )
    p_er.add_argument(
        "model",
        choices=[
            "claude",
            "gpt",
            "gemini",
            "ollama",
            "deepseek",
            "mistral",
            "openrouter_free",
        ],
    )
    p_er.add_argument("role", choices=["Viewer", "Editor", "Owner"])
    p_er.add_argument("--path", default=".")

    args = parser.parse_args()
    dispatch = {
        "init": cmd_init,
        "run": cmd_run,
        "chat": cmd_chat,
        "log": cmd_log,
        "status": cmd_status,
        "rollback": cmd_rollback,
        "key-clear": cmd_key_clear,
        "edit-role": cmd_edit_role,
    }

    if args.command in dispatch:
        dispatch[args.command](args)
    else:
        # Unknown or missing command -> TUI
        from tui import run_tui

        run_tui()


if __name__ == "__main__":
    try:
        main()
    except KeyboardInterrupt:
        print("\033[33m\nControl-C exit!\033[0m")
    except Exception as e:
        print(f"\033[33mError: {e}\033[0m")
