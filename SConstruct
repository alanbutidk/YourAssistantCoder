import os
import glob
import subprocess
import sys

cache = os.path.join(os.path.expanduser('~'), 'AppData', 'Local', 'zig')
os.makedirs(cache, exist_ok=True)
os.environ['ZIG_GLOBAL_CACHE_DIR'] = cache
os.environ['LOCALAPPDATA'] = os.path.join(os.path.expanduser('~'), 'AppData', 'Local')

zig = subprocess.run(['where', 'zig'], capture_output=True, text=True).stdout.strip().split('\n')[0].strip()
if not zig:
    zig = 'zig'

# Find nuitka include path
nuitka_include = subprocess.run(
    [sys.executable, '-c', 'import nuitka; import os; print(os.path.join(os.path.dirname(nuitka.__file__), "build", "include"))'],
    capture_output=True, text=True
).stdout.strip()

if not nuitka_include or not os.path.exists(nuitka_include):
    # fallback: search common locations
    import site
    for sp in site.getsitepackages():
        candidate = os.path.join(sp, 'nuitka', 'build', 'include')
        if os.path.exists(candidate):
            nuitka_include = candidate
            break

print(f"Nuitka headers: {nuitka_include}")

env = Environment(
    ENV=os.environ,
    CCCOM=f'{zig} cc -I"{nuitka_include}" -O3 -march=native -ffast-math -funroll-loops -c -o $TARGET $SOURCE',
    LINKCOM=f'{zig} cc -O3 -o $TARGET $SOURCES',
)

c_files = list(set(glob.glob('*.c') + glob.glob('**/*.c', recursive=True)))
if not c_files:
    print("No .c files found."); sys.exit(1)

print(f"Found {len(c_files)} C files")
env.Program('yac.exe' if os.name == 'nt' else 'yac', c_files)
