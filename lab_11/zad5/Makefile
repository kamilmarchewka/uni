CC = g++
LD = g++
COPT = -std=c++11 -c
LOPT = -std=c++11
INC = -Iheader.hpp

all: clear a.out run

a.out: main.o source.o
	${LD} ${LOPT} main.o source.o -Iheader.hpp

source.o: source.cpp header.hpp
	${CC} ${COPT} source.cpp ${INC}

main.o: main.cpp header.hpp
	${CC} ${COPT} main.cpp ${INC}

run:
	./a.out

clean:
	rm ./*.o

clear:
	clear

run:
	@echo "-------------------------------"
	./a.out