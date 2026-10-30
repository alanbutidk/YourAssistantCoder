import io
import sys
import tempfile
import threading
import time
import unittest
from pathlib import Path
from types import SimpleNamespace

sys.path.insert(0, str(Path(__file__).resolve().parent.parent / "src"))

from rich.console import Console

import agent
import orchestrator
from model_router import AgentResponse, ToolCall
from orchestrator import (
    Orchestrator,
    PlanError,
    Task,
    in_scope,
    parse_plan,
    scopes_overlap,
)
from pfps import PFPS


def task(tid, role="coder", files=None, deps=None):
    return {
        "id": tid,
        "title": f"title {tid}",
        "role": role,
        "instructions": f"do {tid}",
        "files": files if files is not None else (["*.py"] if role == "coder" else []),
        "depends_on": deps or [],
    }


class ParsePlanTests(unittest.TestCase):
    def test_valid(self):
        tasks = parse_plan([task("t1"), task("t2", "reviewer", deps=["t1"])])
        self.assertEqual([t.id for t in tasks], ["t1", "t2"])
        self.assertEqual(tasks[1].files, [])

    def test_empty(self):
        with self.assertRaises(PlanError):
            parse_plan([])

    def test_too_many(self):
        with self.assertRaises(PlanError):
            parse_plan([task(f"t{i}") for i in range(5)], max_tasks=4)

    def test_duplicate_id(self):
        with self.assertRaises(PlanError):
            parse_plan([task("t1"), task("t1")])

    def test_unknown_dep(self):
        with self.assertRaises(PlanError):
            parse_plan([task("t1", deps=["nope"])])

    def test_self_dep(self):
        with self.assertRaises(PlanError):
            parse_plan([task("t1", deps=["t1"])])

    def test_cycle(self):
        with self.assertRaises(PlanError):
            parse_plan([task("t1", deps=["t2"]), task("t2", deps=["t1"])])

    def test_bad_role(self):
        with self.assertRaises(PlanError):
            parse_plan([task("t1", role="boss")])

    def test_coder_needs_files(self):
        with self.assertRaises(PlanError):
            parse_plan([task("t1", files=[])])

    def test_bad_scopes(self):
        for bad in ("../x.py", "/etc/passwd", ".YAC/x", "C:/x.py"):
            with self.assertRaises(PlanError, msg=bad):
                parse_plan([task("t1", files=[bad])])


class ScopeTests(unittest.TestCase):
    def test_in_scope(self):
        self.assertTrue(in_scope("src/a.py", ["src/*"]))
        self.assertTrue(in_scope("./a.py", ["a.py"]))
        self.assertFalse(in_scope("b.py", ["a.py"]))
        self.assertFalse(in_scope("../a.py", ["*"]))
        self.assertFalse(in_scope(".YAC/x", ["*"]))

    def test_overlap(self):
        self.assertTrue(scopes_overlap(["a.py"], ["a.py"]))
        self.assertTrue(scopes_overlap(["src/*"], ["src/a.py"]))
        self.assertFalse(scopes_overlap(["a.py"], ["b.py"]))
        self.assertFalse(scopes_overlap(["src/*"], ["web/*"]))


