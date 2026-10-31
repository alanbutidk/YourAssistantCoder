import asyncio
import os
import sys
import tempfile
import threading
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent / "src"))

from pfps import PFPS


def _project():
    d = tempfile.mkdtemp()
    PFPS.RegisterProject(
        name="t",
        root=d,
        role="Editor",
        allow_print=False,
        track_files=["*"],
        ignore=["__pycache__", ".git"],
    )
    return d


class KeyNameTests(unittest.TestCase):
    def test_each_provider_has_its_own_key(self):
        import tui

        names = {m: tui.key_name(m) for m in
                 ("claude", "gpt", "gemini", "deepseek", "mistral", "openrouter_gpt")}
        self.assertEqual(len(set(names.values())), 6)

    def test_ollama_needs_no_key(self):
        import tui

        self.assertIsNone(tui.key_name("ollama"))
        self.assertIsNone(tui.key_name("ollama:qwen2.5-coder:7b"))


class ChatViewTests(unittest.TestCase):
    def setUp(self):
        self.old = os.getcwd()
        os.chdir(_project())

    def tearDown(self):
        os.chdir(self.old)

    def run_app(self, body):
        import tui

        async def main():
            app = tui.YACApp()
            async with app.run_test() as pilot:
                await pilot.pause()
                await body(app, pilot, tui)

        asyncio.run(main())

    def test_slash_commands_do_not_crash_on_ui_thread(self):
        async def body(app, pilot, tui):
            inp = app.query_one("#prompt-input")
            inp.focus()
            for text in ("/model", "/model nope", "/team"):
                inp.value = text
                await pilot.press("enter")
                await pilot.pause()
            self.assertTrue(app.is_running)

        self.run_app(body)

    def test_yes_run_executes_without_popup(self):
        async def body(app, pilot, tui):
            inp = app.query_one("#prompt-input")
            inp.focus()
            inp.value = "/yes-run echo hello-yes-run > out.txt"
            await pilot.press("enter")
            root = Path(app._project_root)
            for _ in range(60):
                await pilot.pause(0.05)
                if (root / "out.txt").exists() and not app.query_one(tui.ChatView)._busy:
                    break
            self.assertEqual(len(app.screen_stack), 1)  # no confirm modal
            self.assertIn("hello-yes-run", (root / "out.txt").read_text())

        self.run_app(body)

    def test_stray_q_does_not_quit_inside_a_project(self):
        async def body(app, pilot, tui):
            app.query_one("#chat-log").focus()
            await pilot.press("q", "i", "r")
            await pilot.pause()
            self.assertTrue(app.is_running)
            self.assertEqual(len(app.screen_stack), 1)  # no Init modal

        self.run_app(body)

    def test_ask_waits_for_the_modal_answer(self):
        async def body(app, pilot, tui):
            chat = app.query_one(tui.ChatView)
            result = {}

            def worker():
                result["ok"] = chat._ask(
                    lambda a, d: tui.ShellConfirmScreen("ls", "", a, d)
                )

            t = threading.Thread(target=worker)
            t.start()
            for _ in range(50):
                await pilot.pause(0.05)
                if len(app.screen_stack) > 1:
                    break
            self.assertGreater(len(app.screen_stack), 1)
            await pilot.click("#btn-allow-sh")
            for _ in range(50):
                await pilot.pause(0.05)
                if not t.is_alive():
                    break
            t.join(2)
            self.assertTrue(result.get("ok"))

        self.run_app(body)

    def test_edit_role_opens_for_every_saved_model(self):
        # Select raised InvalidSelectValueError for "ollama:<name>" and for the
        # old "openrouter_gpt" value, so Ctrl+E crashed for those users.
        async def body(app, pilot, tui):
            for model in ("ollama:qwen2.5-coder:7b", "openrouter_gpt", "claude"):
                app.push_screen(
                    tui.EditRoleScreen({"model": model, "role": "Editor"}, lambda m, r: None)
                )
                await pilot.pause()
                self.assertIn(app.screen.query_one("#er-model").value,
                              ("ollama", "openrouter_free", "claude"))
                app.pop_screen()
                await pilot.pause()

        self.run_app(body)

    def test_markdown_reply_keeps_its_styling(self):
        async def body(app, pilot, tui):
            chat = app.query_one(tui.ChatView)
            chat._log_md("# Title\n\nsome **bold** text")
            await pilot.pause()
            log = app.query_one("#chat-log")
            styles = [seg.style for line in log.lines for seg in line if seg.style]
            self.assertTrue(any(s.bold for s in styles))

        self.run_app(body)


if __name__ == "__main__":
    unittest.main()


class YesRunParseTests(unittest.TestCase):
    def test_parse(self):
        from commands import is_yes_run_usage, parse_yes_run_command

        self.assertEqual(parse_yes_run_command("/yes-run ls -la"), "ls -la")
        self.assertIsNone(parse_yes_run_command("/yes-run"))
        self.assertTrue(is_yes_run_usage("/yes-run"))
        self.assertIsNone(parse_yes_run_command("/yes-runner x"))
