import os
import glob

env = Environment(
    CC='gcc',
    CCFLAGS=['-O3', '-march=native', '-ffast-math', '-funroll-loops', '-fomit-frame-pointer'],
    LINKFLAGS=['-O3'],
)

c_files = glob.glob('c_build/**/*.c', recursive=True) + glob.glob('c_build/*.c')

if os.name == 'nt':
    env.Program('yac.exe', c_files)
else:
    env.Program('yac', c_files)
