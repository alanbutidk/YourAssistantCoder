"""

YourAssistantCoder (yac) - tui.py

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
from textual.screen import ModalScreen
from textual.widgets import (
    DirectoryTree, Footer, Header, Input,
    Label, RichLog, Select, Static, Button
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

/* Modals */
ConfirmScreen    { align: center middle; }
ApiKeyScreen     { align: center middle; }
InitScreen       { align: center middle; }
RollbackScreen   { align: center middle; }
EnvWarnScreen    { align: center middle; }
ShellConfirmScreen { align: center middle; }
OllamaScreen       { align: center middle; }

#confirm-box, #apikey-box, #init-box, #rollback-box, #envwarn-box {
    background: $bg2;
    padding: 2 4;
    width: 64;
    height: auto;
}
#confirm-box   { border: solid $yellow; }
#apikey-box    { border: solid $cyan;   }
#init-box      { border: solid $green;  }
#rollback-box  { border: solid $blue;   }
#envwarn-box   { border: solid $red;    }

.modal-title   { text-style: bold; margin-bottom: 1; }
.modal-title.yellow { color: $yellow; }
.modal-title.cyan   { color: $cyan;   }
.modal-title.green  { color: $green;  }
.modal-title.blue   { color: $blue;   }
.modal-title.red    { color: $red;    }

.modal-msg     { color: $fg; margin-bottom: 1; }
.modal-btns    { align: right middle; height: 3; margin-top: 1; }
.modal-input   { background: $bg3; color: $fg; border: solid $border; height: 3; margin-bottom: 1; }
.modal-select  { background: $bg3; color: $fg; border: solid $border; height: 3; margin-bottom: 1; }
.modal-err     { color: $red; height: 1; }
.modal-label   { color: $dim; height: 1; margin-bottom: 0; }

Button           { margin: 0 1; }
Button.yes       { background: $green;  color: $bg; border: none; }
Button.no        { background: $red;    color: $bg; border: none; }
Button.save      { background: $cyan;   color: $bg; border: none; }
Button.cancel-k  { background: $bg3;    color: $fg; border: solid $border; }
Button.do-rb     { background: $blue;   color: $bg; border: none; }
Button.cancel-rb { background: $bg3;    color: $fg; border: solid $border; }
Button.allow-env { background: $yellow; color: $bg; border: none; }
Button.deny-env  { background: $red;    color: $bg; border: none; }

Select { background: $bg3; border: solid $border; }
"""


# ── .env warning ──────────────────────────────────────────────────────────────

class EnvWarnScreen(ModalScreen):
    def __init__(self, filename: str, on_allow, on_deny):
        super().__init__()
        self._filename = filename
        self._allow    = on_allow
        self._deny     = on_deny

    def compose(self) -> ComposeResult:
        with Container(id="envwarn-box"):
            yield Label("  Sensitive File Access", classes="modal-title red")
            yield Label(
                f"The agent wants to access:\n  [yellow]{self._filename}[/yellow]\n\n"
                "This file may contain API keys, passwords, or secrets.\nAllow access?",
                classes="modal-msg"
            )
            with Horizontal(classes="modal-btns"):
                yield Button("Deny",  classes="deny-env",  id="btn-deny-env")
                yield Button("Allow", classes="allow-env", id="btn-allow-env")

    @on(Button.Pressed, "#btn-allow-env")
    def on_allow(self): self.dismiss(); self._allow()

    @on(Button.Pressed, "#btn-deny-env")
    def on_deny(self): self.dismiss(); self._deny()


# ── Shell confirm popup ──────────────────────────────────────────────────────

class ShellConfirmScreen(ModalScreen):
    def __init__(self, cmd: str, reason: str, on_allow, on_deny):
        super().__init__()
        self._cmd    = cmd
        self._reason = reason
        self._allow  = on_allow
        self._deny   = on_deny

    def compose(self) -> ComposeResult:
        with Container(id="confirm-box"):
            yield Label("  Shell Command Requested", classes="modal-title yellow")
            if self._reason:
                yield Label(f"Reason: [dim]{self._reason}[/dim]", classes="modal-msg")
            yield Label(
                f"""[bold]Command:[/bold]

  [cyan]{self._cmd}[/cyan]

Allow execution in project root?""",
                classes="modal-msg"
            )
            with Horizontal(classes="modal-btns"):
                yield Button("Deny",  classes="no",  id="btn-deny-sh")
                yield Button("Allow", classes="yes", id="btn-allow-sh")

    @on(Button.Pressed, "#btn-allow-sh")
    def on_allow(self): self.dismiss(); self._allow()

    @on(Button.Pressed, "#btn-deny-sh")
    def on_deny(self):  self.dismiss(); self._deny()


