


.PHONY: clean

all: main.o  haizei_test.o
	g++ -o out main.o haizei_test.o
	./out
main.o: main.cpp
	g++  -c main.cpp

haizei_test.o: haizei_test.h haizei_test.cc
	g++  -c haizei_test.cc

clean:
	rm -f ./out
