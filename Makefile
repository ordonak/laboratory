# Makefile

CC = g++ 

all: main clean

main: main.o driver.o linkedList.o node.o bst.o stack.o
	g++ -Wall main.o driver.o linkedList.o bst.o stack.o -o main.r
main.o: main.cpp driver.h 
	g++ -Wall -c main.cpp
driver.o: driver.cpp driver.h linkedList.h bst.h stack.h
	g++ -Wall -c driver.cpp
linkedList.o: linkedList.cpp linkedList.h
	g++ -Wall -c linkedList.cpp
bst.o: bst.cpp bst.h
	g++ -Wall -c bst.cpp
stack.o: stack.cpp stack.h
	g++ -Wall -c stack.cpp
clean:
	rm -rf *o