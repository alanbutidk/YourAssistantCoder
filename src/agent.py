"""
YourAssistantCoder (yac) - agent.py
Model-agnostic agent loop.
"""

import json
import uuid
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
                "filename": {"type": "string", "description": "Path to file e.g. auth.py"},
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
                "content":  {"type": "string"},
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
                "content":  {"type": "string"},
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
                "cmd":    {"type": "string", "description": "The shell command to run e.g. git clone https://..."},
                "reason": {"type": "string", "description": "Why you need to run this command"},
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
]


def _ensure_token(token_store, ams, level="read"):
    """Auto-checkout if no token yet."""
    if not token_store.get("current"):
        level_map = {"read": "Read", "write": "Read+Write", "delete": "Read+Write+Delete"}
        token = ams.CheckOut(level_map.get(level, "Read+Write"))
        token_store["current"] = token
    return token_store["current"]


def dispatch_tool(name: str, inputs: dict, ams: AMS, token_store: dict, error_exec: ErrorExecution) -> str:
    try:
        if name == "checkout":
            level_map = {"read": "Read", "write": "Read+Write", "delete": "Read+Write+Delete"}
            token = ams.CheckOut(level_map.get(inputs.get("level", "write"), "Read+Write"))
            token_store["current"] = token
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
            content  = inputs["content"]
            pfps = ams.pfps
            filepath = pfps.SandboxPath(filename)
            with open(filepath, "w", encoding="utf-8") as f:
                f.write(content)
            pfps.BuildVarFile(filename)
            return "ok"

        if name == "create_file":
            token = _ensure_token(token_store, ams, "write")
            return str(ams.UseTool("create_file", token,
                filename=inputs["filename"],
                content=inputs.get("content", "")))

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
            token = ams.CheckOut(inputs.get("permission_level", "Read+Write"))
            token_store["current"] = token
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
            result = ams.UseTool(inputs["toolname"], token, **{
                k: v for k, v in inputs.items() if k != "toolname"
            })
            return json.dumps(result) if isinstance(result, (list, dict)) else str(result)

        if name == "shell":
            from shell_exec import ShellExecutor
            executor = getattr(dispatch_tool, "_shell_exec", None)
            if executor is None:
                executor = ShellExecutor(str(ams.pfps.root))
                dispatch_tool._shell_exec = executor
            cmd    = inputs.get("cmd", "")
            reason = inputs.get("reason", "")
            ams.logger.write("SHELL", f"requested: {cmd}")
            result = executor.run(cmd, reason)
            ams.logger.write("SHELL", f"result: {result[:80]}")
            return result

        if name == "web_search":
            from web_search import search
            query  = inputs.get("query", "")
            ams.logger.write("WEBSEARCH", query)
            result = search(query)
            ams.logger.write("WEBSEARCH", f"got {len(result)} chars")
            return result

        return f"ERROR: Unknown tool {name!r}"

    except Exception as e:
        return f"ERROR: {e}"


def clear_api_key(provider: str = "claude"):
    key_map = {"claude": "anthropic_key", "gpt": "openai_key", "gemini": "gemini_key"}
    key_name = key_map.get(provider, "anthropic_key")
    try:
        keyring.delete_password(KEYRING_SERVICE, key_name)
        console.print(f"[dim]{provider} key removed from keyring.[/dim]")
    except Exception:
        console.print(f"[dim]No {provider} key found in keyring - nothing to clear.[/dim]")


