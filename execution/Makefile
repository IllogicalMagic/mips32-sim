GENERATED=sysregs.h sysregs.cpp sysreg_decl.h sysreg_arr.h insn_handlers.h insn_handlers.cpp

OBJ=core.o mmu.o sysregs.o insn_handlers.o

all: $(OBJ)

test: test.o core.o sysregs.o insn_handlers.o mmu.o

generate: process_descr.py sysregs.txt process_insn.py handlers.cpp
	./process_descr.py
	./process_insn.py

clean:
	rm -rf *~ *.o $(GENERATED) test
