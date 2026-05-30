import os
import glob

env = Environment(
    CC='gcc',
    CCFLAGS=['-O3', '-march=native', '-ffast-math', '-funroll-loops', '-fomit-frame-pointer'],
    LINKFLAGS=['-O3'],
)

# Nuitka outputs to yac.build/ or c_build/ depending on flags
c_files = (
    glob.glob('yac.build/**/*.c', recursive=True) +
    glob.glob('yac.build/*.c') +
    glob.glob('c_build/**/*.c', recursive=True) +
    glob.glob('c_build/*.c') +
    glob.glob('*.c')
)

if not c_files:
    import sys
    print("No C files found. Run Nuitka first: python -m nuitka --generate-c-only yac.py")
    sys.exit(1)

print(f"Found {len(c_files)} C files")

if os.name == 'nt':
    env.Program('yac.exe', c_files)
else:
    env.Program('yac', c_files)
