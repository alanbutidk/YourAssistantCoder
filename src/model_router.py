"""
YourAssistantCoder (yac) - model_router.py
Model-agnostic adapter layer. Claude, GPT, Gemini all speak the same interface.
"""

import json
import keyring
from abc import ABC, abstractmethod
from typing import Generator

KEYRING_SERVICE = "YourAssistantCoder"


# --- Unified message/response types -----------------------------------------

class ToolCall:
    def __init__(self, id: str, name: str, inputs: dict):
        self.id     = id
        self.name   = name
        self.inputs = inputs


class AgentResponse:
    def __init__(self, text: str, tool_calls: list[ToolCall], stop_reason: str):
        self.text        = text
        self.tool_calls  = tool_calls
        self.stop_reason = stop_reason  # "end_turn" | "tool_use" | "error"


# --- Base adapter ------------------------------------------------------------

class BaseAdapter(ABC):
    name: str = ""

    @abstractmethod
    def complete(
        self,
        system:   str,
        messages: list,
        tools:    list,
    ) -> AgentResponse: ...

    def get_key(self, key_name: str) -> str:
        key = keyring.get_password(KEYRING_SERVICE, key_name)
        if not key:
            import pwinput
            from rich.console import Console
            c = Console()
            c.print(f"[bold cyan]Enter your {self.name} API key:[/bold cyan] ", end="")
            key = pwinput.pwinput(prompt="", mask="*").strip()
            keyring.set_password(KEYRING_SERVICE, key_name, key)
            c.print("[dim]Key saved to system keyring.[/dim]")
        return key


# --- Claude adapter ----------------------------------------------------------

class ClaudeAdapter(BaseAdapter):
    name    = "claude"
    MODEL   = "claude-haiku-4-5"   # swap to opus/sonnet as needed

    def complete(self, system, messages, tools) -> AgentResponse:
        import anthropic
        client = anthropic.Anthropic(api_key=self.get_key("anthropic_key"))

        resp = client.messages.create(
            model      = self.MODEL,
            max_tokens = 4096,
            system     = system,
            tools      = tools,
            messages   = messages,
        )

        tool_calls = []
        text       = ""
        for block in resp.content:
            if block.type == "tool_use":
                tool_calls.append(ToolCall(
                    id     = block.id,
                    name   = block.name,
                    inputs = block.input,
                ))
            elif block.type == "text":
                text += block.text

        stop = "tool_use" if tool_calls else "end_turn"
        return AgentResponse(text, tool_calls, stop)

    def format_tool_result(self, tool_call_id: str, content: str) -> dict:
        return {
            "type":        "tool_result",
            "tool_use_id": tool_call_id,
            "content":     content,
        }

    def format_assistant_message(self, response: AgentResponse, raw) -> dict:
        return {"role": "assistant", "content": raw.content}


# --- GPT adapter -------------------------------------------------------------

class GPTAdapter(BaseAdapter):
    name  = "gpt"
    MODEL = "gpt-5.4-mini"

    def _convert_tools(self, tools: list) -> list:
        converted = []
        for t in tools:
            converted.append({
                "type":        "function",
                "name":        t["name"],
                "description": t.get("description", ""),
                "parameters":  t.get("input_schema", {"type": "object", "properties": {}}),
            })
        return converted

    def complete(self, system, messages, tools) -> AgentResponse:
        from openai import OpenAI
        client = OpenAI(api_key=self.get_key("openai_key"))

        input_messages = [{"role": "system", "content": system}]
        for m in messages:
            if isinstance(m["content"], str):
                input_messages.append({"role": m["role"], "content": m["content"]})
            elif isinstance(m["content"], list):
                for block in m["content"]:
                    if isinstance(block, dict):
                        t = block.get("type", "")
                        if t == "tool_result":
                            # Tool result back to model
                            input_messages.append({
                                "type":    "function_call_output",
                                "call_id": block["tool_use_id"],
                                "output":  str(block["content"]),
                            })
                        elif t == "tool_use":
                            # Assistant tool call
                            input_messages.append({
                                "type":      "function_call",
                                "call_id":   block.get("id", block.get("call_id", "")),
                                "name":      block["name"],
                                "arguments": json.dumps(block.get("input", {})),
                            })
                        elif t == "text" and block.get("text"):
                            input_messages.append({"role": "assistant", "content": block["text"]})

        resp = client.responses.create(
            model  = self.MODEL,
            input  = input_messages,
            tools  = self._convert_tools(tools),
        )

        tool_calls = []
        text       = ""

        for item in resp.output:
            if item.type == "function_call":
                try:
                    inputs = json.loads(item.arguments)
                except (json.JSONDecodeError, AttributeError):
                    inputs = {}
                tool_calls.append(ToolCall(id=item.call_id, name=item.name, inputs=inputs))
            elif item.type == "message":
                for block in item.content:
                    if hasattr(block, "text"):
                        text += block.text

        stop = "tool_use" if tool_calls else "end_turn"
        return AgentResponse(text, tool_calls, stop), resp

    def format_tool_result(self, tool_call_id: str, content: str) -> dict:
        return {"type": "tool_result", "tool_use_id": tool_call_id, "content": content}

    def format_assistant_message(self, response: AgentResponse, raw) -> dict:
        parts = []
        for item in raw.output:
            if item.type == "function_call":
                try:
                    inp = json.loads(item.arguments) if item.arguments else {}
                except Exception:
                    inp = {}
                parts.append({"type": "tool_use", "id": item.call_id, "name": item.name, "input": inp})
            elif item.type == "message":
                for block in item.content:
                    if hasattr(block, "text"):
                        parts.append({"type": "text", "text": block.text})
        return {"role": "assistant", "content": parts}


