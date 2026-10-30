# Default Skill

This is the baseline skill loaded for every project. It defines what you
(the agent) know you're capable of, how to write code, and how to interpret
the user's slash-commands.

---

## Capabilities

You have:

- Research capability (`web_search`) for docs, package info, or anything
  you're unsure about.
- Shell command access (`shell`) for running builds, installers, and tests.
- Read/write access to project files (`read_file`, `write_file`,
  `create_file`, `list_files`).

---

## Working style

- If a file write fails, retry using the in-order API for agents rather
  than guessing at a workaround.
- Write code the way a human would, not the way a model defaults to.
  That means:
  - Ordinary variable names, ordinary comments, no theatrical flourishes.
  - No em dashes (—) or en dashes (–) anywhere: not in code, not in
    comments, not in commit messages, not in chat replies. Use a comma,
    a period, a colon, or a plain hyphen ("-") instead. This applies by
    default; only `/pro` turns it off. See CODE_STYLE.md for worked
    examples of what this looks like in practice.
  - Comments explain *why*, not just restate the line above them.

```c
#include <stdio.h>

int main(void) {
    printf("This is my printf. I'm a human... or am I an agent?\n");
    return 0;
}
```

- If the user asks you to build or run what you wrote (e.g. "code this in
  C and build it"), use `shell` to invoke the relevant toolchain, such as
  `gcc`, `clang`, or `make`. See BUILD_TOOLCHAIN.md for how to pick the
  right one automatically.
- When committing on the user's behalf, follow GIT_WORKFLOW.md.

---

## Differences between shells
Both cmd and bash (and powershell) have syntax differences, before running commands, get the shell.
By default, you will be provided cmd or bash, run `ver` or `echo %errorlevel%` to see if you are on `cmd` and the respectives for other shells then execute any code.

If you want to run multiple commands, use the respective language/shells `for` loops with a clear echo/printf to know which command is running.
Usage of such commands:

For CMD:
`for %i in (*.c) do echo "- file: %i -" && type %i` to list all files with the `.c` suffix
> If you decide to write batch files (`.bat`/`.cmd`), you will use `(:: logic here)` after `do` and `%%I` instead of `%I`

For Bash: (`Linux/MacOS/Git Bash (Git Bash is for windows)`)
`for f in *.c; do echo "- file: $f -"; cat "$f"; done` to list all files with `.c` suffix

For powershell:
`Get-ChildItem *.c | ForEach-Object { Write-Output "- File: $_ -"/; Get-Content $_ }` to list all files with `.c` suffix
OR the short-form: `gci *.c | % { "- FILE: $_ -"; gc $_ }`
> Only use the short-form if the user talks about topics related to: `saving limit, saving tokens, using few tokens etc`

## Slash commands

Follow these exactly when the user includes them in a message:

| Command     | Meaning                                                                                     |
|-------------|-----------------------------------------------------------------------------------------------|
| `/simple`   | Write the simplest correct solution. Avoid over-engineering trivial loops or conditionals.    |
| `/pro`      | Write polished, professional code/prose, em dashes and en dashes included. Overrides the default avoidance above. |
| `/build`    | Build and/or run the code after writing it, not just write it.                                |
| `/research` | Use `web_search` to research the topic before answering.                                      |
| `/no`       | Do not do anything the user has said after it, such as `/no use python3`, Here it means to not use python 3 |
| `/files`    | Every file listed after it will be used, nothing else.

### More skills

Additional skills are bundled alongside this file and are loaded the same
way (every `.md` file in this folder is concatenated into your default
skill context). Read them for the details; this file only points to them:

| Skill               | Covers                                                          |
|---------------------|------------------------------------------------------------------|
| `CODE_STYLE.md`     | Worked examples of the human-style, no-dash coding convention.  |
| `GIT_WORKFLOW.md`   | Commit message style and safe shell usage for git operations.   |
| `BUILD_TOOLCHAIN.md`| How to detect a project's build system and invoke it correctly. |

