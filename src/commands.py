"""
YourAssistantCoder (yac) - commands.py

Single source of truth for slash-commands, shared by the Textual TUI (T)
and the Rich REPL, so both surfaces show the same list and behave the
same way. A slash-command is one of two things:

- A "prompt" command: typing it just becomes (or prefixes) the prompt
  sent to the agent, same as before (/simple, /pro, /build, /research,
  /diagnose).
- A "shell" command: typing it runs a shell command directly through the
  existing shell-approval flow, without going through the model at all
  (/git push, /git pull, /git clone, /git add).

MODELS is the same set model_router.get_adapter() understands; kept here
too so /model can list them without importing the whole router.
"""

from __future__ import annotations
from dataclasses import dataclass
from typing import Optional


MODELS = [
    ("claude",   "Claude (Anthropic)"),
    ("gpt",      "GPT (OpenAI)"),
    ("gemini",   "Gemini (Google)"),
    ("ollama",   "Ollama (Local)"),
    ("deepseek", "DeepSeek (Coder V3)"),
    ("mistral",  "Mistral (Codestral)"),
    ("openrouter_gpt", "OpenRouter (GPT)"),
]


DIAGNOSE_PROMPT = (
    "Diagnose the codebase. Read through the project's files and check for "
    "common bugs: off-by-one errors, unhandled exceptions, resource leaks "
    "(unclosed files/sockets), null/None dereferences, mismatched types, "
    "obvious race conditions, unused or shadowed variables, and dead code. "
    "Report what you find with file names and line context, in order of "
    "severity. Do not fix anything unless asked; report only."
)


OPTIMIZE_PROMPT = (
    "Optimize {scope}. Read the code first and look for real wins: bad "
    "algorithmic complexity, work repeated inside loops, redundant file or "
    "network reads, needless copies and allocations, calls that could be "
    "batched, slow startup imports. Do not change behavior or public "
    "function signatures. Prefer a few changes with a clear payoff over many "
    "tiny ones, and skip anything that only makes the code harder to read. "
    "If a test suite or a simple benchmark exists, run it with shell before "
    "and after and report the numbers, otherwise say the gain is an "
    "estimate. Apply the changes, then list each one with the file, what "
    "was slow and what you changed."
)


@dataclass
class SlashCommand:
    name: str          # without the leading slash, e.g. "simple"
    kind: str          # "prompt" | "shell" | "meta"
    description: str
    usage: str = ""    # shown in the dropdown/help, e.g. "/git push"


COMMANDS: list[SlashCommand] = [
    SlashCommand("simple",   "prompt", "Write the simplest correct solution.", "/simple"),
    SlashCommand("pro",      "prompt", "Polished output, em/en dashes allowed.", "/pro"),
    SlashCommand("build",    "prompt", "Build and/or run the code after writing it.", "/build"),
    SlashCommand("research", "prompt", "Use web_search to research first.", "/research"),
    SlashCommand("diagnose", "prompt", "Scan the whole codebase for common bugs.", "/diagnose"),
    SlashCommand("optimize", "prompt", "Find and apply safe speedups, with before/after numbers.", "/optimize [path]"),
    SlashCommand("model",    "meta",   "Show/switch which model you're talking to.", "/model"),
    SlashCommand("team",     "meta",   "Run the prompt with a team of agents (planner, coders, tester, reviewer).", "/team <prompt>"),
    SlashCommand("yes-run",  "shell",  "Run a shell command now, no confirmation popup.", "/yes-run <cmd>"),
    SlashCommand("git push", "shell",  "git push", "/git push"),
    SlashCommand("git pull", "shell",  "git pull", "/git pull"),
    SlashCommand("git clone", "shell", "git clone <url>", "/git clone <url>"),
    SlashCommand("git add",  "shell",  "git add <path...>", "/git add <path>"),
]


def match_commands(fragment: str) -> list[SlashCommand]:
    """Given text typed after '/', return commands whose name starts with
    it. Empty fragment returns everything, for the dropdown-on-'/' case."""
    fragment = fragment.lower().lstrip("/")
    if not fragment:
        return list(COMMANDS)
    return [c for c in COMMANDS if c.name.startswith(fragment)]


def parse_git_command(text: str) -> Optional[str]:
    """If text is a /git subcommand, return the raw git shell command to
    run, else None. Accepts anything after 'add'/'clone' as arguments,
    passed through as-is (the shell-approval popup shows it before it
    runs, so the user sees exactly what will execute)."""
    stripped = text.strip()
    if not stripped.startswith("/git"):
        return None
    rest = stripped[len("/git"):].strip()
    if not rest:
        return None
    parts = rest.split(None, 1)
    sub = parts[0]
    args = parts[1] if len(parts) > 1 else ""
    if sub not in ("push", "pull", "clone", "add"):
        return None
    cmd = f"git {sub}"
    if args:
        cmd += f" {args}"
    return cmd


def parse_yes_run_command(text: str) -> Optional[str]:
    """'/yes-run <cmd>' returns <cmd>, to be run with no confirmation.
    Anything else returns None. A bare '/yes-run' is is_yes_run_usage()."""
    stripped = text.strip()
    if not stripped.lower().startswith("/yes-run "):
        return None
    return stripped[len("/yes-run"):].strip() or None


def is_yes_run_usage(text: str) -> bool:
    return text.strip().lower() == "/yes-run"


def parse_team_command(text: str) -> Optional[str]:
    """'/team <prompt>' returns the prompt, anything else returns None."""
    stripped = text.strip()
    if not stripped.lower().startswith("/team "):
        return None
    return stripped[len("/team"):].strip() or None


def is_team_usage(text: str) -> bool:
    return text.strip().lower() == "/team"


def parse_optimize_command(text: str) -> Optional[str]:
    """'/optimize' or '/optimize <path or focus>' returns the full prompt,
    anything else returns None."""
    stripped = text.strip()
    lowered = stripped.lower()
    if lowered != "/optimize" and not lowered.startswith("/optimize "):
        return None
    target = stripped[len("/optimize"):].strip()
    return OPTIMIZE_PROMPT.format(
        scope=f"only this part of the project: {target}" if target else "the codebase"
    )


def is_diagnose_command(text: str) -> bool:
    return text.strip().lower() in ("/diagnose",)


def is_model_command(text: str) -> bool:
    return text.strip().lower().split(" ")[0] in ("/model",)


def parse_model_switch(text: str) -> Optional[str]:
    """If text is '/model <name>', return the model key if valid, else
    None. '/model' with no argument means "just show the list"."""
    stripped = text.strip()
    parts = stripped.split(None, 1)
    if len(parts) < 2:
        return None
    candidate = parts[1].strip().lower()
    valid = {key for key, _ in MODELS}
    return candidate if candidate in valid else None
