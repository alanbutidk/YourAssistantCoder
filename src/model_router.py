"""
YourAssistantCoder (yac) - model_router.py
Model-agnostic adapter layer. Claude, GPT, Gemini all speak the same interface.
"""

import json
import keyring
from abc import ABC, abstractmethod
from typing import Generator
import time

KEYRING_SERVICE = "YourAssistantCoder"


class ToolCall:
    def __init__(self, id: str, name: str, inputs: dict):
        self.id = id
        self.name = name
        self.inputs = inputs


class AgentResponse:
    def __init__(self, text: str, tool_calls: list[ToolCall], stop_reason: str):
        self.text = text
        self.tool_calls = tool_calls
        self.stop_reason = stop_reason  # "end_turn" | "tool_use" | "error"


# --------------------------------------------------------------------------- #
# Shared helpers for OpenAI-style APIs (Responses, Chat Completions, Ollama)
# --------------------------------------------------------------------------- #


def _get(obj, key, default=None):
    """Read a field from either a dict or an SDK object."""
    if isinstance(obj, dict):
        return obj.get(key, default)
    return getattr(obj, key, default)


def _parse_args(raw) -> dict:
    """Parse tool-call arguments (JSON string or dict) into a dict, never raising."""
    if isinstance(raw, dict):
        return raw
    if not raw:
        return {}
    try:
        parsed = json.loads(raw)
    except (json.JSONDecodeError, TypeError):
        return {}
    return parsed if isinstance(parsed, dict) else {}


def _stringify(content) -> str:
    return content if isinstance(content, str) else str(content)


def _split_blocks(content) -> tuple:
    """Split internal (Anthropic-style) content blocks into texts, tool_uses, tool_results."""
    texts, uses, results = [], [], []
    for b in content or []:
        t = _get(b, "type", "")
        if t == "text":
            txt = _get(b, "text", "")
            if txt:
                texts.append(txt)
        elif t == "tool_use":
            uses.append(
                {
                    "id": _get(b, "id") or _get(b, "call_id", ""),
                    "name": _get(b, "name", ""),
                    "input": _get(b, "input") or {},
                }
            )
        elif t == "tool_result":
            results.append(
                {"id": _get(b, "tool_use_id", ""), "content": _get(b, "content", "")}
            )
    return texts, uses, results


def _norm_role(role: str) -> str:
    return "assistant" if role == "model" else role


def build_chat_messages(
    system: str, messages: list, args_as_json: bool = True, empty_content=None
) -> list:
    """
    Convert internal history to Chat Completions format.

    Key rules this enforces:
      * All tool calls from one assistant turn live in ONE assistant message,
        so every following `tool` message has a matching tool_call.
      * `tool` messages come first after the assistant turn, any user text after.
      * Text blocks keep their original role (not forced to "assistant").
    """
    out = [{"role": "system", "content": system}]
    for m in messages:
        role = _norm_role(m["role"])
        content = m["content"]

        if isinstance(content, str):
            if content:
                out.append({"role": role, "content": content})
            continue

        texts, uses, results = _split_blocks(content)

        if role == "assistant":
            if not texts and not uses:
                continue
            msg = {
                "role": "assistant",
                "content": "\n".join(texts) if texts else empty_content,
            }
            if uses:
                msg["tool_calls"] = [
                    {
                        "id": u["id"],
                        "type": "function",
                        "function": {
                            "name": u["name"],
                            "arguments": json.dumps(u["input"])
                            if args_as_json
                            else u["input"],
                        },
                    }
                    for u in uses
                ]
            out.append(msg)
        else:
            for r in results:
                out.append(
                    {
                        "role": "tool",
                        "tool_call_id": r["id"],
                        "content": _stringify(r["content"]),
                    }
                )
            if texts:
                out.append({"role": role, "content": "\n".join(texts)})
    return out


def build_responses_input(messages: list) -> list:
    """Convert internal history to OpenAI Responses API input items."""
    items = []
    for m in messages:
        role = _norm_role(m["role"])
        content = m["content"]

        if isinstance(content, str):
            if content:
                items.append({"role": role, "content": content})
            continue

        texts, uses, results = _split_blocks(content)

        if role == "assistant":
            if texts:
                items.append({"role": "assistant", "content": "\n".join(texts)})
            for u in uses:
                items.append(
                    {
                        "type": "function_call",
                        "call_id": u["id"],
                        "name": u["name"],
                        "arguments": json.dumps(u["input"]),
                    }
                )
        else:
            for r in results:
                items.append(
                    {
                        "type": "function_call_output",
                        "call_id": r["id"],
                        "output": _stringify(r["content"]),
                    }
                )
            if texts:
                items.append({"role": role, "content": "\n".join(texts)})
    return items


