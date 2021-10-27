# Fichero makefile del programa «calculadora» visto en el tema 7
# Este fichero utiliza la forma más simple de las reglas de make y no usa
# variables de make. El código fuente de partida de la práctica 3 utiliza
# ficheros makefile más profesionales.

# Por convenio, la regla que indica el objetivo (target) final del fichero 
#    makefile se denomina «all». Esta regla indica el objetivo final es generar 
#    el fichero «calculadora» (o «calculadora.exe» en Windows).
all: calculadora

# Regla para construir el objetivo «calculadora» («calculadora.exe» en Windows).
# Tiene como prerrequisitos los ficheros «calculadora-main.o» y «calculos.o».
# La segunda parte de la regla es la «receta» (recipe) para generar 
#    «calculadora» (o «calculadora.exe») a partir de los ficheros 
#    «calculadora-main.o» y «calculos.o»: el comando 
#    «g++ -g -o calculadora calculadora-main.o calculos.o»
# La opción de compilación «-g» de esta receta y las siguientes indica al
#    compilador que incluya información de depuración al generar los ejecutables
#    o los ficheros intermedios de compilación. Esta información es necesaria si
#    luego se quiere utilizar el depurador.
calculadora: calculadora-main.o calculos.o
	g++ -g -o calculadora calculadora-main.o calculos.o  

# Regla para construir el objetivo «calculadora-main.o»
# Tiene como prerrequisitos los ficheros «calculadora-main.cpp» y 
#    «calculos.hpp»: cuando no exista el objetivo (el fichero 
#    «calculadora-main.o») o cuando alguno de los prerrequisitos (los ficheros 
#    «calculadora-main.cpp» o «calculos.hpp») se haya modificado, se ejcuta la 
#    receta «g++ -g -o calculadora-main.o -c calculadora-main.cpp» para generar
#    o regenerar el fichero «calculadora-main.o».
calculadora-main.o: calculadora-main.cpp calculos.hpp
	g++ -g -o calculadora-main.o -c calculadora-main.cpp   

# Regla para construir el objetivo «calculos.o»
# Tiene como prerrequisitos los ficheros «calculos.cpp» y «calculos.hpp»: cuando
#    no exista el objetivo o cuando alguno de los prerrequisitos se haya 
#    modificado, se ejcuta la receta «g++ -g -o calculos.o -c calculos.cpp» para 
#    generar o regenerar el fichero «calculos.o».
calculos.o: calculos.cpp calculos.hpp
	g++ -g -o calculos.o -c calculos.cpp 
