"""
YourAssistantCoder (yac) - tui.py
Textual UI, Ran when only yac.py is given (or yac)
"""

from __future__ import annotations
import os
import json
import threading
from pathlib import Path
from typing import Optional

from textual import on, work
from textual.app import App, ComposeResult
from textual.binding import Binding
from textual.containers import Container, Horizontal, Vertical
from textual.screen import ModalScreen, Screen
from textual.widgets import (
    DirectoryTree, Footer, Header, Input,
    Label, Markdown, RichLog, Static, Button
)
from textual.widget import Widget


CSS = """
$bg:     #1e222a;
$bg2:    #2d3139;
$bg3:    #353b45;
$border: #3e4452;
$cyan:   #56b6c2;
$green:  #98c379;
$yellow: #e5c07b;
$red:    #e06c75;
$purple: #c678dd;
$blue:   #61afef;
$fg:     #abb2bf;
$dim:    #5c6370;

Screen { background: $bg; color: $fg; }
Header { background: $bg2; color: $cyan; text-style: bold; }
Footer { background: $bg2; color: $dim; }

/* ── Browser ── */
#sidebar {
    width: 30;
    background: $bg2;
    border-right: solid $border;
}
#sidebar-title {
    background: $bg3;
    color: $cyan;
    text-style: bold;
    padding: 0 1;
    height: 1;
}
DirectoryTree { background: $bg2; color: $fg; }
DirectoryTree:focus .highlighted { background: $bg3; color: $cyan; }

#main { background: $bg; padding: 1 2; }
#welcome { color: $fg; margin-bottom: 1; }
#shortcuts {
    background: $bg2;
    border: solid $border;
    padding: 1;
    height: auto;
}
.key  { color: $yellow; text-style: bold; }

/* ── Chat ── */
#project-info {
    background: $bg3;
    border: solid $border;
    padding: 0 1;
    height: 1;
    color: $green;
    margin-bottom: 1;
}
#chat-log {
    background: $bg;
    border: solid $border;
    height: 1fr;
    margin-bottom: 0;
    scrollbar-color: $border;
    scrollbar-size: 1 1;
}

/* ── Input area ── */
#input-area {
    height: 5;
    background: $bg2;
    border: solid $border;
    border-top: solid $cyan;
    padding: 0;
}
#model-badge {
    background: $purple;
    color: $bg;
    text-style: bold;
    width: 10;
    height: 5;
    content-align: center middle;
    padding: 0 1;
}
#prompt-input {
    background: $bg2;
    color: $fg;
    border: none;
    height: 5;
    padding: 1 1;
}
#prompt-input:focus { border: none; outline: none; }

/* ── Confirm popup ── */
ConfirmScreen { align: center middle; }
#confirm-box {
    background: $bg2;
    border: solid $yellow;
    padding: 2 4;
    width: 62;
    height: auto;
    align: center middle;
}
#confirm-title { color: $yellow; text-style: bold; text-align: center; margin-bottom: 1; }
#confirm-msg   { color: $fg; text-align: center; margin-bottom: 2; }
#confirm-btns  { align: center middle; height: 3; }
Button         { margin: 0 1; }
Button.yes     { background: $green; color: $bg; border: none; }
Button.no      { background: $red;   color: $bg; border: none; }

/* ── API key popup ── */
ApiKeyScreen { align: center middle; }
#apikey-box {
    background: $bg2;
    border: solid $cyan;
    padding: 2 4;
    width: 64;
    height: auto;
}
#apikey-title { color: $cyan; text-style: bold; margin-bottom: 1; }
#apikey-msg   { color: $fg; margin-bottom: 1; }
#apikey-input {
    background: $bg3;
    color: $fg;
    border: solid $border;
    height: 3;
    margin-bottom: 1;
}
#apikey-err   { color: $red; height: 1; }
#apikey-btns  { align: right middle; height: 3; }
Button.save   { background: $cyan; color: $bg; border: none; }
Button.cancel-key { background: $bg3; color: $fg; border: solid $border; }
"""


# ── Confirm popup ─────────────────────────────────────────────────────────────