class SchedulerTests(unittest.TestCase):
    class Probe(Orchestrator):
        def __init__(self, fail=()):
            super().__init__(SimpleNamespace(config={}), "p", "claude")
            self.fail = set(fail)
            self.lock = threading.Lock()
            self.live = 0
            self.peak = 0
            self.order = []

        def _run_task(self, t):
            with self.lock:
                self.live += 1
                self.peak = max(self.peak, self.live)
                self.order.append(("start", t.id))
            time.sleep(0.05)
            with self.lock:
                self.live -= 1
                self.order.append(("end", t.id))
            if t.id in self.fail:
                return agent.LoopResult(error="boom", reason="error"), {}
            return agent.LoopResult(text="ok", reason="end_turn"), {}

    def setUp(self):
        self.old = agent.console
        agent.console = Console(file=io.StringIO())
        Orchestrator.BACKOFF = 0

    def tearDown(self):
        agent.console = self.old

    def test_disjoint_run_together(self):
        o = self.Probe()
        o.execute(parse_plan([task("a", files=["a.py"]), task("b", files=["b.py"])]))
        self.assertEqual(o.peak, 2)

    def test_overlap_runs_one_at_a_time(self):
        o = self.Probe()
        o.execute(parse_plan([task("a", files=["x/*"]), task("b", files=["x/y.py"])]))
        self.assertEqual(o.peak, 1)
        self.assertTrue(all(t.status == "done" for t in o.tasks))

    def test_dependency_order(self):
        o = self.Probe()
        o.execute(parse_plan([task("a", files=["a.py"]), task("r", "reviewer", deps=["a"])]))
        self.assertLess(o.order.index(("end", "a")), o.order.index(("start", "r")))

    def test_failure_skips_dependents(self):
        o = self.Probe(fail={"a"})
        o.execute(
            parse_plan(
                [
                    task("a", files=["a.py"]),
                    task("b", files=["b.py"]),
                    task("r", "reviewer", deps=["a"]),
                ]
            )
        )
        status = {t.id: t.status for t in o.tasks}
        self.assertEqual(status, {"a": "failed", "b": "done", "r": "skipped"})
        self.assertEqual(o.tasks[0].attempts, Orchestrator.RETRIES)

    def test_max_agents(self):
        o = self.Probe()
        o.max_agents = 1
        o.execute(parse_plan([task("a", files=["a.py"]), task("b", files=["b.py"])]))
        self.assertEqual(o.peak, 1)


class FakeAdapter:
    MODEL = "fake"

    def __init__(self):
        self.lock = threading.Lock()
        self.live = 0
        self.peak = 0
        self.denied = []
        self.plan_errors = []

    def format_tool_result(self, call_id, content):
        return {"type": "tool_result", "tool_use_id": call_id, "content": content}

    def format_assistant_message(self, response, raw):
        return {"role": "assistant", "content": response.text}

    def _last_result(self, messages):
        last = messages[-1]["content"]
        if isinstance(last, list) and last:
            return str(last[0].get("content", ""))
        return ""

    def complete(self, system, messages, tools):
        turn = sum(1 for m in messages if m["role"] == "assistant")
        with self.lock:
            self.live += 1
            self.peak = max(self.peak, self.live)
        time.sleep(0.03)
        try:
            return self._decide(system, messages, turn)
        finally:
            with self.lock:
                self.live -= 1

    def _call(self, name, **inputs):
        return AgentResponse("", [ToolCall(f"c{time.time_ns()}", name, inputs)], "tool_use")

    def _decide(self, system, messages, turn):
        if "planning agent" in system:
            if turn == 0:
                bad = [task("t1", files=["a.py"], deps=["t2"]), task("t2", files=["b.py"], deps=["t1"])]
                return self._call("submit_plan", tasks=bad)
            if turn == 1:
                self.plan_errors.append(self._last_result(messages))
                good = [
                    task("t1", files=["a.py"]),
                    task("t2", files=["b.py"]),
                    task("t3", "reviewer", deps=["t1", "t2"]),
                ]
                return self._call("submit_plan", summary="two files then review", tasks=good)
            return AgentResponse("done", [], "end_turn")

        tag = system.split("You are ", 1)[1].split(",", 1)[0]
        if tag == "coder:t1":
            if turn == 0:
                return self._call("write_file", filename="b.py", content="stolen")
            if turn == 1:
                self.denied.append(self._last_result(messages))
                return self._call("create_file", filename="a.py", content="print('a')\n")
            return self._call("report", status="ok", summary="made a.py")
        if tag == "coder:t2":
            if turn == 0:
                return self._call("create_file", filename="b.py", content="print('b')\n")
            return self._call("report", status="ok", summary="made b.py")
        if tag == "reviewer:t3":
            if turn == 0:
                return self._call("read_file", filename="a.py")
            return self._call("report", status="changes_requested", summary="a.py needs a docstring")
        if tag == "coder:fix1":
            if turn == 0:
                return self._call("write_file", filename="a.py", content='"""a"""\nprint(\'a\')\n')
            return self._call("report", status="ok", summary="added docstring")
        if tag == "reviewer:t3r1":
            return self._call("report", status="ok", summary="looks good")
        return AgentResponse("unexpected " + tag, [], "end_turn")


