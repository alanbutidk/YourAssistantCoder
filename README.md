# YourAssistantCoder (yac)

> A sandboxed, tracked, multi-model AI coding agent that lives inside your project and never leaves.

---

## Install

```bash
pip install -r requirements.txt
```

> Currently NO binaries are available to download.

---

## Quickstart

```bash
# Use the TUI interface
yac

# Register your project
yac init myproject --path C:\myproject --model gpt

# Run the agent once
yac run "refactor auth.py so it hashes the token" --model gpt

# Let a team of agents plan it and split the work
yac run "add a login page with tests" --team

# Or talk to it interactively (Rich REPL, same slash-commands as the TUI)
yac chat

# View what the agent did
yac log

# Roll back a file
yac rollback auth.py

# Check project status
yac status
```

---

## Slash-commands

Available in both the Textual TUI and `yac chat`:

| Command | What it does |
|---|---|
| `/simple` | Write the simplest correct solution. |
| `/pro` | Polished output, em/en dashes allowed. |
| `/build` | Build and/or run the code after writing it. |
| `/research` | Use web search to research first. |
| `/diagnose` | Scan the whole codebase for common bugs. |
| `/optimize [path]` | Find and apply safe speedups, reporting before/after numbers when it can measure them. |
| `/model` | Show or switch which model you're talking to. |
| `/team <prompt>` | Run the prompt with the multi-agent orchestrator (see below). |
| `/git push` \| `/git pull` \| `/git clone <url>` \| `/git add <path>` | Runs git directly through the shell-approval flow, no model round-trip. |

In the TUI, typing `/` opens a filterable dropdown of these. In `yac chat`, typing `/` alone prints the same list as a table.

---

## Models

