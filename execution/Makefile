GENERATED=sysregs.h sysregs.cpp sysreg_decl.h sysreg_arr.h insn_handlers.inc sysreg_init.inc

OBJ=core.o tlb.o sysregs.o

all: $(OBJ)

test: test.o $(OBJ)

generate: process_descr.py sysregs.txt process_insn.py handlers.cpp
	./process_descr.py
	./process_insn.py

clean:
	rm -rf *~ *.o $(GENERATED) test
