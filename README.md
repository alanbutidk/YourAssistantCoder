# YourAssistantCoder (yac)

> A sandboxed, tracked, multi-model AI coding agent that lives inside your project and never leaves.

---

## Install

```bash
pip install -r requirements.txt
```

Or download the prebuilt `yac.exe` (Windows) / `yac` (Linux/Mac) from Releases.

---

## Quickstart

```bash
# Use the new TUI interface
yac

# Register your project
yac init myproject --path C:\myproject --model gpt

# Run the agent
yac run "refactor auth.py so it hashes the token" --model gpt

# View what the agent did
yac log

# Roll back a file
yac rollback auth.py

# Check project status
yac status
```

---

## Models

| Flag | Model | Key needed |
|---|---|---|
| `--model claude` | Claude Haiku | [console.anthropic.com](https://console.anthropic.com) |
| `--model gpt` | GPT-5.4-mini | [platform.openai.com](https://platform.openai.com/api-keys) |
| `--model gemini` | Gemini 2.0 Flash Lite | [aistudio.google.com](https://aistudio.google.com/apikey) |

API keys are stored securely in your system keyring - never in plain text.

---

## How it works

### PFPS (Python File Protection System)
Every project runs inside a sandbox. The agent cannot read or write files outside the project root. All file operations go through permission tokens with role-based expiry.

```
Owner  -> no expiry, you manually stop it
Editor -> token expires after 90 seconds
Viewer -> token expires after 60 seconds
```

### AMS (Action Monitoring System)
Every operation the agent performs is logged to `.PFPS/ams/session.log`. Suspicious patterns (delete → recreate, runaway rewrites) trigger a user prompt before continuing.

### File Tracking
Like git, PFPS tracks every insert and delete on every file. You can roll back any file to before the agent touched it.

### ErrorExecution
The agent can test code it writes. Output and errors feed back to it automatically. After 3 consecutive failures it prompts you to give it a "nap" - resetting its context and retrying fresh.

### Write Lock
If you open a file the agent is editing, the agent pauses automatically and waits for you to finish. Your edits are never overwritten.

---

## Build from source

**Windows:**
```bat
autobuild pyibuild/nuitkabuild
```

**Linux / Mac:**
```bash
autobuild pyibuild/nuitkabuild
```

Produces a single `dist/yac.exe` (or `dist/yac`) with no Python dependency.

Requires a PyInstaller/Nuitka install:

- Pyinstaller (```pip install pyinstaller```)
- Nuitka (```pip install nuitka```)

> Linux users notice: For nuitka, you'll need patchelf.

---

## Project structure

```
YourAssistantCoder/
├-- yac.py            # CLI entry point
├-- agent.py          # Agent loop, model dispatch, error handling
├-- model_router.py   # Claude / GPT / Gemini adapters
├-- pfps.py           # Sandbox, chunker, git-like tracker, write locks
├-- ams.py            # CheckOut, UseTool, SpecialUse, Working/WorkingStop
├-- error_execution.py # Live code execution with nap system
├-- permissions.py    # Token roles, expiry, scopes
├-- notify.py         # OS notifications (Windows toast, Linux wall/notify-send)
├-- console.py        # Rich terminal interface
├-- build.bat         # Windows Nuitka build
├-- build.sh          # Linux/Mac Nuitka build
└-- requirements.txt
```

---

## License

GPLv3 - build whatever you want with it, but keep it open-source.
