"""
YourAssistantCoder (yac) - console.py
Rich terminal interface.
"""

from rich.console import Console
from rich.theme import Theme
from rich.panel import Panel
from rich.text import Text
from rich import box

YAC_THEME = Theme({
    "yac.title":    "bold cyan",
    "yac.success":  "bold green",
    "yac.warn":     "bold yellow",
    "yac.error":    "bold red",
    "yac.dim":      "dim white",
    "yac.file":     "cyan",
    "yac.token":    "magenta",
    "yac.op":       "blue",
})

console = Console(theme=YAC_THEME)


def print_banner():
    banner = Text()
    banner.append("YourAssistantCoder", style="bold cyan")
    banner.append("  (yac)", style="dim")
    console.print(Panel(
        banner,
        subtitle="[dim]Sandboxed · Tracked · Yours[/dim]",
        box=box.DOUBLE_EDGE,
        style="cyan",
        padding=(0, 4),
    ))


def print_session_start(session_id: str, project: str, role: str):
    console.print(f"\n[yac.dim]Session[/yac.dim]  [yac.token]{session_id}[/yac.token]")
    console.print(f"[yac.dim]Project[/yac.dim]  [yac.file]{project}[/yac.file]")
    console.print(f"[yac.dim]Role   [/yac.dim]  [yac.op]{role}[/yac.op]\n")