| Flag | Model | Key needed |
|---|---|---|
| `--model claude` | Claude (Anthropic) | [console.anthropic.com](https://console.anthropic.com) |
| `--model gpt` | GPT-5.4-mini | [platform.openai.com](https://platform.openai.com/api-keys) |
| `--model gemini` | Gemini 2.0 Flash Lite | [aistudio.google.com](https://aistudio.google.com/apikey) |
| `--model ollama` | Any local Ollama model | none, runs locally |
| `--model deepseek` | DeepSeek-V3 / R1 | [platform.deepseek.com](https://platform.deepseek.com) |
| `--model mistral` | Codestral | [console.mistral.ai](https://console.mistral.ai) |

API keys are stored securely in your system keyring, never in plain text. Switch model and role per-project with `yac edit-role MODEL ROLE`.

---

## How it works

### PFPS (Python File Protection System)
Every project runs inside a sandbox. The agent cannot read or write files outside the project root. All file operations go through permission tokens with role-based expiry.

```
Owner  -> no expiry, you manually stop it
Editor -> token expires after 10 minutes
Viewer -> token expires after 5 minutes
```

### AMS (Action Monitoring System)
Every operation the agent performs is logged to `.YAC/.PFPS/ams/session.log`. Suspicious patterns (delete then recreate, runaway rewrites) trigger a user prompt before continuing.

### File Tracking
Like git, PFPS tracks every insert and delete on every file. You can roll back any file to before the agent touched it.

### Skills
`.YAC/.SKILLS` holds the agent's default behavioral guide, copied in full from `src/SKILLS/` when you run `yac init`. This is where working style, coding conventions, git workflow, and build-toolchain detection live, and it's meant to be edited per-project. Ships with:

| Skill | Covers |
|---|---|
| `DEFAULT.md` | Capabilities, slash-commands, working style. Human-written code, no em/en dashes by default. |
| `CODE_STYLE.md` | Worked examples of that coding convention. |
| `GIT_WORKFLOW.md` | Commit message style, safe shell usage for git operations. |
| `BUILD_TOOLCHAIN.md` | How to detect a project's build system and invoke it correctly. |

### Prompt injection
Files, web results, shell output, saved memory and other agents' reports are wrapped in `<<untrusted:...>>` markers with a random per-session id, and every system prompt tells the agent that text inside them is data and never instructions. Shell approval prompts escape the command and show control and invisible characters, so what you approve is what runs. Notes saved with `remember` are capped to one short line. `.YAC` (skills, memory, history, config) is not reachable by the agent. None of this makes injection impossible, so keep approving shell commands only when you recognise them.

### Team mode (orchestrator)
`yac run "..." --team`, or `/team <prompt>` in the TUI and `yac chat`, runs the request with several agents instead of one.

1. A **planner** reads the project and submits a task graph: who does what, which files each coder may write, and what depends on what. A small request becomes a single task.
2. Tasks run as a **dependency graph**. Independent tasks run at the same time (3 by default), but two tasks whose file scopes overlap never run together.
3. Each task gets a **role** with its own tools:

| Role | Can do |
|---|---|
| `researcher` | read files, web search. Writes nothing. |
| `architect` | read files, web search. Settles file layout, interfaces and signatures before coding starts. Writes nothing. |
| `coder` | read, write and create files inside its file scope, shell, web search. |
| `debugger` | like `coder`, but reproduces the bug first, fixes the root cause and proves the fix. |
| `optimizer` | like `coder`, but measures before and after and reports the numbers. |
| `documenter` | read files, write docs inside its file scope. No shell. |
| `tester` | read files, shell. Writes nothing. |
| `reviewer` | read files. Writes nothing. |
| `security` | read files. Looks for injection, unsafe paths, secrets and dangerous defaults. Writes nothing. |

4. Agents hand work on through their `report()`, which the next tasks receive, and through a **shared board** (`note()` / `board()`) for things like signatures and decisions.
5. If a tester, reviewer or security agent reports `changes_requested`, the orchestrator runs one **fix round**: a coder with the scope of the work being checked fixes exactly the findings, then the check runs again.

Writes outside a coder's scope are refused, shell commands still go through the usual approval prompt (one at a time), and a task that crashes is retried once before its dependents are skipped. Every worker gets the project's `.YAC/.SKILLS`, so your code style rules apply to all of them.

Optional keys in `.YAC/.PFPS/sandbox.json`:

```json
{
  "max_agents": 3,
  "max_fix_rounds": 1,
  "agent_models": { "planner": "claude", "coder": "gpt", "reviewer": "claude" }
}
```

`agent_models` maps a role to any model from the table above, anything not listed uses the project's model.

### Memory and history
Two more folders under `.YAC` give the agent continuity across sessions:

- `.AI_HIST` is written automatically at the end of every session, a short log of what was asked and what got done. The agent reads recent entries back in so it knows what "we" were doing if you refer back to earlier work.
- `.AI_MEM` is agent-curated, not automatic. The agent writes to it only when you ask it to remember something, or when it decides a project fact is worth keeping (a decision, a convention, something to avoid), and reads it back at the start of every session.

### ErrorExecution
The agent can test code it writes. Output and errors feed back to it automatically. After 3 consecutive failures it prompts you to give it a "nap", resetting its context and retrying fresh.

### Write Lock
If you open a file the agent is editing, the agent pauses automatically and waits for you to finish. Your edits are never overwritten.

---

## Project structure

```
YourAssistantCoder/
├-- yac.py            # CLI entry point (init, run, chat, log, status, rollback, edit-role)
├-- agent.py          # Agent loop, model dispatch, tool dispatch, memory/history wiring
├-- model_router.py   # Claude / GPT / Gemini / Ollama / DeepSeek / Mistral adapters
├-- commands.py       # Slash-command definitions shared by the TUI and yac chat
├-- pfps.py           # Sandbox, chunker, git-like tracker, write locks, skills, memory, history
├-- ams.py            # CheckOut, UseTool, SpecialUse, Working/WorkingStop
├-- orchestrator.py  # Team mode: planner, task graph scheduler, role workers, shared board
├-- error_execution.py # Live code execution with nap system
├-- permissions.py    # Token roles, expiry, scopes
├-- notify.py         # OS notifications (Windows toast, Linux wall/notify-send)
├-- console.py        # Rich terminal interface
├-- tui.py            # Textual TUI
├-- SKILLS/           # Bundled default skills, copied into every new project
└-- requirements.txt
```

---

## TUI

```YourAssistantCoder``` has a TUI interface made with ```Textual```. Init a project, talk with your agent like a chatbot interface.

Heres some reference images to see the TUI in action:

<img width="1366" height="727" alt="InitTime" src="https://github.com/user-attachments/assets/a6a1a005-f1aa-412e-a59f-9cd8c44f6833" />

<img width="1366" height="728" alt="InitSelect" src="https://github.com/user-attachments/assets/b1869668-5586-4563-96f1-bfaf9439a8b0" />

<img width="1366" height="727" alt="TalkInterface" src="https://github.com/user-attachments/assets/950d4590-96a2-422b-ba41-e10b3924f187" />

## Tests

```bash
python -m unittest discover -s tests
```

## License

GPLv3 - build whatever you want with it, but keep it open-source.
