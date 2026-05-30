bin_PROGRAMS = yac

yac_SOURCES = $(wildcard *.c)

yac_CFLAGS = \
    -O3 \
    -march=native \
    -ffast-math \
    -funroll-loops \
    -fomit-frame-pointer \
    -I$(shell python3 -c "import nuitka,os;print(os.path.join(os.path.dirname(nuitka.__file__),'build','include'))")

yac_LDFLAGS = -O3
