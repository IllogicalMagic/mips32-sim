CC=g++
CFLAGS=-std=c++14 -Wall

all: decoder test

test: decoder
	$(CC) $(CFLAGS) $^.o test.cpp -o $@.o

decoder:
	$(CC) $(CFLAGS) decoder.cpp -c -o $@.o