def oai_chat_tools(tools: list) -> list:
    return [
        {
            "type": "function",
            "function": {
                "name": t["name"],
                "description": t.get("description", ""),
                "parameters": t.get(
                    "input_schema", {"type": "object", "properties": {}}
                ),
            },
        }
        for t in tools
    ]


def _assistant_parts(text: str, calls: list) -> list:
    """calls: list of (id, name, input_dict)."""
    parts = []
    if text:
        parts.append({"type": "text", "text": text})
    for cid, name, inp in calls:
        parts.append({"type": "tool_use", "id": cid, "name": name, "input": inp})
    return parts


class BaseAdapter(ABC):
    name: str = ""

    @abstractmethod
    def complete(
        self,
        system: str,
        messages: list,
        tools: list,
    ) -> tuple: ...

    def get_key(self, key_name: str) -> str:
        cache = self.__dict__.setdefault("_key_cache", {})
        if key_name in cache:
            return cache[key_name]

        key = keyring.get_password(KEYRING_SERVICE, key_name)
        if not key:
            from rich.console import Console

            c = Console()
            c.print(f"[bold cyan]Enter your {self.name} API key:[/bold cyan] ", end="")
            try:
                import pwinput

                key = pwinput.pwinput(prompt="", mask="*").strip()
            except ImportError:
                import getpass

                key = getpass.getpass(prompt="").strip()
            if not key:
                raise ValueError(f"No API key provided for {self.name}.")
            keyring.set_password(KEYRING_SERVICE, key_name, key)
            c.print("[dim]Key saved to system keyring.[/dim]")
        cache[key_name] = key
        return key


class ClaudeAdapter(BaseAdapter):
    name = "claude"
    MODEL = "claude-haiku-4-5"

    def complete(self, system, messages, tools) -> tuple:
        import anthropic

        client = anthropic.Anthropic(api_key=self.get_key("anthropic_key"))

        resp = client.messages.create(
            model=self.MODEL,
            max_tokens=4096,
            system=system,
            tools=tools,
            messages=messages,
        )

        tool_calls = []
        text = ""
        for block in resp.content:
            if block.type == "tool_use":
                tool_calls.append(
                    ToolCall(
                        id=block.id,
                        name=block.name,
                        inputs=block.input,
                    )
                )
            elif block.type == "text":
                text += block.text

        stop = "tool_use" if tool_calls else "end_turn"
        return AgentResponse(text, tool_calls, stop), resp

    def format_tool_result(self, tool_call_id: str, content: str) -> dict:
        return {
            "type": "tool_result",
            "tool_use_id": tool_call_id,
            "content": content,
        }

    def format_assistant_message(self, response: AgentResponse, raw) -> dict:
        return {"role": "assistant", "content": raw.content}


class GPTAdapter(BaseAdapter):
    """OpenAI Responses API."""

    name = "gpt"
    MODEL = "gpt-5.4-mini"

    def _convert_tools(self, tools: list) -> list:
        return [
            {
                "type": "function",
                "name": t["name"],
                "description": t.get("description", ""),
                "parameters": t.get(
                    "input_schema", {"type": "object", "properties": {}}
                ),
                # Responses API defaults can enforce strict schemas
                # (all props required, additionalProperties=false); turn off.
                "strict": False,
            }
            for t in tools
        ]

    def complete(self, system, messages, tools) -> tuple:
        from openai import OpenAI

        client = OpenAI(api_key=self.get_key("openai_key"))

        kwargs = {
            "model": self.MODEL,
            "instructions": system,
            "input": build_responses_input(messages),
        }
        if tools:
            kwargs["tools"] = self._convert_tools(tools)

        resp = client.responses.create(**kwargs)

        tool_calls = []
        text = ""

        for item in resp.output:
            if item.type == "function_call":
                tool_calls.append(
                    ToolCall(
                        id=item.call_id,
                        name=item.name,
                        inputs=_parse_args(item.arguments),
                    )
                )
            elif item.type == "message":
                for block in item.content:
                    t = getattr(block, "text", None)
                    if t:
                        text += t

        stop = "tool_use" if tool_calls else "end_turn"
        return AgentResponse(text, tool_calls, stop), resp

    def format_tool_result(self, tool_call_id: str, content: str) -> dict:
        return {"type": "tool_result", "tool_use_id": tool_call_id, "content": content}

    def format_assistant_message(self, response: AgentResponse, raw) -> dict:
        text = ""
        calls = []
        for item in raw.output:
            if item.type == "function_call":
                calls.append((item.call_id, item.name, _parse_args(item.arguments)))
            elif item.type == "message":
                for block in item.content:
                    t = getattr(block, "text", None)
                    if t:
                        text += t
        return {"role": "assistant", "content": _assistant_parts(text, calls)}


