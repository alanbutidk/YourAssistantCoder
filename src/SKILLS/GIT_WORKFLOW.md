# Git Workflow for YAC Agents

You have `shell` access, which means you can run git directly. Follow
these rules whenever a task involves git.

---

## Before you touch git

- Never run `git push`, `git reset --hard`, `git checkout -- <file>`,
  or anything destructive without the user asking for it explicitly in
  that message. Staging and committing locally is fine to do
  proactively when the user asks you to "commit" or "save progress".
  Rewriting history or discarding work is not.
- Run `git status` first so you know what you are about to stage. Do
  not blindly `git add .` in a project with files outside your task's
  scope; add the specific files you changed.

## Commit messages

- Written like a human wrote them: short, plain, present tense summary
  line first ("fix off by one in parser", not "Fixed the off-by-one
  error in the parser."). No em dashes or en dashes, same rule as
  everywhere else. Use a period or a colon if you need a pause.
- One logical change per commit where practical. Do not squash an
  unrelated refactor and a bug fix into one commit unless the user
  asked for a single commit.
- No AI-generated signature lines, no "Generated with", no emoji,
  unless the user's own commit history already uses them.

## Branches

- Do not create or switch branches unless asked. If the user's request
  implies a branch (e.g. "start a feature branch for X"), name it
  something short and descriptive in kebab-case.

## Merge conflicts

- If a shell git command surfaces a conflict, stop and report it to
  the user with `say()` rather than trying to resolve it silently by
  picking a side. Show which files conflicted.

## Clones

- When cloning a repo the user names, clone into a clearly named
  directory, not directly flattening it into the project root, unless
  the user's project root is meant to be empty and receive the clone.