# ── Confirm >10 files ─────────────────────────────────────────────────────────

class ConfirmScreen(ModalScreen):
    def __init__(self, model: str, file_count: int, on_confirm, on_cancel):
        super().__init__()
        self._model   = model
        self._count   = file_count
        self._confirm = on_confirm
        self._cancel  = on_cancel

    def compose(self) -> ComposeResult:
        with Container(id="confirm-box"):
            yield Label(f"  {self._model} wants to make changes", classes="modal-title yellow")
            yield Label(
                f"{self._model} is making changes to {self._count} files.\nAllow?",
                classes="modal-msg"
            )
            with Horizontal(classes="modal-btns"):
                yield Button("No",  classes="no",  id="btn-no")
                yield Button("Yes", classes="yes", id="btn-yes")

    @on(Button.Pressed, "#btn-yes")
    def on_yes(self): self.dismiss(); self._confirm()

    @on(Button.Pressed, "#btn-no")
    def on_no(self):  self.dismiss(); self._cancel()


# ── API key popup ─────────────────────────────────────────────────────────────

class ApiKeyScreen(ModalScreen):
    def __init__(self, provider: str, on_save):
        super().__init__()
        self._provider = provider
        self._on_save  = on_save

    def compose(self) -> ComposeResult:
        with Container(id="apikey-box"):
            yield Label(f"API Key - {self._provider.upper()}", classes="modal-title cyan")
            yield Label(
                f"Enter your {self._provider} API key.\nStored securely in system keyring.",
                classes="modal-msg"
            )
            yield Input(password=True, placeholder="sk-...", id="apikey-input", classes="modal-input")
            yield Label("", id="apikey-err", classes="modal-err")
            with Horizontal(classes="modal-btns"):
                yield Button("Cancel", classes="cancel-k", id="btn-cancel-key")
                yield Button("Save",   classes="save",     id="btn-save-key")

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


# ── Ollama model picker ───────────────────────────────────────────────────────

class OllamaScreen(ModalScreen):
    """
    Shows locally available Ollama coding models.
    If none found, offers to pull one.
    """
    def __init__(self, on_select):
        super().__init__()
        self._on_select = on_select
        self._host      = "http://localhost:11434"

    def compose(self) -> ComposeResult:
        with Container(id="init-box"):
            yield Label("  Ollama - Local Model", classes="modal-title cyan")
            yield Label("", id="ollama-status", classes="modal-msg")
            yield Label("Select or type a model name:", classes="modal-label")
            yield Select([], id="ollama-select")
            yield Input(placeholder="or type: qwen2.5-coder:7b", id="ollama-custom", classes="modal-input")
            yield Label("", id="ollama-err", classes="modal-err")
            with Horizontal(classes="modal-btns"):
                yield Button("Cancel", classes="cancel-k", id="btn-cancel-ol")
                yield Button("Pull & Use", classes="save",  id="btn-pull-ol")
                yield Button("Use",        classes="yes",   id="btn-use-ol")

    def on_mount(self):
        self._refresh_models()

    def _refresh_models(self):
        from model_router import OllamaAdapter
        if not OllamaAdapter.is_running(self._host):
            self.query_one("#ollama-status").update(
                "[red]Ollama not running.[/red] Start it with: [cyan]ollama serve[/cyan]"
            )
            return

        local = OllamaAdapter.list_local_models(self._host)
        coding = [m for m in local if any(
            kw in m.lower() for kw in [
                "code","coder","starcoder","deepseek","qwen","wizard",
                "phind","granite","magic","llama","gemma"
            ]
        )]
        all_models = coding or local

        if all_models:
            self.query_one("#ollama-status").update(
                f"[green]{len(all_models)} model(s) available locally.[/green]"
            )
            opts = [(m, m) for m in all_models]
            sel  = self.query_one("#ollama-select", Select)
            sel._options = opts
            sel.set_options(opts)
        else:
            self.query_one("#ollama-status").update(
                "[yellow]No models pulled yet.[/yellow] Type a model name and click Pull & Use."
            )

    def _get_chosen(self) -> str:
        custom = self.query_one("#ollama-custom").value.strip()
        if custom:
            return custom
        try:
            val = self.query_one("#ollama-select", Select).value
            return str(val) if val else ""
        except Exception:
            return ""

    @on(Button.Pressed, "#btn-use-ol")
    def on_use(self):
        model = self._get_chosen()
        if not model:
            self.query_one("#ollama-err").update("Select or type a model.")
            return
        self.dismiss()
        self._on_select(f"ollama:{model}")

    @on(Button.Pressed, "#btn-pull-ol")
    def on_pull(self):
        model = self._get_chosen()
        if not model:
            self.query_one("#ollama-err").update("Type a model name to pull.")
            return
        self.query_one("#ollama-err").update(f"[yellow]Pulling {model}... (may take a while)[/yellow]")
        self._pull_and_use(model)

    @work(thread=True)
    def _pull_and_use(self, model: str):
        from model_router import OllamaAdapter
        ok = OllamaAdapter.pull_model(model, self._host)
        if ok:
            self.app.call_from_thread(self.dismiss)
            self.app.call_from_thread(lambda: self._on_select(f"ollama:{model}"))
        else:
            self.app.call_from_thread(
                lambda: self.query_one("#ollama-err").update(
                    f"[red]Pull failed. Is Ollama running and model name correct?[/red]"
                )
            )

    @on(Button.Pressed, "#btn-cancel-ol")
    def on_cancel(self): self.dismiss()


