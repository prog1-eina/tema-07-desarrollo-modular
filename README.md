# Tema 7. Desarrollo modular

Código del tema 7 (diseño modular) de la asignatura [Programación 1](https://github.com/prog1-eina) ([Grado en Ingeniería Informática](https://webdiis.unizar.es/~silarri/coordinadorGrado/), [Escuela de Ingeniería y Arquitectura](https://eina.unizar.es/), [Universidad de Zaragoza](https://www.unizar.es/)).

El programa ``calculadora`` puede compilarse y ejecutarse desde una terminal de las siguientes formas:

1. En Linux o macOS, ejecutando la órdenes

        make
        ./calculadora

2. En Windows con PowerShell, ejecutando las órdenes

        make
        chcp 65001
        ./calculadora

3. En Windows con con el símbolo del sistema (Windows 8 y anteriores), ejecutando las órdenes

        make
        calculadora.exe

El repositorio también está configurado con tres tareas para su utilización en **Visual Studio Code**:

1. **Compilar proyecto «calculadora».** Compila el código fuente del proyecto «calculadora» utilizando el fichero ``Makefile``.

2. **Ejecutar proyecto «calculadora».** Ejecuta el programa «calculadora». Si es necesario, se compila previamente el proyecto, utilizando la tarea anterior. En el caso de ejecutar en Windows, modifica la página de códigos del terminal para que utilice UTF-8 y, así, se muestren adecuadamente los caracteres acentuados y la letra eñe.

3. **Depurar proyecto «calculadora».** Inicia la depuración del programa «calculadora». Si es necesario, se compila previamente el proyecto, utilizando la primera tarea.

El fichero [Makefile de este repositorio](https://github.com/prog1-eina/tema-07-desarrollo-modular/blob/master/Makefile) utiliza la forma más simple de las reglas de make y no usa variables make. El [código fuente de partida de la práctica 3](https://github.com/prog1-eina/practica3) utiliza ficheros makefile más profesionales.