class GeminiAdapter(BaseAdapter):
    name = "gemini"
    MODEL = "gemini-2.0-flash-lite"

    def _json_schema_type_to_gemini(self, json_type):
        from google.genai import types

        mapping = {
            "string": types.Type.STRING,
            "number": types.Type.NUMBER,
            "integer": types.Type.INTEGER,
            "boolean": types.Type.BOOLEAN,
            "array": types.Type.ARRAY,
            "object": types.Type.OBJECT,
        }
        if isinstance(json_type, list):
            for t in json_type:
                if t in mapping:
                    return mapping[t]
            return types.Type.STRING
        return mapping.get(json_type, types.Type.STRING)

    def _convert_schema(self, schema: dict):
        from google.genai import types

        json_type = schema.get("type", "string")
        gemini_type = self._json_schema_type_to_gemini(json_type)

        if gemini_type == types.Type.OBJECT:
            props = {}
            for k, v in schema.get("properties", {}).items():
                props[k] = self._convert_schema(v)
            return types.Schema(
                type=types.Type.OBJECT,
                properties=props,
                required=schema.get("required", []),
                description=schema.get("description", ""),
            )
        elif gemini_type == types.Type.ARRAY:
            items_schema = schema.get("items", {"type": "string"})
            return types.Schema(
                type=types.Type.ARRAY,
                items=self._convert_schema(items_schema),
                description=schema.get("description", ""),
            )
        else:
            return types.Schema(
                type=gemini_type,
                description=schema.get("description", ""),
            )

    def _convert_tools(self, tools: list) -> list:
        from google.genai import types

        declarations = []
        for t in tools:
            schema = t.get("input_schema", {})
            props = {}
            for k, v in schema.get("properties", {}).items():
                props[k] = self._convert_schema(v)
            declarations.append(
                types.FunctionDeclaration(
                    name=t["name"],
                    description=t.get("description", ""),
                    parameters=types.Schema(
                        type=types.Type.OBJECT,
                        properties=props,
                        required=schema.get("required", []),
                    ),
                )
            )
        return [types.Tool(function_declarations=declarations)]

    def _build_history(self, messages: list) -> list:
        from google.genai import types

        history = []
        for m in messages:
            role = "user" if m["role"] == "user" else "model"
            if isinstance(m["content"], str):
                history.append(
                    types.Content(
                        role=role, parts=[types.Part.from_text(text=m["content"])]
                    )
                )
            elif isinstance(m["content"], list):
                parts = []
                for block in m["content"]:
                    if isinstance(block, dict):
                        t = block.get("type", "")
                        if t == "tool_result":
                            parts.append(
                                types.Part.from_function_response(
                                    name=block.get("tool_use_id", "tool"),
                                    response={"result": block["content"]},
                                )
                            )
                        elif t == "tool_use":
                            parts.append(
                                types.Part.from_function_call(
                                    name=block["name"], args=block.get("input", {})
                                )
                            )
                        elif t == "text" and block.get("text"):
                            parts.append(types.Part.from_text(text=block["text"]))
                    elif hasattr(block, "function_call") and block.function_call:
                        parts.append(
                            types.Part.from_function_call(
                                name=block.function_call.name,
                                args=dict(block.function_call.args),
                            )
                        )
                    elif hasattr(block, "text") and block.text:
                        parts.append(types.Part.from_text(text=block.text))
                if parts:
                    history.append(types.Content(role=role, parts=parts))
        return history

    def complete(self, system, messages, tools) -> tuple:
        from google import genai
        from google.genai import types

        client = genai.Client(api_key=self.get_key("gemini_key"))
        gemini_tools = self._convert_tools(tools)
        # The whole history, including the newest message. The newest one used
        # to be sent as str(content), so after every tool call Gemini received
        # the tool results as a Python repr instead of a function response.
        contents = self._build_history(messages)

        resp = client.models.generate_content(
            model=self.MODEL,
            contents=contents,
            config=types.GenerateContentConfig(
                system_instruction=system,
                tools=gemini_tools,
            ),
        )

        tool_calls = []
        text = ""
        for part in resp.candidates[0].content.parts:
            fc = getattr(part, "function_call", None)
            if fc and getattr(fc, "name", None):
                tool_calls.append(
                    ToolCall(id=fc.name, name=fc.name, inputs=dict(fc.args))
                )
            elif getattr(part, "text", None):
                text += part.text

        stop = "tool_use" if tool_calls else "end_turn"
        return AgentResponse(text, tool_calls, stop), resp

    def format_tool_result(self, tool_call_id: str, content: str) -> dict:
        return {"type": "tool_result", "tool_use_id": tool_call_id, "content": content}

    def format_assistant_message(self, response: AgentResponse, raw) -> dict:
        return {
            "role": "model",
            "content": [p for p in raw.candidates[0].content.parts],
        }


