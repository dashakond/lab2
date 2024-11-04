CXX = g++
CXXFLAGS = -std=c++11 -Wall

all: main

main: FuncA.o main.o
    $(CXX) $(CXXFLAGS) -o main FuncA.o main.o

FuncA.o: FuncA.cpp FuncA.h
    $(CXX) $(CXXFLAGS) -c FuncA.cpp

main.o: main.cpp
    $(CXX) $(CXXFLAGS) -c main.cpp

clean:
    rm -f *.o main
