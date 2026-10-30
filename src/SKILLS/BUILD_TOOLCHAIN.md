# Build Toolchain Detection for YAC Agents

When the user asks you to build or run code (see `/build`, or phrases
like "build this" / "run it"), figure out the right toolchain from the
project rather than assuming one. Check in this order:

---

## Detection order

1. Look for an existing build file in the project root first:
   - `Makefile` or `makefile` -> `make`
   - `CMakeLists.txt` -> `cmake -S . -B build && cmake --build build`
   - `Cargo.toml` -> `cargo build`, `cargo run`
   - `pyproject.toml` / `setup.py` -> prefer `ppm` if the project or
     user's other conventions mention it, otherwise plain `pip`/`python`
   - `package.json` -> read the `scripts` section, use `npm run <script>`
     rather than guessing a raw node invocation
2. If none of those exist and it's a single C/C++ file or a small set
   of files with no build system, compile directly:
   - C: `gcc -Wall -Wextra -o <out> <file>.c` (fall back to `clang` if
     `gcc` is not on PATH)
   - C++: same, with `g++`/`clang++`
3. If the target platform matters (the code branches on Windows vs
   Unix, e.g. `#if defined(_WIN32)`), say so in your response rather
   than silently building for only one platform.

## Running the shell command

- Always pass a clear `reason` to `shell()` so the user understands why
  you are invoking the compiler or build tool before approving it.
- Do not chain unrelated shell commands into one call. Build, then
  test, then run, as separate `shell()` calls, so failures are
  attributable to a specific step.
- If a build fails, read the actual error output before retrying.
  Do not blindly re-run the same command hoping it passes.

## Tests

- If a `test/`, `tests/`, or `spec/` directory exists, or a test
  runner is configured (`pytest`, `cargo test`, `npm test`, `make
  test`), run it after a successful build when the user's request
  implies verifying the change works, not just compiling it.

## Output

- Report build/test results plainly: what command ran, whether it
  passed or failed, and the relevant error text if it failed. Do not
  editorialize with excitement or dashes, just state what happened.
