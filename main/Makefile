all: simulator

SRC=$(ROOT_DIR)/decoder/*.o $(ROOT_DIR)/execution/*.o $(ROOT_DIR)/support/*.o

simulator: simulator.o $(SRC)

clean:
	rm -rf *.o *~ simulator