class OllamaAdapter(BaseAdapter):
    name = "ollama"
    MODEL = "codellama"

    CODING_MODELS = [
        "codellama",
        "codellama:7b",
        "codellama:13b",
        "codellama:34b",
        "deepseek-coder",
        "deepseek-coder:6.7b",
        "deepseek-coder:33b",
        "deepseek-coder-v2",
        "deepseek-coder-v2:16b",
        "qwen2.5-coder",
        "qwen2.5-coder:7b",
        "qwen2.5-coder:14b",
        "qwen2.5-coder:32b",
        "codegemma",
        "codegemma:7b",
        "starcoder2",
        "starcoder2:3b",
        "starcoder2:7b",
        "starcoder2:15b",
        "magicoder",
        "wizard-coder",
        "phind-codellama",
        "phind-codellama:34b",
        "granite-code",
        "granite-code:8b",
        "granite-code:20b",
    ]

    def __init__(self, model: str = None, host: str = "http://localhost:11434"):
        self.MODEL = model or self.__class__.MODEL
        self.host = host

    def get_key(self, key_name: str) -> str:
        return ""

    @classmethod
    def list_local_models(cls, host: str = "http://localhost:11434") -> list[str]:
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
        return oai_chat_tools(tools)

    def _build_messages(self, system: str, messages: list) -> list:
        return build_chat_messages(
            system, messages, args_as_json=False, empty_content=""
        )

    def complete(self, system, messages, tools) -> tuple:
        import urllib.request

        msgs = self._build_messages(system, messages)
        body = {
            "model": self.MODEL,
            "messages": msgs,
            "stream": False,
        }
        if tools:
            body["tools"] = self._oai_tools(tools)
        payload = json.dumps(body).encode()

        req = urllib.request.Request(
            f"{self.host}/api/chat",
            data=payload,
            headers={"Content-Type": "application/json"},
            method="POST",
        )
        try:
            with urllib.request.urlopen(req, timeout=120) as resp:
                data = json.loads(resp.read().decode())
        except Exception as e:
            raise RuntimeError(
                f"Ollama error: {e}. Is Ollama running? Try: ollama serve"
            )

        msg = data.get("message", {})
        text = msg.get("content", "") or ""
        tool_calls = []

        for i, tc in enumerate(msg.get("tool_calls", []) or []):
            fn = tc.get("function", {})
            call_id = tc.get("id") or f"call_{fn.get('name', 'tool')}_{i}"
            tool_calls.append(
                ToolCall(
                    id=call_id,
                    name=fn.get("name", ""),
                    inputs=_parse_args(fn.get("arguments", {})),
                )
            )

        stop = "tool_use" if tool_calls else "end_turn"
        data["_tool_call_ids"] = [tc.id for tc in tool_calls]
        return AgentResponse(text, tool_calls, stop), data

    def format_tool_result(self, tool_call_id: str, content: str) -> dict:
        return {"type": "tool_result", "tool_use_id": tool_call_id, "content": content}

    def format_assistant_message(self, response: AgentResponse, raw) -> dict:
        msg = raw.get("message", {})
        calls = []
        for tc in response.tool_calls:
            calls.append((tc.id, tc.name, tc.inputs))
        return {
            "role": "assistant",
            "content": _assistant_parts(msg.get("content", "") or "", calls),
        }


