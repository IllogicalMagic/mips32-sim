GEN_LIST=dec_cmds.h map_match.h

OBJ=decoder.o

all: $(OBJ)

generate: gen_op_types

gen_op_types: gen_op_types.py op_match.txt
	./$@.py

test: decoder.o test.o

clean:
	rm -rf *~ *.o $(GEN_LIST)