class ConfirmScreen(ModalScreen):
    def __init__(self, model: str, file_count: int, on_confirm, on_cancel):
        super().__init__()
        self._model   = model
        self._count   = file_count
        self._confirm = on_confirm
        self._cancel  = on_cancel

    def compose(self) -> ComposeResult:
        with Container(id="confirm-box"):
            yield Label(f"  {self._model} wants to make changes", id="confirm-title")
            yield Label(
                f"{self._model} is making changes to {self._count} files.\nAllow?",
                id="confirm-msg"
            )
            with Horizontal(id="confirm-btns"):
                yield Button("Yes", classes="yes", id="btn-yes")
                yield Button("No",  classes="no",  id="btn-no")

    @on(Button.Pressed, "#btn-yes")
    def on_yes(self): self.dismiss(); self._confirm()

    @on(Button.Pressed, "#btn-no")
    def on_no(self): self.dismiss(); self._cancel()


# ── API key popup ─────────────────────────────────────────────────────────────

class ApiKeyScreen(ModalScreen):
    def __init__(self, provider: str, on_save):
        super().__init__()
        self._provider = provider
        self._on_save  = on_save

    def compose(self) -> ComposeResult:
        with Container(id="apikey-box"):
            yield Label(f"API Key Required - {self._provider.upper()}", id="apikey-title")
            yield Label(
                f"Enter your {self._provider} API key.\nIt will be stored securely in your system keyring.",
                id="apikey-msg"
            )
            yield Input(password=True, placeholder="sk-...", id="apikey-input")
            yield Label("", id="apikey-err")
            with Horizontal(id="apikey-btns"):
                yield Button("Cancel", classes="cancel-key", id="btn-cancel-key")
                yield Button("Save",   classes="save",       id="btn-save-key")

    def on_mount(self):
        self.query_one("#apikey-input").focus()

    @on(Input.Submitted, "#apikey-input")
    def on_enter(self, event): self._do_save()

    @on(Button.Pressed, "#btn-save-key")
    def on_save(self): self._do_save()

    @on(Button.Pressed, "#btn-cancel-key")
    def on_cancel(self): self.dismiss()

    def _do_save(self):
        key = self.query_one("#apikey-input").value.strip()
        if not key:
            self.query_one("#apikey-err").update("Key cannot be empty.")
            return
        import keyring
        key_map = {"claude": "anthropic_key", "gpt": "openai_key", "gemini": "gemini_key"}
        keyring.set_password("YourAssistantCoder", key_map.get(self._provider, "anthropic_key"), key)
        self.dismiss()
        self._on_save(key)


# ── Browser view ──────────────────────────────────────────────────────────────

class BrowserView(Widget):
    def compose(self) -> ComposeResult:
        with Horizontal():
            with Vertical(id="sidebar"):
                yield Label(" YAC  Browse", id="sidebar-title")
                yield DirectoryTree(str(Path.cwd()), id="tree")
            with Vertical(id="main"):
                yield Static(
                    "[bold cyan]YourAssistantCoder[/bold cyan]  [dim](yac)[/dim]\n\n"
                    "No project found here.\n\n"
                    "Navigate the tree and press [yellow]I[/yellow] to init,\n"
                    "or open a folder that has a yac project.",
                    id="welcome"
                )
                with Container(id="shortcuts"):
                    yield Static("[bold]Shortcuts[/bold]")
                    yield Static("[yellow]I[/yellow]  Init project in selected folder")
                    yield Static("[yellow]R[/yellow]  Refresh tree")
                    yield Static("[yellow]Q[/yellow]  Quit")

    @on(DirectoryTree.DirectorySelected)
    def on_dir(self, event: DirectoryTree.DirectorySelected):
        self.app._selected_dir = str(event.path)


# ── Chat view ─────────────────────────────────────────────────────────────────

