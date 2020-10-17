CXX = g++
CXXFLAGS = -g -Wall -Wextra

all: bin/calculadora

bin/calculadora: build/calculadora-main.o build/calculos.o | bin
	$(CXX) $(CXXFLAGS) build/calculadora-main.o build/calculos.o  -o bin/calculadora 

build/calculadora-main.o: calculadora-main.cpp calculos.h | build
	$(CXX) $(CXXFLAGS) -c calculadora-main.cpp -o build/calculadora-main.o  

build/calculos.o: calculos.cpp calculos.h | build
	$(CXX) $(CXXFLAGS) -c calculos.cpp -o build/calculos.o 

bin:
	mkdir bin

build:
	mkdir build
