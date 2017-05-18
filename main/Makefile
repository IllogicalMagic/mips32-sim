all: simulator

SRC=$(ROOT_DIR)/decoder/*.o $(ROOT_DIR)/execution/*.o

simulator: simulator.o $(SRC)

clean:
	rm -rf *.o *~ simulator