class ChatView(Widget):
    def __init__(self, project_root: str, config: dict):
        super().__init__()
        self._root   = project_root
        self._config = config
        self._busy   = False

    def compose(self) -> ComposeResult:
        model = self._config.get("model", "gpt").upper()
        name  = self._config.get("name", "project")
        with Vertical():
            yield Static(
                f" [green]{name}[/green]  [dim]{self._root}[/dim]  [purple]{model}[/purple]",
                id="project-info"
            )
            yield RichLog(id="chat-log", highlight=True, markup=True, wrap=True)
            with Horizontal(id="input-area"):
                yield Static(f" {model} ", id="model-badge")
                yield Input(
                    placeholder="Ask anything... (Enter to send)",
                    id="prompt-input",
                    password=False,
                )

    def on_mount(self):
        log = self.query_one("#chat-log", RichLog)
        log.write("[dim]YAC ready. Type a prompt and press Enter.[/dim]")
        log.write(f"[dim]Project root: {self._root}[/dim]\n")
        self.query_one("#prompt-input").focus()

    @on(Input.Submitted, "#prompt-input")
    def on_submit(self, event: Input.Submitted):
        prompt = event.value.strip()
        if not prompt or self._busy:
            return
        event.input.value = ""
        self._busy = True

        # Check API key first - prompt in TUI if missing
        model    = self._config.get("model", "gpt")
        key_map  = {"claude": "anthropic_key", "gpt": "openai_key", "gemini": "gemini_key"}
        import keyring
        key = keyring.get_password("YourAssistantCoder", key_map.get(model, "openai_key"))

        if not key:
            def on_key_saved(k):
                self._run_prompt(prompt)
            self.app.push_screen(ApiKeyScreen(model, on_key_saved))
            self._busy = False
        else:
            self._run_prompt(prompt)

    def _log(self, msg: str):
        log = self.query_one("#chat-log", RichLog)
        self.app.call_from_thread(log.write, msg)

    def _log_md(self, md_text: str):
        """Render markdown from agent say() calls into the chat log."""
        from rich.markdown import Markdown as RichMD
        from rich.console import Console
        import io
        buf = io.StringIO()
        c = Console(file=buf, highlight=False, markup=False, width=100)
        c.print(RichMD(md_text))
        rendered = buf.getvalue()
        log = self.query_one("#chat-log", RichLog)
        from rich.text import Text as RichText
        log.write(RichText.from_ansi(rendered))

    def _run_prompt(self, prompt: str):
        log = self.query_one("#chat-log", RichLog)
        log.write(f"\n[cyan bold]  you[/cyan bold]  {prompt}")
        self._run_agent_thread(prompt)

    @work(thread=True)
    def _run_agent_thread(self, prompt: str):
        from pfps import PFPS
        from permissions import issue_token

        model = self._config.get("model", "gpt")

        try:
            pfps = PFPS.LoadProject(self._root)
        except Exception as e:
            self._log(f"[red]Failed to load project: {e}[/red]")
            self._busy = False
            return

        # Intercept console output → RichLog
        import agent as agent_mod
        orig_console = agent_mod.console

        class TUIConsole:
            def print(self_, msg="", **kw):
                # Parse error codes
                m = str(msg)
                if "Token is finished" in m or "quota" in m.lower():
                    self._log(f"[red bold]  Token expired / quota exhausted[/red bold]")
                    self._log(f"[dim]Run: yac key-clear --provider {model}[/dim]")
                elif "Invalid API key" in m or "authentication" in m.lower():
                    self._log(f"[red bold]  Invalid API key[/red bold]")
                    def reprompt():
                        def on_saved(k): pass
                        self.app.call_from_thread(
                            self.app.push_screen, ApiKeyScreen(model, on_saved)
                        )
                    self.app.call_from_thread(reprompt)
                elif "No credits" in m or "billing" in m.lower():
                    self._log(f"[red bold]  No credits - add billing[/red bold]")
                elif "Agent finished" in m or "WorkingStop" in m:
                    self._log(f"[green]  done.[/green]\n")
                elif m.strip() and m.strip() != "[dim][/dim]":
                    self._log(m)

            def input(self_, prompt=""):
                # Blocking input not supported in TUI — return empty
                return ""

        agent_mod.console = TUIConsole()

        # Track affected files
        affected  = []
        orig_write  = pfps.WriteChunk
        orig_create = pfps.CreateFile

        def tracked_write(token, filename, *a, **kw):
            if filename not in affected: affected.append(filename)
            return orig_write(token, filename, *a, **kw)

        def tracked_create(token, filename, *a, **kw):
            if filename not in affected: affected.append(filename)
            return orig_create(token, filename, *a, **kw)

        pfps.WriteChunk = tracked_write
        pfps.CreateFile = tracked_create

        # Check file count
        try:
            tok       = issue_token("Viewer", "tui")
            all_files = pfps.ListFiles(tok)
        except Exception:
            all_files = []

        def do_run():
            try:
                from agent import run_agent, dispatch_tool as _dt
                import agent as _am

                # Wrap say() to render markdown in TUI
                orig_dispatch = _am.dispatch_tool

                def md_dispatch(name, inputs, ams, token_store, error_exec):
                    if name == "say":
                        msg = inputs.get("message", "")
                        self.app.call_from_thread(self._log_md, msg)
                        return "ok"
                    return orig_dispatch(name, inputs, ams, token_store, error_exec)

                _am.dispatch_tool = md_dispatch
                run_agent(prompt, pfps, role=self._config.get("role", "Editor"), model=model)
                _am.dispatch_tool = orig_dispatch
            except Exception as e:
                err = str(e)
                if "429" in err or "quota" in err.lower():
                    self._log(f"[red bold]  Token expired / quota exhausted[/red bold]")
                elif "401" in err or "auth" in err.lower():
                    self._log(f"[red bold]  Invalid API key[/red bold]")
                elif "timeout" in err.lower():
                    self._log(f"[yellow]  Request timed out - try again[/yellow]")
                else:
                    self._log(f"[red]  Error: {err[:200]}[/red]")
            finally:
                agent_mod.console = orig_console
                self._busy = False

        if len(all_files) > 10:
            def confirm():
                t = threading.Thread(target=do_run, daemon=True)
                t.start()

            def cancel():
                agent_mod.console = orig_console
                self._busy = False
                self._log("[red]  Cancelled.[/red]")

            self.app.call_from_thread(
                self.app.push_screen,
                ConfirmScreen(model.upper(), len(all_files), confirm, cancel)
            )
        else:
            do_run()