# ── Init popup ────────────────────────────────────────────────────────────────

class InitScreen(ModalScreen):
    def __init__(self, target: str, on_init):
        super().__init__()
        self._target  = target
        self._on_init = on_init

    def compose(self) -> ComposeResult:
        name = Path(self._target).name
        with Container(id="init-box"):
            yield Label("  Init Project", classes="modal-title green")
            yield Label(f"Path: [dim]{self._target}[/dim]", classes="modal-msg")
            yield Label("Project name:", classes="modal-label")
            yield Input(value=name, id="init-name", classes="modal-input")
            yield Label("Model:", classes="modal-label")
            yield Select(
                [
                    ("GPT (OpenAI)",          "gpt"),
                    ("Claude (Anthropic)",    "claude"),
                    ("Gemini (Google)",       "gemini"),
                    ("Ollama (Local)",        "ollama"),
                    ("DeepSeek (Coder V3)",  "deepseek"),
                    ("Mistral (Codestral)",  "mistral"),
                ],
                value="gpt",
                id="init-model",
            )
            yield Label("Role:", classes="modal-label")
            yield Select(
                [("Editor (Read+Write, 10min)", "Editor"), ("Owner (No expiry)", "Owner"), ("Viewer (Read only)", "Viewer")],
                value="Editor",
                id="init-role",
            )
            yield Label("", id="init-err", classes="modal-err")
            with Horizontal(classes="modal-btns"):
                yield Button("Cancel", classes="cancel-k", id="btn-cancel-init")
                yield Button("Init",   classes="yes",      id="btn-do-init")

    def on_mount(self):
        self.query_one("#init-name").focus()

    @on(Button.Pressed, "#btn-do-init")
    def on_init(self):
        name  = self.query_one("#init-name").value.strip()
        model = self.query_one("#init-model").value
        role  = self.query_one("#init-role").value
        if not name:
            self.query_one("#init-err").update("Name cannot be empty.")
            return
        if model == "ollama":
            # Show Ollama picker before dismissing
            def on_ollama_selected(ollama_model: str):
                self.dismiss()
                self._on_init(name, ollama_model, role)
            self.app.push_screen(OllamaScreen(on_ollama_selected))
        else:
            self.dismiss()
            self._on_init(name, model, role)

    @on(Button.Pressed, "#btn-cancel-init")
    def on_cancel(self): self.dismiss()


# ── Rollback popup ────────────────────────────────────────────────────────────

