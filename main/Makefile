all: simulator appmode

SRC=$(ROOT_DIR)/decoder/*.o $(ROOT_DIR)/execution/*.o $(ROOT_DIR)/support/*.o

simulator: simulator.o $(SRC)

appmode: appmode.o $(SRC)

clean:
	rm -rf *.o *~ simulator appmode