class DeepSeekAdapter(BaseAdapter):
    name = "deepseek"
    MODEL = "deepseek-chat"

    def _oai_tools(self, tools: list) -> list:
        return oai_chat_tools(tools)

    def _build_messages(self, system: str, messages: list) -> list:
        return build_chat_messages(system, messages)

    def complete(self, system, messages, tools) -> tuple:
        from openai import OpenAI

        client = OpenAI(
            api_key=self.get_key("deepseek_key"),
            base_url="https://api.deepseek.com",
        )
        kwargs = {
            "model": self.MODEL,
            "messages": self._build_messages(system, messages),
        }
        if tools:
            kwargs["tools"] = self._oai_tools(tools)

        resp = client.chat.completions.create(**kwargs)
        msg = resp.choices[0].message
        text = msg.content or ""
        tool_calls = [
            ToolCall(
                id=tc.id,
                name=tc.function.name,
                inputs=_parse_args(tc.function.arguments),
            )
            for tc in (msg.tool_calls or [])
        ]

        stop = "tool_use" if tool_calls else "end_turn"
        return AgentResponse(text, tool_calls, stop), resp

    def format_tool_result(self, tool_call_id: str, content: str) -> dict:
        return {"type": "tool_result", "tool_use_id": tool_call_id, "content": content}

    def format_assistant_message(self, response: AgentResponse, raw) -> dict:
        msg = raw.choices[0].message
        calls = [
            (tc.id, tc.function.name, _parse_args(tc.function.arguments))
            for tc in (msg.tool_calls or [])
        ]
        return {
            "role": "assistant",
            "content": _assistant_parts(msg.content or "", calls),
        }


class MistralAdapter(BaseAdapter):
    name = "mistral"
    MODEL = "codestral-latest"

    def _oai_tools(self, tools: list) -> list:
        return oai_chat_tools(tools)

    def _build_messages(self, system: str, messages: list) -> list:
        return build_chat_messages(system, messages)

    def complete(self, system, messages, tools) -> tuple:
        import urllib.error
        import urllib.request

        body = {
            "model": self.MODEL,
            "messages": self._build_messages(system, messages),
        }
        if tools:
            body["tools"] = self._oai_tools(tools)
        payload = json.dumps(body).encode()

        req = urllib.request.Request(
            "https://api.mistral.ai/v1/chat/completions",
            data=payload,
            headers={
                "Content-Type": "application/json",
                "Authorization": f"Bearer {self.get_key('mistral_key')}",
            },
            method="POST",
        )
        try:
            with urllib.request.urlopen(req, timeout=60) as resp:
                data = json.loads(resp.read().decode())
        except urllib.error.HTTPError as e:
            detail = e.read().decode(errors="replace")
            raise RuntimeError(f"Mistral API error {e.code}: {detail}")

        msg = data["choices"][0]["message"]
        text = msg.get("content", "") or ""
        tool_calls = []
        for tc in msg.get("tool_calls") or []:
            fn = tc.get("function", {})
            tool_calls.append(
                ToolCall(
                    id=tc.get("id", ""),
                    name=fn.get("name", ""),
                    inputs=_parse_args(fn.get("arguments", "{}")),
                )
            )

        stop = "tool_use" if tool_calls else "end_turn"
        return AgentResponse(text, tool_calls, stop), data

    def format_tool_result(self, tool_call_id: str, content: str) -> dict:
        return {"type": "tool_result", "tool_use_id": tool_call_id, "content": content}

    def format_assistant_message(self, response: AgentResponse, raw) -> dict:
        msg = raw["choices"][0]["message"]
        calls = [
            (
                tc.get("id", ""),
                tc.get("function", {}).get("name", ""),
                _parse_args(tc.get("function", {}).get("arguments", "{}")),
            )
            for tc in (msg.get("tool_calls") or [])
        ]
        return {
            "role": "assistant",
            "content": _assistant_parts(msg.get("content", "") or "", calls),
        }


