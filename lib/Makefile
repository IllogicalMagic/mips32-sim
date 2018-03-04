CC=$(CROSS_COMPILER)
CFLAGS=-O2 -EL
ASFLAGS=-EL
OBJ=start.o

libmips.a: $(OBJ)
	$(CROSS_TOOLCHAIN)/$(CROSS_PREFIX)ar rcs libmips.a $(OBJ)

clean:
	rm -rf *~ *.o libmips.a
