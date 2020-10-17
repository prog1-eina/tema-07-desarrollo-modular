CXX = g++
CXXFLAGS = -g -Wall -Wextra

all: bin/calculadora

bin/calculadora: bin/calculadora-main.o bin/calculos.o
	$(CXX) $(CXXFLAGS) bin/calculadora-main.o bin/calculos.o  -o bin/calculadora 

bin/calculadora-main.o: calculadora-main.cpp calculos.h | bin
	$(CXX) $(CXXFLAGS) -c calculadora-main.cpp -o bin/calculadora-main.o  

bin/calculos.o: calculos.cpp calculos.h | bin
	$(CXX) $(CXXFLAGS) -c calculos.cpp -o bin/calculos.o 

bin:
	mkdir bin