class RollbackScreen(ModalScreen):
    def __init__(self, project_root: str, on_rollback):
        super().__init__()
        self._root       = project_root
        self._on_rollback = on_rollback

    def compose(self) -> ComposeResult:
        with Container(id="rollback-box"):
            yield Label("  Rollback File", classes="modal-title blue")
            yield Label("Enter filename to roll back to before last session:", classes="modal-msg")
            yield Input(placeholder="auth.py", id="rb-filename", classes="modal-input")
            yield Label("", id="rb-err", classes="modal-err")
            with Horizontal(classes="modal-btns"):
                yield Button("Cancel",   classes="cancel-rb", id="btn-cancel-rb")
                yield Button("Rollback", classes="do-rb",     id="btn-do-rb")

    def on_mount(self):
        self.query_one("#rb-filename").focus()

    @on(Button.Pressed, "#btn-do-rb")
    def on_rb(self):
        filename = self.query_one("#rb-filename").value.strip()
        if not filename:
            self.query_one("#rb-err").update("Enter a filename.")
            return
        self.dismiss()
        self._on_rollback(filename)

    @on(Button.Pressed, "#btn-cancel-rb")
    def on_cancel(self): self.dismiss()


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
                    "Navigate the tree and press [yellow]I[/yellow] to init a project,\n"
                    "or navigate into an existing yac project.",
                    id="welcome"
                )
                with Container(id="shortcuts"):
                    yield Static("[bold]Shortcuts[/bold]\n")
                    yield Static("[yellow]I[/yellow]  Init project in selected folder")
                    yield Static("[yellow]R[/yellow]  Refresh tree")
                    yield Static("[yellow]Q[/yellow]  Quit")

    @on(DirectoryTree.DirectorySelected)
    def on_dir(self, event: DirectoryTree.DirectorySelected):
        self.app._selected_dir = str(event.path)
        # Update welcome to show selected path
        try:
            self.query_one("#welcome").update(
                f"""[bold cyan]YourAssistantCoder[/bold cyan]  [dim](yac)[/dim]

"""
                f"""Selected: [yellow]{event.path}[/yellow]

"""
                f"""Press [yellow]I[/yellow] to init project here,
"""
                f"or navigate into an existing yac project."
            )
        except Exception:
            pass

    @on(DirectoryTree.FileSelected)
    def on_file(self, event: DirectoryTree.FileSelected):
        # Select the parent directory when a file is clicked
        self.app._selected_dir = str(event.path.parent)


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
        role  = self._config.get("role", "Editor")
        with Vertical():
            yield Static(
                f" [green]{name}[/green]  [dim]{self._root}[/dim]  "
                f"[purple]{model}[/purple]  [dim]{role}[/dim]",
                id="project-info"
            )
            yield RichLog(id="chat-log", highlight=True, markup=True, wrap=True)
            with Horizontal(id="input-area"):
                yield Static(f" {model} ", id="model-badge")
                yield Input(
                    placeholder="Ask anything... (Enter to send)",
                    id="prompt-input",
                )

    def on_mount(self):
        log = self.query_one("#chat-log", RichLog)
        log.write("[dim]YAC ready. Type a prompt and press Enter.[/dim]")
        log.write(f"[dim]Root: {self._root}[/dim]")
        log.write("[dim]Shortcuts: Ctrl+B=Rollback  Ctrl+E=Edit role  Ctrl+K=API key[/dim]\n")
        self.query_one("#prompt-input").focus()

    @on(Input.Submitted, "#prompt-input")
    def on_submit(self, event: Input.Submitted):
        prompt = event.value.strip()
        if not prompt or self._busy:
            return
        event.input.value = ""
        self._busy = True

        model   = self._config.get("model", "gpt")
        key_map = {"claude": "anthropic_key", "gpt": "openai_key", "gemini": "gemini_key"}
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
        from rich.markdown import Markdown as RichMD
        from rich.console import Console
        from rich.text import Text as RichText
        import io
        buf = io.StringIO()
        c = Console(file=buf, highlight=False, markup=False, width=100)
        c.print(RichMD(md_text))
        rendered = buf.getvalue()
        log = self.query_one("#chat-log", RichLog)
        log.write(RichText.from_ansi(rendered))

    def _run_prompt(self, prompt: str):
        log = self.query_one("#chat-log", RichLog)
        log.write(f"\n[cyan bold]  you[/cyan bold]  {prompt}")
        self._run_agent_thread(prompt)

    def do_rollback(self, filename: str):
        try:
            from pfps import PFPS
            pfps = PFPS.LoadProject(self._root)
            pfps.Rollback(filename)
            self._log(f"[green]  Rolled back {filename}[/green]")
        except Exception as e:
            self._log(f"[red]  Rollback failed: {e}[/red]")

    def do_edit_role(self, model: str, role: str):
        try:
            cfg_path = Path(self._root) / ".PFPS" / "sandbox.json"
            cfg = json.loads(cfg_path.read_text(encoding="utf-8"))
            cfg["model"] = model
            cfg["role"]  = role
            cfg_path.write_text(json.dumps(cfg, indent=2), encoding="utf-8")
            self._config["model"] = model
            self._config["role"]  = role
            # Update badge
            self.query_one("#model-badge").update(f" {model.upper()} ")
            self.query_one("#project-info").update(
                f" [green]{cfg.get('name','')}[/green]  [dim]{self._root}[/dim]  "
                f"[purple]{model.upper()}[/purple]  [dim]{role}[/dim]"
            )
            self._log(f"[green]  Updated: model={model} role={role}[/green]")
        except Exception as e:
            self._log(f"[red]  edit-role failed: {e}[/red]")

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

        import agent as agent_mod
        orig_console = agent_mod.console

        class TUIConsole:
            def print(self_, msg="", **kw):
                m = str(msg)
                if "Token is finished" in m or "quota" in m.lower():
                    self._log(f"[red bold]  Token expired / quota exhausted[/red bold]")
                    self._log(f"[dim]Press Ctrl+K to update your API key[/dim]")
                elif "Invalid API key" in m or "authentication" in m.lower():
                    self._log(f"[red bold]  Invalid API key[/red bold]")
                    self.app.call_from_thread(
                        self.app.push_screen,
                        ApiKeyScreen(model, lambda k: None)
                    )
                elif "No credits" in m or "billing" in m.lower():
                    self._log(f"[red bold]  No credits - add billing[/red bold]")
                elif "Agent finished" in m or "WorkingStop" in m:
                    self._log(f"[green]  done.[/green]\n")
                elif m.strip() and m.strip() not in ("[dim][/dim]", ""):
                    self._log(m)

            def input(self_, prompt=""): return ""

        agent_mod.console = TUIConsole()

        # Track writes + .env guard
        affected    = []
        orig_write  = pfps.WriteChunk
        orig_create = pfps.CreateFile
        orig_read   = pfps.ReadChunk

        ENV_FILES = {".env", ".env.local", ".env.production", ".env.development"}

        def _is_env(filename: str) -> bool:
            return Path(filename).name in ENV_FILES or filename.endswith(".env")

        def _env_guard(filename: str, proceed_fn):
            if _is_env(filename):
                allowed = threading.Event()
                denied  = threading.Event()

                def allow(): allowed.set()
                def deny():  denied.set()

                self.app.call_from_thread(
                    self.app.push_screen,
                    EnvWarnScreen(filename, allow, deny)
                )
                # Wait for user response
                while not allowed.is_set() and not denied.is_set():
                    import time; time.sleep(0.05)
                if denied.is_set():
                    raise PermissionError(f"Access to {filename} denied by user.")
            return proceed_fn()

        def tracked_read(token, filename, *a, **kw):
            return _env_guard(filename, lambda: orig_read(token, filename, *a, **kw))

        def tracked_write(token, filename, *a, **kw):
            if filename not in affected: affected.append(filename)
            return _env_guard(filename, lambda: orig_write(token, filename, *a, **kw))

        def tracked_create(token, filename, *a, **kw):
            if filename not in affected: affected.append(filename)
            return _env_guard(filename, lambda: orig_create(token, filename, *a, **kw))

        pfps.ReadChunk  = tracked_read
        pfps.WriteChunk = tracked_write
        pfps.CreateFile = tracked_create

        try:
            tok       = issue_token("Viewer", "tui")
            all_files = pfps.ListFiles(tok)
        except Exception:
            all_files = []

        # Wire TUI shell confirm into ShellExecutor
        import shell_exec as _se
        import agent as _agent_mod_ref

        def tui_shell_confirm(cmd: str) -> bool:
            allowed = threading.Event()
            denied  = threading.Event()

            def allow(): allowed.set()
            def deny():  denied.set()

            # Extract reason from cmd context if possible
            self.app.call_from_thread(
                self.app.push_screen,
                ShellConfirmScreen(cmd, "", allow, deny)
            )
            while not allowed.is_set() and not denied.is_set():
                import time; time.sleep(0.05)
            return allowed.is_set()

        # Patch shell executor confirm callback
        if hasattr(_agent_mod_ref.dispatch_tool, "_shell_exec"):
            _agent_mod_ref.dispatch_tool._shell_exec.set_tui_confirm(tui_shell_confirm)

        def do_run():
            try:
                import agent as _am
                orig_dispatch = _am.dispatch_tool

                # After dispatch_tool is set, also patch shell executor
                if hasattr(_am.dispatch_tool, "_shell_exec"):
                    _am.dispatch_tool._shell_exec.set_tui_confirm(tui_shell_confirm)

                def md_dispatch(name, inputs, ams, token_store, error_exec):
                    if name == "say":
                        msg = inputs.get("message", "")
                        self.app.call_from_thread(self._log_md, msg)
                        return "ok"
                    return orig_dispatch(name, inputs, ams, token_store, error_exec)

                _am.dispatch_tool = md_dispatch
                from agent import run_agent
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


