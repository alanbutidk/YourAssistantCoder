"""
YourAssistantCoder (yac) - agent.py
Model-agnostic agent loop. Claude, GPT, or Gemini via ModelRouter.
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

# --- Unified tool definitions (Anthropic format - router converts as needed) -

CLAUDE_TOOLS = [
    {
        "name": "CheckOut",
        "description": "Request a permission token before any file operation. Always call this first.",
        "input_schema": {
            "type": "object",
            "properties": {
                "permission_level": {
                    "type": "string",
                    "enum": ["Read", "Read+Write", "Read+Write+Delete", "SpecialUse"],
                },
                "files": {"type": "array", "items": {"type": "string"}},
            },
            "required": ["permission_level"],
        },
    },
    {
        "name": "UseTool",
        "description": "Execute a sandboxed file operation. Requires a valid token from CheckOut.",
        "input_schema": {
            "type": "object",
            "properties": {
                "toolname": {
                    "type": "string",
                    "enum": ["read_chunk","write_chunk","append_chunk","create_file","delete_file","list_files"],
                },
                "filename":  {"type": "string"},
                "chunk_key": {"type": "string"},
                "content":   {"type": "string"},
                "subpath":   {"type": "string"},
            },
            "required": ["toolname"],
        },
    },
    {
        "name": "ErrorExecution",
        "description": "Execute Python code inside the sandbox. Output and errors feed back to you.",
        "input_schema": {
            "type": "object",
            "properties": {
                "code": {"type": "string"},
            },
            "required": ["code"],
        },
    },
    {
        "name": "SpecialUse",
        "description": "Execute an operation outside normal tools. Use sparingly.",
        "input_schema": {
            "type": "object",
            "properties": {
                "String":      {"type": "string"},
                "ask_confirm": {"type": "boolean"},
            },
            "required": ["String"],
        },
    },
    {
        "name": "Working",
        "description": "Announce the start of a task to the terminal.",
        "input_schema": {
            "type": "object",
            "properties": {
                "Yes":     {"type": "boolean"},
                "message": {"type": "string"},
            },
            "required": ["Yes", "message"],
        },
    },
    {
        "name": "WorkingStop",
        "description": "Signal graceful completion of the task.",
        "input_schema": {
            "type": "object",
            "properties": {"Yes": {"type": "boolean"}},
            "required": ["Yes"],
        },
    },
    {
        "name": "printtoconsole",
        "description": "Print a message to the Rich terminal. Your only output channel.",
        "input_schema": {
            "type": "object",
            "properties": {"message": {"type": "string"}},
            "required": ["message"],
        },
    },
]


# --- Tool dispatcher ----------------------------------------------------------

def dispatch_tool(name: str, inputs: dict, ams: AMS, token_store: dict, error_exec: ErrorExecution) -> str:
    try:
        if name == "CheckOut":
            token = ams.CheckOut(
                inputs["permission_level"],
                files=inputs.get("files"),
            )
            token_store["current"] = token
            return json.dumps({"status": "ok", "role": token.role, "level": token.level})

        if name == "Working":
            ams.Working(Yes=inputs.get("Yes", True), message=inputs.get("message", ""))
            return "ok"

        if name == "WorkingStop":
            ams.WorkingStop(Yes=inputs.get("Yes", True))
            return "ok"

        if name == "printtoconsole":
            ams.printtoconsole(inputs["message"])
            return "ok"

        if name == "SpecialUse":
            return ams.SpecialUse(
                String=inputs["String"],
                ask_confirm=inputs.get("ask_confirm", False),
            )

        if name == "ErrorExecution":
            g = ams.build_globals()
            g["ErrorExecution"] = error_exec.Run
            return error_exec.Run(inputs["code"], g)

        if name == "UseTool":
            token = token_store.get("current")
            if not token:
                return "ERROR: No token - call CheckOut first"
            result = ams.UseTool(inputs["toolname"], token, **{
                k: v for k, v in inputs.items() if k != "toolname"
            })
            return json.dumps(result) if isinstance(result, (list, dict)) else str(result)

        return f"ERROR: Unknown tool {name!r}"

    except Exception as e:
        return f"ERROR: {e}"


# --- Keyring helper -----------------------------------------------------------

def clear_api_key(provider: str = "anthropic"):
    key_map = {"claude": "anthropic_key", "gpt": "openai_key", "gemini": "gemini_key"}
    key_name = key_map.get(provider, "anthropic_key")
    try:
        keyring.delete_password(KEYRING_SERVICE, key_name)
        console.print(f"[dim]{provider} key removed from keyring.[/dim]")
    except Exception:
        console.print(f"[dim]No {provider} key found in keyring - nothing to clear.[/dim]")


# --- Agent loop ---------------------------------------------------------------

def run_agent(prompt: str, pfps: PFPS, role: str = "Editor", model: str = "claude"):
    adapter    = get_adapter(model)

    # Prompt for API key immediately before anything else
    adapter.get_key({
        "claude": "anthropic_key",
        "gpt":    "openai_key",
        "gemini": "gemini_key",
    }[model])

    session_id  = uuid.uuid4().hex[:8]
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

    # Seed file list
    viewer_token = ams.CheckOut(Permissions.Read)
    file_list    = pfps.ListFiles(viewer_token)
    files_str    = "\n".join(f"  - {f}" for f in file_list)

    system_prompt = f"""You are YourAssistantCoder (yac), a sandboxed coding agent.