# --- Gemini adapter ----------------------------------------------------------

class GeminiAdapter(BaseAdapter):
    name  = "gemini"
    MODEL = "gemini-2.0-flash-lite"

    def _convert_tools(self, tools: list) -> list:
        from google.genai import types
        declarations = []
        for t in tools:
            schema = t.get("input_schema", {})
            props  = {}
            for k, v in schema.get("properties", {}).items():
                props[k] = types.Schema(type=types.Type.STRING, description=v.get("description",""))
            declarations.append(types.FunctionDeclaration(
                name        = t["name"],
                description = t.get("description", ""),
                parameters  = types.Schema(
                    type       = types.Type.OBJECT,
                    properties = props,
                    required   = schema.get("required", []),
                ),
            ))
        return [types.Tool(function_declarations=declarations)]

    def _build_history(self, messages: list) -> list:
        from google.genai import types
        history = []
        for m in messages[:-1]:
            role = "user" if m["role"] == "user" else "model"
            if isinstance(m["content"], str):
                history.append(types.Content(role=role, parts=[types.Part.from_text(text=m["content"])]))
            elif isinstance(m["content"], list):
                parts = []
                for block in m["content"]:
                    if isinstance(block, dict) and block.get("type") == "tool_result":
                        parts.append(types.Part.from_function_response(
                            name     = block.get("tool_use_id", "tool"),
                            response = {"result": block["content"]},
                        ))
                    elif hasattr(block, "type"):
                        if block.type == "tool_use":
                            parts.append(types.Part.from_function_call(name=block.name, args=block.input))
                        elif block.type == "text" and block.text:
                            parts.append(types.Part.from_text(text=block.text))
                if parts:
                    history.append(types.Content(role=role, parts=parts))
        return history

    def complete(self, system, messages, tools) -> AgentResponse:
        from google import genai
        from google.genai import types

        client       = genai.Client(api_key=self.get_key("gemini_key"))
        gemini_tools = self._convert_tools(tools)
        history      = self._build_history(messages)
        last_msg     = messages[-1]["content"] if messages else ""
        last_text    = last_msg if isinstance(last_msg, str) else str(last_msg)

        contents = history + [types.Content(role="user", parts=[types.Part.from_text(text=last_text)])]

        resp = client.models.generate_content(
            model    = self.MODEL,
            contents = contents,
            config   = types.GenerateContentConfig(
                system_instruction = system,
                tools              = gemini_tools,
            ),
        )

        tool_calls = []
        text       = ""
        for part in resp.candidates[0].content.parts:
            fc = getattr(part, "function_call", None)
            if fc and getattr(fc, "name", None):
                tool_calls.append(ToolCall(id=fc.name, name=fc.name, inputs=dict(fc.args)))
            elif getattr(part, "text", None):
                text += part.text

        stop = "tool_use" if tool_calls else "end_turn"
        return AgentResponse(text, tool_calls, stop), resp

    def format_tool_result(self, tool_call_id: str, content: str) -> dict:
        return {"type": "tool_result", "tool_use_id": tool_call_id, "content": content}

    def format_assistant_message(self, response: AgentResponse, raw) -> dict:
        return {"role": "model", "content": [p for p in raw.candidates[0].content.parts]}




