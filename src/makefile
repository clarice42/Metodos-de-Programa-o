IDIR =../include
CC=g++
CFLAGS=-I$(IDIR)

GOOGLE_TEST_INCLUDE = /usr/local/lib/libgtest.a
ODIR=obj
LDIR =../lib
TEST=teste
LD_FLAGS = -fPIC -O2 -g -lpthread

LIBS=-lm

_DEPS = romano.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = romano.o romanofunc.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

romano: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

testa_romano: $(TEST)/testa_romano.cpp $(ODIR)/romanofunc.o 
	$(CC) $< $(ODIR)/romanofunc.o $(GOOGLE_TEST_INCLUDE) -o $@ $(CFLAGS) $(LD_FLAGS) 

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 

