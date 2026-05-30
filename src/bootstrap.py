"""
YourAssistantCoder - bootstrap.py
Installs dependencies at first run, then imports them normally.
"""

import sys
import os
import importlib

DEPS = [
    "anthropic",
    "openai",
    "google-genai",
    "keyring",
    "rich",
    "watchdog",
    "pwinput",
    "winotify;platform_system=='Windows'",
    "colorama",
    "httpx",
    "tenacity",
    "pydantic",
    "typing_extensions",
    "tqdm",
]

IMPORT_NAMES = {
    "google-genai": "google.genai",
    "winotify;platform_system=='Windows'": "winotify",
}

def _already_installed() -> bool:
    marker = os.path.join(os.path.expanduser("~"), ".yac_deps_installed")
    return os.path.exists(marker)

def _mark_installed():
    marker = os.path.join(os.path.expanduser("~"), ".yac_deps_installed")
    with open(marker, "w") as f:
        f.write("ok")

def _pkg_import_name(dep: str) -> str:
    return IMPORT_NAMES.get(dep, dep.split(";")[0].replace("-", "_"))

def ensure_deps():
    if _already_installed():
        return

    missing = []
    for dep in DEPS:
        name = _pkg_import_name(dep)
        try:
            importlib.import_module(name)
        except ImportError:
            missing.append(dep)

    if not missing:
        _mark_installed()
        return

    try:
        from rich.console import Console
        from rich.progress import Progress, SpinnerColumn, TextColumn
        c = Console()
        c.print(f"\n[bold cyan]YAC[/bold cyan] [dim]First run — installing {len(missing)} dependencies...[/dim]\n")
    except ImportError:
        print(f"\nYAC: First run — installing {len(missing)} dependencies...\n")
        c = None

    import pip
    for dep in missing:
        pkg = dep.split(";")[0]
        if c:
            c.print(f"  [dim]installing[/dim] [cyan]{pkg}[/cyan]...")
        else:
            print(f"  installing {pkg}...")
        pip.main(["install", pkg, "--quiet"])

    _mark_installed()

    if c:
        c.print(f"\n[bold green]✓[/bold green] [dim]Dependencies ready. Running yac...[/dim]\n")
    else:
        print("\nDependencies ready. Running yac...\n")
