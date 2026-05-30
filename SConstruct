import os
import glob

env = Environment(
    CC='gcc',
    CCFLAGS=['-O3', '-march=native', '-ffast-math', '-funroll-loops', '-fomit-frame-pointer'],
    LINKFLAGS=['-O3'],
)

c_files = (
    glob.glob('*.c') +
    glob.glob('**/*.c', recursive=True)
)

c_files = list(set(c_files))

if not c_files:
    import sys
    print("No .c files found.")
    sys.exit(1)

print(f"Found {len(c_files)} C files")

if os.name == 'nt':
    env.Program('yac.exe', c_files)
else:
    env.Program('yac', c_files)
