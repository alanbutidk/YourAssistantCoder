"""
YourAssistantCoder (yac) - notify.py
OS-aware notification layer.
"""

import platform
import subprocess

OS = platform.system()   # "Windows" | "Linux" | "Darwin"


def _notify_windows(title: str, message: str, urgency: str = "normal"):
    try:
        from winotify import Notification, audio
        toast = Notification(
            app_id="YourAssistantCoder",
            title=title,
            msg=message,
            duration="long" if urgency == "critical" else "short",
        )
        if urgency == "critical":
            toast.set_audio(audio.Reminder, loop=False)
        toast.show()
    except ImportError:
        # Fallback if winotify not installed
        try:
            import ctypes
            ctypes.windll.user32.MessageBoxW(0, message, title, 0x40)
        except Exception:
            print(f"[PFPS NOTIFY] {title}: {message}")


def _notify_linux(title: str, message: str, urgency: str = "normal"):
    # Desktop notification
    try:
        subprocess.run(
            ["notify-send", "-u", urgency, "-a", "YourAssistantCoder", title, message],
            check=False,
            timeout=3,
        )
    except (FileNotFoundError, subprocess.TimeoutExpired):
        pass

    # System broadcast to ALL terminals (works headless/SSH too)
    try:
        broadcast = f"[YourAssistantCoder] {title}: {message}"
        subprocess.run(["wall", broadcast], check=False, timeout=3)
    except (FileNotFoundError, subprocess.TimeoutExpired):
        pass


def _notify_macos(title: str, message: str, urgency: str = "normal"):
    try:
        script = f'display notification "{message}" with title "{title}"'
        if urgency == "critical":
            script += ' sound name "Basso"'
        subprocess.run(["osascript", "-e", script], check=False, timeout=3)
    except (FileNotFoundError, subprocess.TimeoutExpired):
        print(f"[PFPS NOTIFY] {title}: {message}")


def PFPSNotify(title: str, message: str, urgency: str = "normal"):
    """
    Send an OS notification. urgency: 'low' | 'normal' | 'critical'
    Critical = stays until dismissed on Windows, urgent bell on Linux.
    """
    match OS:
        case "Windows": _notify_windows(title, message, urgency)
        case "Linux":   _notify_linux(title, message, urgency)
        case "Darwin":  _notify_macos(title, message, urgency)
        case _:
            print(f"[PFPS NOTIFY] {title}: {message}")


# --- Pre-built notification events ----------------------

def notify_token_expired(role: str, session_id: str):
    PFPSNotify(
        "YAC: Token Expired",
        f"{role} token for session {session_id} has expired - agent paused.",
        urgency="normal",
    )

def notify_op_limit(session_id: str, limit: int):
    PFPSNotify(
        "YAC: Session Cap Reached",
        f"{limit} op limit reached in session {session_id} - WorkingStop fired.",
        urgency="normal",
    )

def notify_contention(filename: str):
    PFPSNotify(
        "YAC: Agent Sleeping",
        f"User is editing {filename} - agent paused until you exit.",
        urgency="low",
    )

def notify_suspicious_chain(filename: str, chain: list):
    chain_str = " -> ".join(chain)
    PFPSNotify(
        "YAC: Warning",
        f"Suspicious op chain on {filename}: {chain_str}",
        urgency="critical",
    )

def notify_dirty_session(session_id: str):
    PFPSNotify(
        "YAC: Dirty Session",
        f"Session {session_id} exited uncleanly. Run 'yac status' to inspect.",
        urgency="normal",
    )

def notify_agent_resumed(filename: str):
    PFPSNotify(
        "YAC: Agent Resumed",
        f"User exited {filename} - agent is continuing.",
        urgency="low",
    )