def run_agent(prompt: str, pfps: PFPS, role: str = "Editor", model: str = "claude"):
    adapter    = get_adapter(model)
    session_id = uuid.uuid4().hex[:8]
    token_store: dict = {}

    pfps.start_session(session_id)
    ams        = AMS(pfps, console, session_id)
    error_exec = ErrorExecution(ams, console)

    class AgentRef:
        def __init__(self):
            self.messages        = []
            self.original_prompt = prompt
        def nap(self):
            self.messages.clear()

    agent_ref = AgentRef()
    error_exec.bind_agent(agent_ref)

    from console import print_session_start
    print_session_start(session_id, pfps.config.get("name", "unknown"), role)
    console.print(f"[dim]Model:[/dim]  [bold magenta]{model}[/bold magenta] ({adapter.MODEL if hasattr(adapter, 'MODEL') else ''})\n")

    viewer_token = ams.CheckOut(Permissions.Read)
    file_list    = pfps.ListFiles(viewer_token)
    files_str    = "\n".join(f"  - {f}" for f in file_list) or "  (no files yet)"

    system_prompt = f"""You are YourAssistantCoder (yac), a sandboxed coding agent.
Sandbox root: {pfps.root}

Project files:
{files_str}

RULES:
1. Call working() before starting any task.
2. You already have Read+Write permission - no need to call checkout.
3. Use read_file/write_file/create_file directly.
4. Call done() when finished.
5. Use shell() for system commands - user will approve each one. Use web_search() for internet access.
6. Only use the tools provided.

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
- say(message)                        send markdown output to user
- done()                              signal completion

Use shell() for: git clone, npm install, pip install, running tests, etc.
Use web_search() when you need current docs, package versions, or anything uncertain.
"""

    messages = agent_ref.messages
    messages.append({"role": "user", "content": prompt})

    console.print(f"[dim]Prompt:[/dim] [bold]{prompt}[/bold]\n")

    while True:
        if ams.should_stop:
            console.print("[bold red]Agent terminated by user.[/bold red]")
            break

        try:
            result = adapter.complete(system_prompt, messages, CLAUDE_TOOLS)
        except Exception as e:
            err = str(e)
            if "429" in err or "RESOURCE_EXHAUSTED" in err or "quota" in err.lower() or "RateLimitError" in type(e).__name__:
                import re
                delay = re.search(r'retry in (\d+)', err, re.IGNORECASE)
                delay_str = f" Retry in {delay.group(1)}s." if delay else ""
                console.print(f"\n[bold red]✗  Token is finished[/bold red] [dim]- API quota exhausted.{delay_str}[/dim]")
                key_urls = {"gemini": "https://aistudio.google.com/apikey", "gpt": "https://platform.openai.com/api-keys", "claude": "https://console.anthropic.com"}
                console.print(f"[dim]Get a new key at:[/dim] [cyan]{key_urls.get(model, '')}[/cyan]")
                console.print(f"[dim]Then run:[/dim] [cyan]yac key-clear --provider {model}[/cyan]")
            elif "billing" in err.lower() or "credit" in err.lower() or "payment" in err.lower():
                console.print(f"\n[bold red]✗  No credits[/bold red] [dim]- add billing at platform.openai.com/settings/billing[/dim]")
            elif "401" in err or "authentication" in err.lower() or "AuthenticationError" in type(e).__name__:
                console.print(f"\n[bold red]✗  Invalid API key[/bold red] [dim]- run: yac key-clear --provider {model}[/dim]")
            elif "timeout" in err.lower():
                console.print(f"\n[bold yellow]⚠  Request timed out[/bold yellow] [dim]- try again.[/dim]")
            else:
                console.print(f"\n[bold red]✗  API error ({type(e).__name__}):[/bold red]\n[dim]{err}[/dim]")
            break

        if isinstance(result, tuple):
            response, raw = result
        else:
            response, raw = result, None

        if raw is not None:
            messages.append(adapter.format_assistant_message(response, raw))
        else:
            messages.append({"role": "assistant", "content": response.text or ""})

        if response.stop_reason == "end_turn" or not response.tool_calls:
            if response.text:
                console.print(f"\n[dim]{response.text}[/dim]")
            break

        tool_results = []
        done         = False

        for tc in response.tool_calls:
            res = dispatch_tool(tc.name, tc.inputs, ams, token_store, error_exec)
            tool_results.append(adapter.format_tool_result(tc.id, res))
            if tc.name in ("WorkingStop", "done"):
                done = True
                break

        messages.append({"role": "user", "content": tool_results})

        if done or ams.should_stop:
            break

    if not ams._working is False:
        ams.WorkingStop(Yes=True)