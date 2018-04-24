CXX?=g++
CXXSTD?=c++14
CXXWARN?=-Wall -Werror --pedantic-errors -Wno-unused-variable -Wno-unused-result
LDLIBS?=-lboost_program_options

ifeq ($(MODE), release)
FLTO?=-flto
OPT?=-O2 $(FLTO)
NDEBUG?=-DNDEBUG
LDFLAGS?=$(FLTO) -Wl,--gc-sections
else
OPT?=-O0 -g
endif

ROOT_DIR=$(PWD)

CXXFLAGS?=-std=$(CXXSTD) $(CXXWARN) $(OPT) $(NDEBUG) $(ADDOPTS)
CXXFLAGS+=-I$(ROOT_DIR)

CC=$(CXX)

GENDIRS=common decoder execution
SUBDIRS=asm common decoder execution support main lib

export

define PAT =
cd $(DIR) && $(MAKE)

endef

define GEN =
cd $(DIR) && $(MAKE) generate

endef

define CLEAN =
cd $(DIR) && $(MAKE) clean

endef


all: generate build
	cp main/simulator main/appmode asm/asm.py .

generate:
	$(foreach DIR, $(GENDIRS), $(GEN))

build:
	$(foreach DIR, $(SUBDIRS), $(PAT))

clean:
	rm -rf *~ *.o simulator appmode asm.py
	$(foreach DIR, $(SUBDIRS), $(CLEAN))

