import os
import glob
import subprocess

# Force zig cache dir before anything runs
cache = os.path.join(os.path.expanduser('~'), 'AppData', 'Local', 'zig')
os.makedirs(cache, exist_ok=True)
os.environ['ZIG_GLOBAL_CACHE_DIR'] = cache
os.environ['LOCALAPPDATA'] = os.path.join(os.path.expanduser('~'), 'AppData', 'Local')

zig = subprocess.run(['where', 'zig'], capture_output=True, text=True).stdout.strip().split('\n')[0].strip()
if not zig:
    zig = 'zig'

env = Environment(
    CC=zig,
    CCFLAGS=['cc', '-O3', '-march=native', '-ffast-math', '-funroll-loops'],
    LINKFLAGS=['-O3'],
    ENV=os.environ,
    CCCOM='$CC cc $CCFLAGS -c -o $TARGET $SOURCE',
    LINKCOM='$CC cc $LINKFLAGS -o $TARGET $SOURCES',
)

c_files = list(set(glob.glob('*.c') + glob.glob('**/*.c', recursive=True)))

if not c_files:
    import sys
    print("No .c files found.")
    sys.exit(1)

print(f"Found {len(c_files)} C files")

if os.name == 'nt':
    env.Program('yac.exe', c_files)
else:
    env.Program('yac', c_files)
