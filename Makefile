CXX?=g++
CXXSTD?=c++17
CXXWARN?=-Wall -Werror --pedantic-errors -Wno-unused-variable -Wno-unused-result
LDLIBS?=-lboost_program_options -lubsan

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
	cp main/appmode asm/asm.py .
	#cp main/simulator .

generate:
	$(foreach DIR, $(GENDIRS), $(GEN))

build: generate
	$(foreach DIR, $(SUBDIRS), $(PAT))

clean:
	rm -rf *~ *.o simulator appmode asm.py
	$(foreach DIR, $(SUBDIRS), $(CLEAN))

