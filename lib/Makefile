CC=$(CROSS_TOOLCHAIN)/mips-elf-gcc
CFLAGS=-O2 -EL
ASFLAGS=-EL
OBJ=start.o

libmips.a: $(OBJ)
	$(CROSS_TOOLCHAIN)/ar rcs libmips.a $(OBJ)

clean:
	rm -rf *~ *.o libmips.a