# --- Ollama adapter (local models) -------------------------------------------
# Supports any model running in Ollama: codellama, deepseek-coder, qwen2.5-coder, etc.
# Install: https://ollama.ai  then: ollama pull codellama

class OllamaAdapter(BaseAdapter):
    name  = "ollama"
    MODEL = "codellama"   # change to any ollama model you have pulled

    # Well-known coding models - used to populate the picker
    CODING_MODELS = [
        "codellama", "codellama:7b", "codellama:13b", "codellama:34b",
        "deepseek-coder", "deepseek-coder:6.7b", "deepseek-coder:33b",
        "deepseek-coder-v2", "deepseek-coder-v2:16b",
        "qwen2.5-coder", "qwen2.5-coder:7b", "qwen2.5-coder:14b", "qwen2.5-coder:32b",
        "codegemma", "codegemma:7b",
        "starcoder2", "starcoder2:3b", "starcoder2:7b", "starcoder2:15b",
        "magicoder", "wizard-coder",
        "phind-codellama", "phind-codellama:34b",
        "granite-code", "granite-code:8b", "granite-code:20b",
    ]

    def __init__(self, model: str = None, host: str = "http://localhost:11434"):
        self.MODEL = model or self.__class__.MODEL
        self.host  = host

    def get_key(self, key_name: str) -> str:
        return ""   # no key needed for local

    @classmethod
    def list_local_models(cls, host: str = "http://localhost:11434") -> list[str]:
        """Fetch models currently pulled in Ollama."""
        import urllib.request
        try:
            with urllib.request.urlopen(f"{host}/api/tags", timeout=5) as resp:
                data = json.loads(resp.read().decode())
            return [m["name"] for m in data.get("models", [])]
        except Exception:
            return []

    @classmethod
    def is_running(cls, host: str = "http://localhost:11434") -> bool:
        import urllib.request
        try:
            urllib.request.urlopen(f"{host}/api/tags", timeout=3)
            return True
        except Exception:
            return False

    @classmethod
    def pull_model(cls, model: str, host: str = "http://localhost:11434") -> bool:
        """Pull a model from Ollama registry. Returns True on success."""
        import urllib.request
        payload = json.dumps({"name": model, "stream": False}).encode()
        req = urllib.request.Request(
            f"{host}/api/pull",
            data=payload,
            headers={"Content-Type": "application/json"},
            method="POST",
        )
        try:
            with urllib.request.urlopen(req, timeout=300) as resp:
                data = json.loads(resp.read().decode())
            return data.get("status") == "success"
        except Exception:
            return False

    def _oai_tools(self, tools: list) -> list:
        return [{
            "type": "function",
            "function": {
                "name":        t["name"],
                "description": t.get("description", ""),
                "parameters":  t.get("input_schema", {"type": "object", "properties": {}}),
            }
        } for t in tools]

    def _build_messages(self, system: str, messages: list) -> list:
        out = [{"role": "system", "content": system}]
        for m in messages:
            if isinstance(m["content"], str):
                out.append({"role": m["role"], "content": m["content"]})
            elif isinstance(m["content"], list):
                for block in m["content"]:
                    if isinstance(block, dict):
                        t = block.get("type", "")
                        if t == "tool_result":
                            out.append({
                                "role":         "tool",
                                "tool_call_id": block["tool_use_id"],
                                "content":      str(block["content"]),
                            })
                        elif t == "tool_use":
                            out.append({
                                "role":    "assistant",
                                "content": None,
                                "tool_calls": [{
                                    "id":       block.get("id",""),
                                    "type":     "function",
                                    "function": {
                                        "name":      block["name"],
                                        "arguments": json.dumps(block.get("input", {})),
                                    }
                                }],
                            })
                        elif t == "text" and block.get("text"):
                            out.append({"role": "assistant", "content": block["text"]})
        return out

    def complete(self, system, messages, tools) -> AgentResponse:
        import urllib.request
        msgs    = self._build_messages(system, messages)
        payload = json.dumps({
            "model":    self.MODEL,
            "messages": msgs,
            "tools":    self._oai_tools(tools),
            "stream":   False,
        }).encode()

        req  = urllib.request.Request(
            f"{self.host}/api/chat",
            data=payload,
            headers={"Content-Type": "application/json"},
            method="POST",
        )
        try:
            with urllib.request.urlopen(req, timeout=120) as resp:
                data = json.loads(resp.read().decode())
        except Exception as e:
            raise RuntimeError(f"Ollama error: {e}. Is Ollama running? Try: ollama serve")

        msg        = data.get("message", {})
        text       = msg.get("content", "") or ""
        tool_calls = []

        for tc in msg.get("tool_calls", []):
            fn = tc.get("function", {})
            try:
                args = fn.get("arguments", {})
                if isinstance(args, str):
                    args = json.loads(args)
            except Exception:
                args = {}
            call_id = tc.get("id", fn.get("name", "call"))
            tool_calls.append(ToolCall(id=call_id, name=fn.get("name",""), inputs=args))

        stop = "tool_use" if tool_calls else "end_turn"
        return AgentResponse(text, tool_calls, stop), data

    def format_tool_result(self, tool_call_id: str, content: str) -> dict:
        return {"type": "tool_result", "tool_use_id": tool_call_id, "content": content}

    def format_assistant_message(self, response: AgentResponse, raw) -> dict:
        msg  = raw.get("message", {})
        text = msg.get("content", "")
        tcs  = []
        for tc in msg.get("tool_calls", []):
            fn = tc.get("function", {})
            tcs.append({"type": "tool_use", "id": tc.get("id", fn.get("name","")),
                        "name": fn.get("name",""), "input": fn.get("arguments", {})})
        parts = []
        if text: parts.append({"type": "text", "text": text})
        parts.extend(tcs)
        return {"role": "assistant", "content": parts}


