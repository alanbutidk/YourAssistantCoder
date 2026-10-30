"""
YourAssistantCoder (yac) - agent.py
Model-agnostic agent loop.
"""

import json
import threading
import uuid
from dataclasses import dataclass, field
from pathlib import Path

import keyring

from console import console
from pfps import PFPS
from ams import AMS
from permissions import Permissions
from error_execution import ErrorExecution
from model_router import get_adapter, AgentResponse


KEYRING_SERVICE = "YourAssistantCoder"

CLAUDE_TOOLS = [
    {
        "name": "checkout",
        "description": "Get a permission token. Call this before any file operation.",
        "input_schema": {
            "type": "object",
            "properties": {
                "level": {"type": "string", "enum": ["read", "write", "delete"]},
            },
            "required": ["level"],
        },
    },
    {
        "name": "list_files",
        "description": "List all files in the project.",
        "input_schema": {"type": "object", "properties": {}},
    },
    {
        "name": "read_file",
        "description": "Read a file. Returns the full content.",
        "input_schema": {
            "type": "object",
            "properties": {
                "filename": {
                    "type": "string",
                    "description": "Path to file e.g. auth.py",
                },
            },
            "required": ["filename"],
        },
    },
    {
        "name": "write_file",
        "description": "Write content to a file, replacing it entirely.",
        "input_schema": {
            "type": "object",
            "properties": {
                "filename": {"type": "string"},
                "content": {"type": "string"},
            },
            "required": ["filename", "content"],
        },
    },
    {
        "name": "create_file",
        "description": "Create a new file.",
        "input_schema": {
            "type": "object",
            "properties": {
                "filename": {"type": "string"},
                "content": {"type": "string"},
            },
            "required": ["filename", "content"],
        },
    },
    {
        "name": "working",
        "description": "Announce what you are about to do.",
        "input_schema": {
            "type": "object",
            "properties": {"message": {"type": "string"}},
            "required": ["message"],
        },
    },
    {
        "name": "done",
        "description": "Signal you have finished all tasks.",
        "input_schema": {"type": "object", "properties": {}},
    },
    {
        "name": "say",
        "description": "Print a message to the user. Use markdown formatting.",
        "input_schema": {
            "type": "object",
            "properties": {"message": {"type": "string"}},
            "required": ["message"],
        },
    },
    {
        "name": "shell",
        "description": "Run a shell command in the project root. User must approve before it runs.",
        "input_schema": {
            "type": "object",
            "properties": {
                "cmd": {
                    "type": "string",
                    "description": "The shell command to run e.g. git clone https://...",
                },
                "reason": {
                    "type": "string",
                    "description": "Why you need to run this command",
                },
            },
            "required": ["cmd"],
        },
    },
    {
        "name": "web_search",
        "description": "Search the web for information. Use when you need current docs, package info, or anything you don't know.",
        "input_schema": {
            "type": "object",
            "properties": {
                "query": {"type": "string", "description": "Search query"},
            },
            "required": ["query"],
        },
    },
    {
        "name": "remember",
        "description": (
            "Save a durable note to project memory (.YAC/.AI_MEM). Use this "
            "when the user asks you to remember something, or when you learn "
            "a project fact worth carrying into future sessions (a decision, "
            "a convention, a thing to avoid). Do not use this for anything "
            "session-specific; that is already captured automatically."
        ),
        "input_schema": {
            "type": "object",
            "properties": {
                "note": {
                    "type": "string",
                    "description": "The note to remember, in your own words.",
                },
            },
            "required": ["note"],
        },
    },
    {
        "name": "recall",
        "description": "Read everything currently saved in project memory (.YAC/.AI_MEM).",
        "input_schema": {"type": "object", "properties": {}},
    },
]


_shell_lock = threading.Lock()
_shell_executor = None


def get_shell_executor(root: str):
    """One ShellExecutor per project root, shared by every agent thread so a
    confirm callback set by the TUI applies to all of them."""
    global _shell_executor
    from shell_exec import ShellExecutor

    with _shell_lock:
        if _shell_executor is None or _shell_executor.root != Path(root).resolve():
            _shell_executor = ShellExecutor(root)
        return _shell_executor


_LEVEL_RANK = {"read": 0, "write": 1, "delete": 2}


