CC=g++
CFLAGS=-std=c++14 -Wall
GEN_LIST=dec_cmds.h map_match.h

all: gen_op_types decoder test

gen_op_types: gen_op_types.py op_match.txt
	./$@.py

test: decoder test.cpp
	$(CC) $(CFLAGS) $<.o test.cpp -o $@.o

decoder: decoder.cpp
	$(CC) $(CFLAGS) $< -c -o $@.o
	
clean:
	rm *~ $(GEN_LIST)
