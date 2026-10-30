import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent / "src"))

import commands
from pfps import PFPS, SandboxViolation


class OptimizeCommandTests(unittest.TestCase):
    def test_bare(self):
        self.assertIn("the codebase", commands.parse_optimize_command("/optimize"))

    def test_target(self):
        prompt = commands.parse_optimize_command("/optimize src/parser.py")
        self.assertIn("only this part of the project: src/parser.py", prompt)

    def test_not_a_match(self):
        self.assertIsNone(commands.parse_optimize_command("/optimizer"))
        self.assertIsNone(commands.parse_optimize_command("optimize it"))

    def test_listed(self):
        self.assertIn("optimize", [c.name for c in commands.match_commands("opt")][0])


class SandboxTests(unittest.TestCase):
    def test_sibling_with_same_prefix(self):
        with tempfile.TemporaryDirectory() as base:
            root = Path(base, "proj")
            (root).mkdir()
            Path(base, "proj-evil").mkdir()
            pfps = PFPS.RegisterProject("t", str(root))
            with self.assertRaises(SandboxViolation):
                pfps.SandboxPath("../proj-evil/secret.txt")
            self.assertEqual(pfps.SandboxPath("a.py"), root.resolve() / "a.py")


if __name__ == "__main__":
    unittest.main()
