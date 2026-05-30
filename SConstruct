import os
import sys
import subprocess

cache = os.path.join(os.path.expanduser('~'), 'AppData', 'Local', 'zig')
os.makedirs(cache, exist_ok=True)
os.environ['ZIG_GLOBAL_CACHE_DIR'] = cache
os.environ['LOCALAPPDATA'] = os.path.join(os.path.expanduser('~'), 'AppData', 'Local')

zig = subprocess.run(['where', 'zig'], capture_output=True, text=True).stdout.strip().split('\n')[0].strip()
if not zig:
    zig = 'zig'

cmd = [
    sys.executable, '-m', 'nuitka',
    '--standalone',
    '--onefile',
    '--lto=no',
    '--jobs=4',
    '--windows-console-mode=attach',
    '--output-filename=yac.exe',
    '--output-dir=../dist',
    '--assume-yes-for-downloads',
    '--clang',
    '--nofollow-import-to=grpc',
    '--nofollow-import-to=google.protobuf',
    '--nofollow-import-to=google.api_core',
    '--nofollow-import-to=google.auth',
    '--nofollow-import-to=google.cloud',
    '--nofollow-import-to=proto',
    '--nofollow-import-to=tkinter',
    '--nofollow-import-to=matplotlib',
    '--nofollow-import-to=numpy',
    '--nofollow-import-to=pandas',
    '--nofollow-import-to=scipy',
    '--nofollow-import-to=PIL',
    '--nofollow-import-to=torch',
    '--nofollow-import-to=tensorflow',
    '--nofollow-import-to=sklearn',
    '--nofollow-import-to=PyQt5',
    '--nofollow-import-to=PyQt6',
    '--nofollow-import-to=PySide2',
    '--nofollow-import-to=PySide6',
    '--nofollow-import-to=IPython',
    '--nofollow-import-to=pytest',
    '--nofollow-import-to=sphinx',
    '--nofollow-import-to=docutils',
    '--nofollow-import-to=django',
    '--nofollow-import-to=flask',
    '--nofollow-import-to=fastapi',
    '--nofollow-import-to=sqlalchemy',
    '--nofollow-import-to=boto3',
    '--nofollow-import-to=botocore',
    '--nofollow-import-to=azure',
    '--nofollow-import-to=gi',
    '--nofollow-import-to=wx',
    '--nofollow-import-to=setuptools',
    '--nofollow-import-to=distutils',
    '--nofollow-import-to=unittest',
    '--nofollow-import-to=test',
    '--nofollow-import-to=idlelib',
    '--nofollow-import-to=lib2to3',
    '--nofollow-import-to=ensurepip',
    '--nofollow-import-to=venv',
    '--nofollow-import-to=turtle',
    '--nofollow-import-to=turtledemo',
    '--nofollow-import-to=curses',
    '--nofollow-import-to=antigravity',
    '--nofollow-import-to=cgi',
    '--nofollow-import-to=cgitb',
    '--nofollow-import-to=imghdr',
    '--nofollow-import-to=mailbox',
    '--nofollow-import-to=nntplib',
    '--nofollow-import-to=sndhdr',
    '--nofollow-import-to=sunau',
    '--nofollow-import-to=telnetlib',
    '--nofollow-import-to=uu',
    '--nofollow-import-to=xdrlib',
    '--nofollow-import-to=xmlrpc',
    '--nofollow-import-to=email',
    '--nofollow-import-to=html',
    '--nofollow-import-to=ftplib',
    '--nofollow-import-to=imaplib',
    '--nofollow-import-to=smtplib',
    '--nofollow-import-to=poplib',
    '--nofollow-import-to=winsound',
    '--nofollow-import-to=winreg',
    '--nofollow-import-to=msilib',
    '--nofollow-import-to=msvcrt',
    '--nofollow-import-to=nis',
    '--nofollow-import-to=ossaudiodev',
    '--nofollow-import-to=spwd',
    '--nofollow-import-to=crypt',
    '--nofollow-import-to=aifc',
    '--nofollow-import-to=chunk',
    '--nofollow-import-to=pipes',
    '--nofollow-import-to=pty',
    '--nofollow-import-to=tty',
    '--nofollow-import-to=wave',
    '--nofollow-import-to=fileinput',
    '--nofollow-import-to=formatter',
    '--nofollow-import-to=colorsys',
    'yac.py',
]

print("Running Nuitka...")
env_copy = os.environ.copy()
env_copy['CC'] = zig
env_copy['CXX'] = zig

result = subprocess.run(cmd, cwd='src', env=env_copy)
if result.returncode != 0:
    print("Nuitka build failed.")
    sys.exit(result.returncode)

print("Done! dist/yac.exe ready.")