Sandbox root: {pfps.root}

Project files:
{files_str}

RULES:
1. Call Working() before starting any task.
2. Call CheckOut() before any file operation to get a token.
3. Use UseTool() for all file operations.
4. Use ErrorExecution() to test code - output feeds back to you automatically.
5. Use printtoconsole() to communicate with the user.
6. Call WorkingStop() when fully done.
7. Always ReadChunk before WriteChunk on the same file.
8. You cannot leave the sandbox.

Token levels: Read | Read+Write | Read+Write+Delete | SpecialUse
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
                if model == "gemini":
                    console.print(f"[dim]Get a new key at:[/dim] [cyan]https://aistudio.google.com/apikey[/cyan]")
                elif model == "gpt":
                    console.print(f"[dim]Get a new key at:[/dim] [cyan]https://platform.openai.com/api-keys[/cyan]")
                elif model == "claude":
                    console.print(f"[dim]Get a new key at:[/dim] [cyan]https://console.anthropic.com[/cyan]")
                console.print(f"[dim]Then run:[/dim] [cyan]yac key-clear --provider {model}[/cyan]")
            elif "401" in err or "authentication" in err.lower() or "api_key" in err.lower() or "AuthenticationError" in type(e).__name__:
                console.print(f"\n[bold red]✗  Invalid API key[/bold red] [dim]- authentication failed.[/dim]")
                console.print(f"[dim]Run:[/dim] [cyan]yac key-clear --provider {model}[/cyan]")
            elif "timeout" in err.lower():
                console.print(f"\n[bold yellow]⚠  Request timed out[/bold yellow] [dim]- try again.[/dim]")
            else:
                console.print(f"\n[bold red]✗  API error ({type(e).__name__}):[/bold red] [dim]{err[:200]}[/dim]")
            break

        # Adapters return (AgentResponse, raw) or just AgentResponse
        if isinstance(result, tuple):
            response, raw = result
        else:
            response, raw = result, None

        # Append assistant turn
        if raw is not None:
            messages.append(adapter.format_assistant_message(response, raw))
        else:
            messages.append({"role": "assistant", "content": response.text or ""})

        if response.stop_reason == "end_turn" or not response.tool_calls:
            if response.text:
                console.print(f"\n[dim]{response.text}[/dim]")
            break

        # Process tool calls
        tool_results = []
        done         = False

        for tc in response.tool_calls:
            res = dispatch_tool(tc.name, tc.inputs, ams, token_store, error_exec)
            tool_results.append(adapter.format_tool_result(tc.id, res))
            if tc.name == "WorkingStop":
                done = True
                break

        messages.append({"role": "user", "content": tool_results})

        if done or ams.should_stop:
            break

    ams.WorkingStop(Yes=True)