# --- DeepSeek adapter --------------------------------------------------------
# DeepSeek-Coder V3 — extremely strong at coding, cheap API
# Get key: https://platform.deepseek.com

class DeepSeekAdapter(BaseAdapter):
    name  = "deepseek"
    MODEL = "deepseek-chat"   # deepseek-chat = DeepSeek-V3, deepseek-reasoner = R1

    def _oai_tools(self, tools: list) -> list:
        return [{
            "type": "function",
            "function": {
                "name":        t["name"],
                "description": t.get("description", ""),
                "parameters":  t.get("input_schema", {"type": "object", "properties": {}}),
            }
        } for t in tools]

    def _build_messages(self, system: str, messages: list) -> list:
        out = [{"role": "system", "content": system}]
        for m in messages:
            if isinstance(m["content"], str):
                out.append({"role": m["role"], "content": m["content"]})
            elif isinstance(m["content"], list):
                for block in m["content"]:
                    if isinstance(block, dict):
                        t = block.get("type", "")
                        if t == "tool_result":
                            out.append({
                                "role":         "tool",
                                "tool_call_id": block["tool_use_id"],
                                "content":      str(block["content"]),
                            })
                        elif t == "tool_use":
                            out.append({
                                "role": "assistant", "content": None,
                                "tool_calls": [{
                                    "id": block.get("id",""), "type": "function",
                                    "function": {"name": block["name"],
                                                 "arguments": json.dumps(block.get("input",{}))},
                                }],
                            })
                        elif t == "text" and block.get("text"):
                            out.append({"role": "assistant", "content": block["text"]})
        return out

    def complete(self, system, messages, tools) -> AgentResponse:
        from openai import OpenAI
        client = OpenAI(
            api_key  = self.get_key("deepseek_key"),
            base_url = "https://api.deepseek.com",
        )
        resp = client.chat.completions.create(
            model    = self.MODEL,
            messages = self._build_messages(system, messages),
            tools    = self._oai_tools(tools),
        )
        msg        = resp.choices[0].message
        text       = msg.content or ""
        tool_calls = []
        for tc in (msg.tool_calls or []):
            try: inputs = json.loads(tc.function.arguments)
            except Exception: inputs = {}
            tool_calls.append(ToolCall(id=tc.id, name=tc.function.name, inputs=inputs))

        stop = "tool_use" if tool_calls else "end_turn"
        return AgentResponse(text, tool_calls, stop), resp

    def format_tool_result(self, tool_call_id: str, content: str) -> dict:
        return {"type": "tool_result", "tool_use_id": tool_call_id, "content": content}

    def format_assistant_message(self, response: AgentResponse, raw) -> dict:
        msg  = raw.choices[0].message
        text = msg.content or ""
        parts = []
        if text: parts.append({"type": "text", "text": text})
        for tc in (msg.tool_calls or []):
            try: inp = json.loads(tc.function.arguments)
            except Exception: inp = {}
            parts.append({"type":"tool_use","id":tc.id,"name":tc.function.name,"input":inp})
        return {"role": "assistant", "content": parts}


