# compiler
CC = g++
LD = g++
 # options
OPT = -std=c++11 -c


all: clear a.out main.o source.o run

a.out: main.o source.o
	${LD} -std=c++11 main.o source.o

main.o: main.cpp source.cpp
	${CC} ${OPT} main.cpp -Iheader.h

source.o: header.h source.cpp
	${CC} ${OPT} source.cpp -Iheader.h

run:
	./a.out

clear:
	clear

clean:
	rm -f *.o
