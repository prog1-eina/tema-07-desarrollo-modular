CXX = g++
CXXFLAGS = -g -Wall -Wextra

all: bin/calculadora

bin/calculadora: bin/calculadora-main.o bin/calculos.o
	$(CXX) $(CXXFLAGS) -o bin/calculadora bin/calculadora-main.o bin/calculos.o 

bin/calculadora-main.o: calculadora-main.cpp calculos.h | bin
	$(CXX) $(CXXFLAGS) -o bin/calculadora-main.o -c calculadora-main.cpp 

bin/calculos.o: calculos.cpp calculos.h | bin
	$(CXX) $(CXXFLAGS) -o bin/calculos.o -c calculos.cpp

bin:
	mkdir bin

clean:
	del bin\calculadora.exe bin\calculadora-main.o bin\calculos.o
	rmdir bin
