import os
import glob
import subprocess

# Find zig path
zig = subprocess.run(['where', 'zig'], capture_output=True, text=True).stdout.strip().split('\n')[0].strip()
if not zig:
    zig = 'zig'

env = Environment(
    CC=f'{zig} cc',
    CXX=f'{zig} c++',
    CCFLAGS=['-O3', '-march=native', '-ffast-math', '-funroll-loops'],
    LINKFLAGS=['-O3'],
    CCCOM='$CC $CCFLAGS -c -o $TARGET $SOURCE',
    LINKCOM='$CC $LINKFLAGS -o $TARGET $SOURCES',
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