# ── Main App ──────────────────────────────────────────────────────────────────

def find_project_root(start: str = ".") -> Optional[str]:
    current = Path(start).resolve()
    while True:
        if (current / ".PFPS" / "sandbox.json").exists():
            return str(current)
        parent = current.parent
        if parent == current:
            return None
        current = parent


class YACApp(App):
    CSS       = CSS
    TITLE     = "YourAssistantCoder"
    BINDINGS  = [
        Binding("q",     "quit",         "Quit"),
        Binding("i",     "init_project", "Init"),
        Binding("r",     "refresh",      "Refresh"),
        Binding("ctrl+c","quit",         "Quit", show=False),
    ]

    def __init__(self):
        super().__init__()
        self._selected_dir: Optional[str] = None
        self._project_root = find_project_root(str(Path.cwd()))
        self._config: dict = {}
        if self._project_root:
            cfg = Path(self._project_root) / ".PFPS" / "sandbox.json"
            if cfg.exists():
                self._config = json.loads(cfg.read_text(encoding="utf-8"))

    def compose(self) -> ComposeResult:
        yield Header()
        if self._project_root:
            yield ChatView(self._project_root, self._config)
        else:
            yield BrowserView()
        yield Footer()

    def action_quit(self):
        self.exit()

    def action_refresh(self):
        try:
            self.query_one("#tree", DirectoryTree).reload()
        except Exception:
            pass

    def action_init_project(self):
        target = self._selected_dir or str(Path.cwd())
        from pfps import PFPS
        import json as _json
        name = Path(target).name
        pfps = PFPS.RegisterProject(
            name=name, root=target, role="Editor",
            allow_print=False,
            track_files=["*.py","*.js","*.ts","*.md"],
            ignore=["__pycache__",".env",".git","node_modules"],
        )
        pfps.config["model"] = "gpt"
        Path(pfps.sandbox_json).write_text(
            _json.dumps(pfps.config, indent=2), encoding="utf-8"
        )
        self.exit(f"init:{target}")


def run_tui():
    app    = YACApp()
    result = app.run()
    if isinstance(result, str) and result.startswith("init:"):
        path = result[5:]
        from rich.console import Console
        Console().print(f"[green]✓[/green] Project initialized at [cyan]{path}[/cyan]")