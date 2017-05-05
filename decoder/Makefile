CC=g++
CFLAGS=-std=c++11 -Wall

#   $@ Имя цели обрабатываемого правила
#   $< Имя первой зависимости обрабатываемого правила
#   $^ Список всех зависимостей обрабатываемого правила


all: decoder test

test: decoder
	$(CC) $(CFLAGS) $^.o test.cpp -o $@.o

decoder:
	$(CC) $(CFLAGS) decoder.cpp -c -o $@.o