def _ensure_token(token_store, ams, level="read"):
    """Auto-checkout a token that covers at least `level`.

    A token already in the store is reused only if it is still valid and
    its level is high enough for the requested operation - otherwise a new,
    sufficiently-scoped token is checked out. Without this upgrade check,
    the very first read op (list_files/read_file) would check out a
    Read-only token and every later write/create call would reuse that same
    token and be denied by PFPS._validate_token, effectively locking the
    agent out of its own write/delete tools for the rest of the session.
    """
    level_map = {"read": "Read", "write": "Read+Write", "delete": "Read+Write+Delete"}
    current = token_store.get("current")
    current_level = token_store.get("level", "read")
    needs_new = (
        current is None
        or current.expired
        or not current.valid
        or _LEVEL_RANK.get(current_level, -1) < _LEVEL_RANK.get(level, 0)
    )
    if needs_new:
        token = ams.CheckOut(level_map.get(level, "Read+Write"))
        token_store["current"] = token
        token_store["level"] = level
    return token_store["current"]


def dispatch_tool(
    name: str, inputs: dict, ams: AMS, token_store: dict, error_exec: ErrorExecution
) -> str:
    try:
        if name == "checkout":
            level_map = {
                "read": "Read",
                "write": "Read+Write",
                "delete": "Read+Write+Delete",
            }
            req_level = inputs.get("level", "write")
            token = ams.CheckOut(level_map.get(req_level, "Read+Write"))
            token_store["current"] = token
            token_store["level"] = req_level
            return "ok"

        if name == "list_files":
            token = _ensure_token(token_store, ams, "read")
            files = ams.UseTool("list_files", token)
            return json.dumps(files) if isinstance(files, list) else str(files)

        if name == "read_file":
            token = _ensure_token(token_store, ams, "read")
            filename = inputs["filename"]
            # Read all chunks and join
            from pfps import PFPS

            pfps = ams.pfps
            pfps.BuildVarFile(filename)
            chunks = pfps.ReadChunkVar(filename)
            full = "".join(v[1] for v in chunks.values())
            return full

        if name == "write_file":
            token = _ensure_token(token_store, ams, "write")
            filename = inputs["filename"]
            content = inputs["content"]
            pfps = ams.pfps
            filepath = pfps.SandboxPath(filename)
            with open(filepath, "w", encoding="utf-8") as f:
                f.write(content)
            pfps.BuildVarFile(filename)
            return "ok"

        if name == "create_file":
            token = _ensure_token(token_store, ams, "write")
            return str(
                ams.UseTool(
                    "create_file",
                    token,
                    filename=inputs["filename"],
                    content=inputs.get("content", ""),
                )
            )

        if name == "working":
            ams.Working(Yes=True, message=inputs.get("message", ""))
            return "ok"

        if name == "done":
            ams.WorkingStop(Yes=True)
            return "ok"

        if name == "say":
            ams.printtoconsole(inputs["message"])
            return "ok"

        # Legacy fallbacks
        if name == "CheckOut":
            perm_level = inputs.get("permission_level", "Read+Write")
            reverse_map = {
                "Read": "read",
                "Read+Write": "write",
                "Read+Write+Delete": "delete",
            }
            token = ams.CheckOut(perm_level)
            token_store["current"] = token
            token_store["level"] = reverse_map.get(perm_level, "write")
            return "ok"

        if name == "Working":
            ams.Working(Yes=True, message=inputs.get("message", ""))
            return "ok"

        if name == "WorkingStop":
            ams.WorkingStop(Yes=True)
            return "ok"

        if name == "printtoconsole":
            ams.printtoconsole(inputs.get("message", ""))
            return "ok"

        if name == "UseTool":
            token = _ensure_token(token_store, ams, "write")
            result = ams.UseTool(
                inputs["toolname"],
                token,
                **{k: v for k, v in inputs.items() if k != "toolname"},
            )
            return (
                json.dumps(result) if isinstance(result, (list, dict)) else str(result)
            )

        if name == "shell":
            executor = get_shell_executor(str(ams.pfps.root))
            cmd = inputs.get("cmd", "")
            reason = inputs.get("reason", "")
            ams.logger.write("SHELL", f"requested: {cmd}")
            result = executor.run(cmd, reason)
            ams.logger.write("SHELL", f"result: {result[:80]}")
            return result

        if name == "web_search":
            from web_search import search

            query = inputs.get("query", "")
            ams.logger.write("WEBSEARCH", query)
            result = search(query)
            ams.logger.write("WEBSEARCH", f"got {len(result)} chars")
            return result

        if name == "remember":
            note = inputs.get("note", "").strip()
            if not note:
                return "ERROR: empty note"
            ams.pfps.AppendMemory(note)
            ams.logger.write("MEMORY", f"saved: {note[:80]}")
            return "ok"

        if name == "recall":
            content = ams.pfps.ReadMemory()
            return content or "(memory is empty)"

        return f"ERROR: Unknown tool {name!r}"

    except Exception as e:
        return f"ERROR: {e}"


