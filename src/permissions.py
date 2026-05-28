"""
YourAssistantCoder (yac) - permissions.py
Token system, roles, scopes.
"""

import time
import uuid
from dataclasses import dataclass, field
from typing import Optional


# --- Role Expiry ------------------------------------------------------------

class RoleExpiry:
    Owner  = None   # User manually deactivates
    Editor = 90     # 1.5 minutes
    Viewer = 60     # 1 minute


# --- Permission Levels ------------------------------------------------------

class Permissions:
    Read            = "Read"
    ReadWrite       = "Read+Write"
    ReadWriteDelete = "Read+Write+Delete"
    SpecialUse      = "SpecialUse"


WRITE_TOOLS  = {"write_chunk", "append_chunk", "create_file"}
DELETE_TOOLS = {"delete_file"}
READ_TOOLS   = {"read_chunk", "list_files"}


# --- Allow Token ------------------------------------------------------------

@dataclass
class AllowToken:
    level:      str
    role:       str
    session_id: str
    issued_at:  float         = field(default_factory=time.time)
    expires_in: Optional[int] = None   # seconds, None = Owner (no expiry)
    valid:      bool          = True
    files:      list          = field(default_factory=list)  # scoped files, [] = all
    _sleep_debt: float        = field(default=0.0, repr=False)

    @property
    def expired(self) -> bool:
        if not self.valid:
            return True
        if self.expires_in is None:
            return False
        elapsed = (time.time() - self.issued_at) - self._sleep_debt
        return elapsed >= self.expires_in

    def extend(self, seconds: float):
        """Extend token lifetime - used when agent sleeps due to contention."""
        self._sleep_debt += seconds

    def revoke(self):
        self.valid = False

    def can_use_tool(self, tool: str) -> bool:
        if self.expired:
            return False
        if tool in READ_TOOLS:
            return True
        if tool in WRITE_TOOLS:
            return self.level in (Permissions.ReadWrite, Permissions.ReadWriteDelete)
        if tool in DELETE_TOOLS:
            return self.level == Permissions.ReadWriteDelete
        return False

    def can_touch_file(self, filename: str) -> bool:
        if not self.files:
            return True   # no scope = all files
        return filename in self.files


# --- Token Scope ------------------------------------------------------------

def build_token_scope(role: str, files: list = None) -> dict:
    expiry = getattr(RoleExpiry, role, RoleExpiry.Viewer)
    level_map = {
        "Owner":  Permissions.ReadWriteDelete,
        "Editor": Permissions.ReadWrite,
        "Viewer": Permissions.Read,
    }
    return {
        "role":       role,
        "files":      files or [],
        "ops":        level_map.get(role, Permissions.Read),
        "expires_in": expiry,
    }


def issue_token(role: str, session_id: str, files: list = None) -> AllowToken:
    scope = build_token_scope(role, files)
    return AllowToken(
        level      = scope["ops"],
        role       = role,
        session_id = session_id,
        expires_in = scope["expires_in"],
        files      = scope["files"],
    )
