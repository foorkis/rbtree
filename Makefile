CFLAGS=-std=c++11
CPP=g++

all: main.cpp rbtree.hpp
	$(CPP) -c -o rbtree.o rbtree.hpp $(CFLAGS)
	$(CPP) -c -o main.o main.cpp $(CFLAGS)
	$(CPP) -o rbtree main.o rbtree.o -lstdc++
clean:
	rm *.o rbtree