class OpenRouterFreeAdapter(BaseAdapter):
    name = "openrouter"

    _cached_free_models = []
    _last_fetched = 0
    CACHE_TTL = 300

    PRIMARY_MODEL = "poolside/laguna-s-2.1:free"

    def _get_active_free_models(self, client=None) -> list:
        now = time.time()
        if self._cached_free_models and (now - self._last_fetched < self.CACHE_TTL):
            return self._cached_free_models

        try:
            # OpenAI().get() is the SDK's internal request method (it needs
            # cast_to), so this call always raised and the fallback list below
            # was the only list ever used. Plain HTTP is enough here.
            import urllib.request

            with urllib.request.urlopen(
                "https://openrouter.ai/api/v1/models", timeout=10
            ) as resp:
                data = json.loads(resp.read().decode())

            free_models = [
                m["id"]
                for m in data.get("data", [])
                if m.get("id", "").endswith(":free")
            ]

            if free_models:
                primary = self.PRIMARY_MODEL
                if primary in free_models:
                    free_models.remove(primary)
                    free_models.insert(0, primary)

                self._cached_free_models = free_models
                self._last_fetched = now

        except Exception:
            pass

        # Never return an empty list: complete() would then have no model to
        # try and fail on message=None.
        return self._cached_free_models or [self.PRIMARY_MODEL]

    def _convert_tools(self, tools: list) -> list:
        return oai_chat_tools(tools)

    def complete(self, system, messages, tools) -> tuple:
        from openai import OpenAI
        import logging

        logger = logging.getLogger(__name__)
        client = OpenAI(
            base_url="https://openrouter.ai/api/v1",
            api_key=self.get_key("openrouter_key"),
        )

        available_models = self._get_active_free_models(client)

        kwargs = {
            "messages": build_chat_messages(system, messages),
        }
        if tools:
            kwargs["tools"] = self._convert_tools(tools)

        message = None
        resp = None

        for i, model in enumerate(available_models):
            try:
                kwargs["model"] = model
                resp = client.chat.completions.create(**kwargs)

                if not getattr(resp, "choices", None):
                    err = getattr(resp, "error", None)
                    raise RuntimeError(f"OpenRouter empty choices/error payload: {err}")

                message = resp.choices[0].message
                break

            except Exception as e:
                logger.warning(f"\033[31mFree model fallback triggered. {model}\033[0m")
                if i == len(available_models) - 1:
                    raise RuntimeError(
                        f"All dynamically fetched free models failed. Last error: {e}"
                    )

        text = message.content or ""
        tool_calls = [
            ToolCall(
                id=tc.id,
                name=tc.function.name,
                inputs=_parse_args(tc.function.arguments),
            )
            for tc in (message.tool_calls or [])
        ]

        stop = "tool_use" if tool_calls else "end_turn"
        return AgentResponse(text, tool_calls, stop), resp

    def format_tool_result(self, tool_call_id: str, content: str) -> dict:
        return {"type": "tool_result", "tool_use_id": tool_call_id, "content": content}

    def format_assistant_message(self, response: AgentResponse, raw) -> dict:
        message = raw.choices[0].message
        calls = [
            (tc.id, tc.function.name, _parse_args(tc.function.arguments))
            for tc in (message.tool_calls or [])
        ]
        return {
            "role": "assistant",
            "content": _assistant_parts(message.content or "", calls),
        }


ADAPTERS = {
    "claude": ClaudeAdapter,
    "gpt": GPTAdapter,
    "gemini": GeminiAdapter,
    "ollama": OllamaAdapter,
    "deepseek": DeepSeekAdapter,
    "mistral": MistralAdapter,
    "openrouter_free": OpenRouterFreeAdapter,
}


# Older TUI versions saved OpenRouter as "openrouter_gpt"; the adapter has
# always been registered as "openrouter_free", so those projects could not run.
MODEL_ALIASES = {"openrouter_gpt": "openrouter_free"}


def get_adapter(model: str) -> BaseAdapter:
    key = MODEL_ALIASES.get(model.lower(), model.lower())
    if key.startswith("ollama:"):
        model_name = key.split(":", 1)[1]
        return OllamaAdapter(model=model_name)
    if key not in ADAPTERS:
        raise ValueError(f"Unknown model {model!r}. Choose: {', '.join(ADAPTERS)}")
    return ADAPTERS[key]()
