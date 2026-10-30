#!/usr/bin/env python3
"""
strip_dashes.py

Walk a project directory and delete every em-dash (\u2014), en-dash (\u2013), and
box-drawing horizontal line character (\u2500 light, \u2501 heavy) found in text
files, leaving the rest of each line intact.

Usage:
    python3 strip_dashes.py [path]

If no path is given, it uses the current directory.
"""

import sys
from pathlib import Path

EM_DASH = "\u2014"
EN_DASH = "\u2013"
BOX_LIGHT = "\u2500"   # 
BOX_HEAVY = "\u2501"   # 

DASH_CHARS = (EM_DASH, EN_DASH, BOX_LIGHT, BOX_HEAVY)

SKIP_DIRS = {
    ".git", "__pycache__", "node_modules", ".venv", "venv",
    ".YAC", "dist", "build", ".mypy_cache", ".pytest_cache",
}

TEXT_EXTS = {
    ".py", ".js", ".ts", ".jsx", ".tsx", ".c", ".h", ".cpp", ".hpp",
    ".java", ".go", ".rs", ".rb", ".php", ".sh", ".bash",
    ".md", ".txt", ".rst", ".adoc",
    ".json", ".yaml", ".yml", ".toml", ".ini", ".cfg",
    ".html", ".css", ".xml",
}


def should_scan(path: Path) -> bool:
    if any(part in SKIP_DIRS for part in path.parts):
        return False
    return path.suffix.lower() in TEXT_EXTS


def strip_dashes_in_file(path: Path) -> int:
    try:
        text = path.read_text(encoding="utf-8")
    except (UnicodeDecodeError, OSError):
        return 0

    count = sum(text.count(c) for c in DASH_CHARS)
    if count == 0:
        return 0

    cleaned = text
    for c in DASH_CHARS:
        cleaned = cleaned.replace(c, "")
    path.write_text(cleaned, encoding="utf-8")
    return count


def main():
    root = Path(sys.argv[1]) if len(sys.argv) > 1 else Path(".")
    root = root.resolve()

    total_files = 0
    total_dashes = 0

    for path in root.rglob("*"):
        if not path.is_file() or not should_scan(path):
            continue
        removed = strip_dashes_in_file(path)
        if removed:
            total_files += 1
            total_dashes += removed
            print(f"{path.relative_to(root)}: removed {removed}")

    print(f"\nDone. {total_dashes} dash character(s) removed across {total_files} file(s).")


if __name__ == "__main__":
    main()