class EndToEndTests(unittest.TestCase):
    def setUp(self):
        self.old = agent.console
        agent.console = Console(file=io.StringIO())
        self.tmp = tempfile.TemporaryDirectory()
        self.pfps = PFPS.RegisterProject("t", self.tmp.name)
        self.fake = FakeAdapter()
        self.orig_get = orchestrator.get_adapter
        orchestrator.get_adapter = lambda model: self.fake

    def tearDown(self):
        orchestrator.get_adapter = self.orig_get
        agent.console = self.old
        self.tmp.cleanup()

    def test_full_run(self):
        orch = Orchestrator(self.pfps, "make a.py and b.py", "claude")
        self.pfps.start_session(orch.session_id)
        message = orch.run()

        root = Path(self.tmp.name)
        self.assertIn("'a'", (root / "a.py").read_text())
        self.assertIn('"""a"""', (root / "a.py").read_text())
        self.assertEqual((root / "b.py").read_text(), "print('b')\n")

        self.assertIn("INVALID PLAN", self.fake.plan_errors[0])
        self.assertIn("cycle", self.fake.plan_errors[0])
        self.assertTrue(self.fake.denied[0].startswith("DENIED"))

        status = {t.id: t.status for t in orch.tasks}
        self.assertEqual(
            status,
            {"t1": "done", "t2": "done", "t3": "done", "fix1": "done", "t3r1": "done"},
        )
        self.assertGreaterEqual(self.fake.peak, 2)
        self.assertIn("Team report", message)

    def test_run_agent_team_flag(self):
        called = {}
        orig = orchestrator.run_team
        orchestrator.run_team = lambda prompt, pfps, role="Editor", model="claude": called.update(
            prompt=prompt, model=model
        )
        try:
            agent.run_agent("x", self.pfps, model="gpt", team=True)
        finally:
            orchestrator.run_team = orig
        self.assertEqual(called, {"prompt": "x", "model": "gpt"})

class ScopeFixTests(unittest.TestCase):
    def test_glob_vs_dir_overlap(self):
        # fnmatch alone says these do not overlap, but src/a.py is in both
        self.assertTrue(scopes_overlap(["*.py"], ["src/*"]))

    def test_disjoint_scopes_stay_parallel(self):
        self.assertFalse(scopes_overlap(["src/a.py"], ["src/b.py"]))
        self.assertFalse(scopes_overlap(["src/*"], ["tests/*"]))

    def test_plain_dir_overlaps_its_files(self):
        self.assertTrue(scopes_overlap(["src"], ["src/a.py"]))
        self.assertFalse(scopes_overlap(["src"], ["srcs/a.py"]))

    def test_dir_scope_covers_children(self):
        self.assertTrue(in_scope("src/a/b.py", ["src"]))
        self.assertTrue(in_scope("src/a/b.py", ["src/"]))
        self.assertFalse(in_scope("srcs/b.py", ["src"]))

    def test_trailing_slash_scope_normalised_in_plan(self):
        tasks = parse_plan([task("t1", files=["src/"])])
        self.assertEqual(tasks[0].files, ["src/*"])

    def test_duplicate_dependency_is_not_a_cycle(self):
        tasks = parse_plan([task("t1"), task("t2", "reviewer", deps=["t1", "t1"])])
        self.assertEqual(tasks[1].depends_on, ["t1"])



if __name__ == "__main__":
    unittest.main()
