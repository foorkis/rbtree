CFLAGS=-std=c++11
CPP=g++

all: main.cpp 
	$(CPP) -o rbtree main.cpp $(CFLAGS)
clean:
	rm rbtree