def clear_api_key(provider: str = "claude"):
    key_map = {
        "claude": "anthropic_key",
        "gpt": "openai_key",
        "gemini": "gemini_key",
        "deepseek": "deepseek_key",
        "mistral": "mistral_key",
        "openrouter_free": "openrouter_key",
    }
    key_name = key_map.get(provider, "anthropic_key")
    try:
        keyring.delete_password(KEYRING_SERVICE, key_name)
        console.print(f"[dim]{provider} key removed from keyring.[/dim]")
    except Exception:
        console.print(
            f"[dim]No {provider} key found in keyring - nothing to clear.[/dim]"
        )


@dataclass
class LoopResult:
    text: str = ""
    steps: list = field(default_factory=list)
    error: str = ""
    reason: str = ""


def _report_api_error(e: Exception, model: str):
    err = str(e)
    if (
        "429" in err
        or "RESOURCE_EXHAUSTED" in err
        or "quota" in err.lower()
        or "RateLimitError" in type(e).__name__
    ):
        import re

        delay = re.search(r"retry in (\d+)", err, re.IGNORECASE)
        delay_str = f" Retry in {delay.group(1)}s." if delay else ""
        console.print(
            f"\n[bold red]✗  Token is finished (may work by waiting a bit?) [/bold red] [dim]- API quota exhausted.{delay_str}[/dim]"
        )
        key_urls = {
            "gemini": "https://aistudio.google.com/apikey",
            "gpt": "https://platform.openai.com/api-keys",
            "claude": "https://console.anthropic.com",
            "openrouter_free": "https://openrouter.api",
        }
        console.print(
            f"[dim]Get a new key at:[/dim] [cyan]{key_urls.get(model, '')}[/cyan]"
        )
        console.print(
            f"[dim]Then run:[/dim] [cyan]yac key-clear --provider {model}[/cyan]"
        )
    elif (
        "billing" in err.lower() or "credit" in err.lower() or "payment" in err.lower()
    ):
        console.print(
            f"\n[bold red]✗  No credits[/bold red] [dim]- add billing at platform.openai.com/settings/billing[/dim]"
        )
    elif (
        "401" in err
        or "authentication" in err.lower()
        or "AuthenticationError" in type(e).__name__
    ):
        console.print(
            f"\n[bold red]✗  Invalid API key[/bold red] [dim]- run: yac key-clear --provider {model}[/dim]"
        )
    elif "timeout" in err.lower():
        console.print(
            f"\n[bold yellow]⚠  Request timed out[/bold yellow] [dim]- try again.[/dim]"
        )
    else:
        console.print(
            f"\n[bold red]✗  API error ({type(e).__name__}):[/bold red]\n[dim]{err}[/dim]"
        )


def run_loop(
    adapter,
    system_prompt: str,
    messages: list,
    tools: list,
    ams: AMS,
    token_store: dict,
    error_exec: ErrorExecution,
    model: str,
    cancel=None,
    max_steps=None,
    stop_tools=("WorkingStop", "done"),
    stop_when=None,
    dispatch=None,
    quiet: bool = False,
) -> LoopResult:
    result = LoopResult()
    turns = 0

    while True:
        if ams.should_stop:
            console.print("[bold red]Agent terminated by user.[/bold red]")
            result.reason = "cancelled"
            break

        if cancel is not None and cancel.is_set():
            result.reason = "cancelled"
            break

        if max_steps is not None and turns >= max_steps:
            result.reason = "max_steps"
            break
        turns += 1

        try:
            out = adapter.complete(system_prompt, messages, tools)
        except Exception as e:
            _report_api_error(e, model)
            result.error = str(e)
            result.reason = "error"
            break

        if isinstance(out, tuple):
            response, raw = out
        else:
            response, raw = out, None

        if raw is not None:
            messages.append(adapter.format_assistant_message(response, raw))
        else:
            messages.append({"role": "assistant", "content": response.text or ""})

        if response.stop_reason == "end_turn" or not response.tool_calls:
            if response.text:
                if not quiet:
                    from rich.markup import escape

                    console.print(f"\n[dim]{escape(response.text)}[/dim]")
                result.text = response.text
            result.reason = "end_turn"
            break

        tool_results = []
        stop = False
        run_tool = dispatch or dispatch_tool

        for tc in response.tool_calls:
            res = run_tool(tc.name, tc.inputs, ams, token_store, error_exec)
            tool_results.append(adapter.format_tool_result(tc.id, res))
            if tc.name == "working":
                result.steps.append(tc.inputs.get("message", ""))
            elif tc.name == "say":
                result.text = tc.inputs.get("message", result.text)
            if tc.name in stop_tools:
                stop = True
                break

        if stop_when is not None and stop_when():
            stop = True

        messages.append({"role": "user", "content": tool_results})

        if stop or ams.should_stop:
            result.reason = "done" if stop else "cancelled"
            break

    return result


