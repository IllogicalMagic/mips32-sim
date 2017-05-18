GEN_LIST=dec_cmds.h map_match.h matchers.hpp
OBJ=decoder.o

all: $(OBJ)

generate: gen_op_types.py op_match.txt
	./gen_op_types.py

test: decoder.o test.o

clean:
	rm -rf *~ *.o $(GEN_LIST)