# --- Mistral adapter ---------------------------------------------------------
# Mistral Codestral — purpose-built code model, fast and cheap
# Get key: https://console.mistral.ai

class MistralAdapter(BaseAdapter):
    name  = "mistral"
    MODEL = "codestral-latest"   # or mistral-large-latest

    def _oai_tools(self, tools: list) -> list:
        return [{
            "type": "function",
            "function": {
                "name":        t["name"],
                "description": t.get("description", ""),
                "parameters":  t.get("input_schema", {"type": "object", "properties": {}}),
            }
        } for t in tools]

    def _build_messages(self, system: str, messages: list) -> list:
        out = [{"role": "system", "content": system}]
        for m in messages:
            if isinstance(m["content"], str):
                out.append({"role": m["role"], "content": m["content"]})
            elif isinstance(m["content"], list):
                for block in m["content"]:
                    if isinstance(block, dict):
                        t = block.get("type", "")
                        if t == "tool_result":
                            out.append({
                                "role": "tool",
                                "tool_call_id": block["tool_use_id"],
                                "content": str(block["content"]),
                                "name": block.get("tool_use_id", "tool"),
                            })
                        elif t == "tool_use":
                            out.append({
                                "role": "assistant", "content": None,
                                "tool_calls": [{
                                    "id": block.get("id",""), "type": "function",
                                    "function": {"name": block["name"],
                                                 "arguments": json.dumps(block.get("input",{}))},
                                }],
                            })
                        elif t == "text" and block.get("text"):
                            out.append({"role": "assistant", "content": block["text"]})
        return out

    def complete(self, system, messages, tools) -> AgentResponse:
        import urllib.request
        payload = json.dumps({
            "model":    self.MODEL,
            "messages": self._build_messages(system, messages),
            "tools":    self._oai_tools(tools),
        }).encode()

        req = urllib.request.Request(
            "https://api.mistral.ai/v1/chat/completions",
            data=payload,
            headers={
                "Content-Type":  "application/json",
                "Authorization": f"Bearer {self.get_key('mistral_key')}",
            },
            method="POST",
        )
        with urllib.request.urlopen(req, timeout=60) as resp:
            data = json.loads(resp.read().decode())

        msg        = data["choices"][0]["message"]
        text       = msg.get("content", "") or ""
        tool_calls = []
        for tc in msg.get("tool_calls", []):
            fn = tc.get("function", {})
            try: inputs = json.loads(fn.get("arguments","{}"))
            except Exception: inputs = {}
            tool_calls.append(ToolCall(id=tc.get("id",""), name=fn.get("name",""), inputs=inputs))

        stop = "tool_use" if tool_calls else "end_turn"
        return AgentResponse(text, tool_calls, stop), data

    def format_tool_result(self, tool_call_id: str, content: str) -> dict:
        return {"type": "tool_result", "tool_use_id": tool_call_id, "content": content}

    def format_assistant_message(self, response: AgentResponse, raw) -> dict:
        msg  = raw["choices"][0]["message"]
        text = msg.get("content","") or ""
        parts = []
        if text: parts.append({"type":"text","text":text})
        for tc in msg.get("tool_calls",[]):
            fn = tc.get("function",{})
            try: inp = json.loads(fn.get("arguments","{}"))
            except Exception: inp = {}
            parts.append({"type":"tool_use","id":tc.get("id",""),"name":fn.get("name",""),"input":inp})
        return {"role": "assistant", "content": parts}

# --- Router ------------------------------------------------------------------

ADAPTERS = {
    "claude":   ClaudeAdapter,
    "gpt":      GPTAdapter,
    "gemini":   GeminiAdapter,
    "ollama":   OllamaAdapter,
    "deepseek": DeepSeekAdapter,
    "mistral":  MistralAdapter,
}

def get_adapter(model: str) -> BaseAdapter:
    key = model.lower()
    # Support ollama:modelname syntax e.g. ollama:deepseek-coder
    if key.startswith("ollama:"):
        model_name = key.split(":", 1)[1]
        return OllamaAdapter(model=model_name)
    if key not in ADAPTERS:
        raise ValueError(f"Unknown model {model!r}. Choose: {', '.join(ADAPTERS)}")
    return ADAPTERS[key]()