def run_agent(
    prompt: str,
    pfps: PFPS,
    role: str = "Editor",
    model: str = "claude",
    team: bool = False,
):
    if team:
        from orchestrator import run_team

        return run_team(prompt, pfps, role=role, model=model)

    adapter = get_adapter(model)
    session_id = uuid.uuid4().hex[:8]
    token_store: dict = {}

    pfps.start_session(session_id)
    ams = AMS(pfps, console, session_id)
    error_exec = ErrorExecution(ams, console)

    class AgentRef:
        def __init__(self):
            self.messages = []
            self.original_prompt = prompt

        def nap(self):
            self.messages.clear()

    agent_ref = AgentRef()
    error_exec.bind_agent(agent_ref)

    from console import print_session_start

    print_session_start(session_id, pfps.config.get("name", "unknown"), role)
    console.print(
        f"[dim]Model:[/dim]  [bold magenta]{model}[/bold magenta] ({adapter.MODEL if hasattr(adapter, 'MODEL') else ''})\n"
    )

    viewer_token = ams.CheckOut(Permissions.Read)
    file_list = pfps.ListFiles(viewer_token)
    files_str = "\n".join(f"  - {f}" for f in file_list) or "  (no files yet)"

    skill_content = pfps.DefaultSkillContent().strip()
    skill_block = (
        skill_content or "(no default skill found - proceed with baseline judgement)"
    )

    history_text = pfps.RecentHistoryText()
    history_block = history_text or "(no prior sessions recorded)"

    memory_text = pfps.ReadMemory().strip()
    memory_block = memory_text or "(nothing saved to memory yet)"

    system_prompt = f"""You are YourAssistantCoder (yac), a sandboxed coding agent.
Sandbox root: {pfps.root}

Project files:
{files_str}

The following default skill defines your capabilities, working style, and
how to interpret the user's slash-commands. Follow it as your primary
behavioral guide:

--- DEFAULT SKILL ---
{skill_block}
--- END DEFAULT SKILL ---

RECENT SESSION HISTORY (automatic, most recent last - use this to know what
"we" were doing if the user refers back to earlier work):
--- HISTORY ---
{history_block}
--- END HISTORY ---

PROJECT MEMORY (notes you or a prior session chose to remember - not
automatic, only what was explicitly saved with remember()):
--- MEMORY ---
{memory_block}
--- END MEMORY ---

OPERATING RULES (do not conflict with the skill above, just the mechanics):
1. Call working() before starting any task.
2. You already have Read+Write permission - no need to call checkout unless
   you need delete access, which you must request explicitly.
3. Use read_file/write_file/create_file directly.
4. Call done() when finished.
5. Only use the tools provided.
6. If the user asks you to remember something, or you learn a durable
   project fact worth keeping (a decision, a convention, something to
   avoid), call remember(note). Use recall() if you need to check what is
   already saved before adding to it.

OUTPUT FORMAT:
- A Markdown engine is rendering your output in the terminal.
- Use **bold**, `code`, ```code blocks```, bullet lists, headers freely.
- Use say() to send markdown responses to the user.
- Keep responses clear and well-formatted.

TOOLS:
- working(message)                    announce what you are doing
- list_files()                        list project files
- read_file(filename)                 read a file
- write_file(filename, content)       overwrite a file entirely
- create_file(filename, content)      create a new file
- shell(cmd, reason)                  run a shell command (user must approve)
- web_search(query)                   search the web for docs/info
- remember(note)                      save a durable note to project memory
- recall()                            read everything saved in project memory
- say(message)                        send markdown output to user
- done()                              signal completion

Use shell() for: git clone, npm install, pip install, running tests, etc.
Use web_search() when you need current docs, package versions, or anything uncertain.
"""

    messages = agent_ref.messages
    messages.append({"role": "user", "content": prompt})

    console.print(f"[dim]Prompt:[/dim] [bold]{prompt}[/bold]\n")

    result = run_loop(
        adapter,
        system_prompt,
        messages,
        CLAUDE_TOOLS,
        ams,
        token_store,
        error_exec,
        model,
    )
    final_text = result.text
    summary_steps = result.steps

    if ams._working is not False:
        ams.WorkingStop(Yes=True)

    # Record this session to .YAC/.AI_HIST so future sessions know what
    # "we" were doing when the user refers back to it.
    summary = (
        final_text.strip()
        or "; ".join(s for s in summary_steps if s)
        or "(no summary available)"
    )
    pfps.AppendHistory(session_id, prompt, summary[:500])
