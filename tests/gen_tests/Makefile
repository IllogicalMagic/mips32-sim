#CROSS_COMPILER
#LIBPATH to $SIM/lib
THIS_FILE=$(lastword $(MAKEFILE_LIST))

CC=gcc
CXXWARN?=-w
OPT?= -O2

CFLAGS=$(CXXWARN) $(OPT) $(ADDOPTS)
MIPSFLAGS?=-lmips -nostdlib -ffreestanding
MIPSFLAGS+= -L$(LIBPATH)

TESTDIRS?=t0 t1 t2 t3
OUTS?=0.0.out 0.1.out 1.0.out 1.1.out
NATFILES=$(OUTS:.out=.nat)
MIPSFILES=$(OUTS:.out=.mips)

define NATCOMPILEDIR =
SUBDIR=$(DIR) $(MAKE) -f $(THIS_FILE) nativedir

endef

define MIPSCOMPILEDIR =
SUBDIR=$(DIR) $(MAKE) -f $(THIS_FILE) mipsdir

endef

export

CC=$(CXX)

all: native mips

nativedir: $(NATFILES)

native:
	$(foreach DIR, $(TESTDIRS), $(NATCOMPILEDIR))

$(NATFILES): %.nat: $(SUBDIR)/%.nat

$(SUBDIR)/%.nat:
	$(CC) $(CFLAGS) $(wildcard $(SUBDIR)/out.$*.*.c) -o $@

mips:
	$(foreach DIR, $(TESTDIRS), $(MIPSCOMPILEDIR))

mipsdir: $(MIPSFILES)

$(MIPSFILES): %.mips: $(SUBDIR)/%.mips

$(SUBDIR)/%.mips:
	$(CROSS_COMPILER) $(CFLAGS) $(MIPSFLAGS) $(wildcard $(SUBDIR)/out.$*.*.c) -o $@