# ── Edit role popup ───────────────────────────────────────────────────────────

class EditRoleScreen(ModalScreen):
    def __init__(self, config: dict, on_save):
        super().__init__()
        self._config  = config
        self._on_save = on_save

    def compose(self) -> ComposeResult:
        with Container(id="init-box"):
            yield Label("  Edit Model & Role", classes="modal-title green")
            yield Label("Model:", classes="modal-label")
            yield Select(
                [
                    ("GPT (OpenAI)",         "gpt"),
                    ("Claude (Anthropic)",   "claude"),
                    ("Gemini (Google)",      "gemini"),
                    ("Ollama (Local)",       "ollama"),
                    ("DeepSeek (Coder V3)", "deepseek"),
                    ("Mistral (Codestral)", "mistral"),
                ],
                value=self._config.get("model", "gpt"),
                id="er-model",
            )
            yield Label("Role:", classes="modal-label")
            yield Select(
                [("Editor (Read+Write, 10min)", "Editor"), ("Owner (No expiry)", "Owner"), ("Viewer (Read only)", "Viewer")],
                value=self._config.get("role", "Editor"),
                id="er-role",
            )
            with Horizontal(classes="modal-btns"):
                yield Button("Cancel", classes="cancel-k", id="btn-cancel-er")
                yield Button("Save",   classes="save",     id="btn-save-er")

    @on(Button.Pressed, "#btn-save-er")
    def on_save(self):
        model = self.query_one("#er-model").value
        role  = self.query_one("#er-role").value
        if model == "ollama":
            def on_ollama_selected(ollama_model: str):
                self.dismiss()
                self._on_save(ollama_model, role)
            self.app.push_screen(OllamaScreen(on_ollama_selected))
        else:
            self.dismiss()
            self._on_save(model, role)

    @on(Button.Pressed, "#btn-cancel-er")
    def on_cancel(self): self.dismiss()


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
    CSS      = CSS
    TITLE    = "YourAssistantCoder"
    BINDINGS = [
        Binding("q",       "quit",        "Quit"),
        Binding("i",       "init_project","Init"),
        Binding("r",       "refresh",     "Refresh"),
        Binding("ctrl+b",  "rollback",    "Rollback"),
        Binding("ctrl+e",  "edit_role",   "Edit role"),
        Binding("ctrl+k",  "api_key",     "API key"),
        Binding("ctrl+c",  "quit",        "Quit", show=False),
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
        target = self._selected_dir or str(Path.cwd() / "project")
        # If target == cwd, we haven't selected anything in tree yet
        if Path(target).resolve() == Path.cwd().resolve():
            target = str(Path.cwd() / "new_project")

        def do_init(name, model, role):
            from pfps import PFPS
            pfps = PFPS.RegisterProject(
                name=name,
                root=target,
                role=role,
                allow_print=False,
                track_files=["*"],                          # allow ALL files
                ignore=["__pycache__", ".git"],             # only block pycache+git
            )
            pfps.config["model"] = model
            pfps.config["role"]  = role
            Path(pfps.sandbox_json).write_text(
                json.dumps(pfps.config, indent=2), encoding="utf-8"
            )
            self.exit(f"init:{target}")

        self.push_screen(InitScreen(target, do_init))

    def action_rollback(self):
        if not self._project_root:
            return
        try:
            chat = self.query_one(ChatView)
        except Exception:
            return

        def do_rb(filename):
            chat.do_rollback(filename)

        self.push_screen(RollbackScreen(self._project_root, do_rb))

    def action_edit_role(self):
        if not self._project_root:
            return
        try:
            chat = self.query_one(ChatView)
        except Exception:
            return

        def do_save(model, role):
            chat.do_edit_role(model, role)

        self.push_screen(EditRoleScreen(self._config, do_save))

    def action_api_key(self):
        model = self._config.get("model", "gpt")
        self.push_screen(ApiKeyScreen(model, lambda k: None))


def run_tui():
    app    = YACApp()
    result = app.run()
    if isinstance(result, str) and result.startswith("init:"):
        path = result[5:]
        from rich.console import Console
        Console().print(f"[green]✓[/green] Project initialized at [cyan]{path}[/cyan]")