CXX?=g++
CXXSTD?=c++14
CXXWARN?=-Wall -Werror --pedantic-errors -Wno-unused-variable
ROOT_DIR=../

ifeq ($(MODE), release)
FLTO?=-flto
OPT?=-O2 $(FLTO)
NDEBUG?=-DNDEBUG
LDFLAGS?=$(FLTO) -Wl,--gc-sections
else
OPT?=-O0 -g
endif

CXXFLAGS?=-std=$(CXXSTD) $(CXXWARN) $(OPT) $(NDEBUG)
CXXFLAGS+=-I$(ROOT_DIR)

CC=$(CXX)

GENERATED=sysregs.h sysregs.cpp sysreg_decl.h sysreg_arr.h insn_handlers.h insn_handlers.cpp

all: generate test

test: test.o core.o sysregs.o insn_handlers.o

generate: process_descr.py sysregs.txt process_insn.py handlers.cpp
	./process_descr.py
	./process_insn.py

clean:
	rm -rf *~ *.o $(GENERATED) test
