﻿/*********************************************************************************************\
 * Curso de Programación 1. Tema 7 y práctica 3
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 8-10-2024
 * Resumen: Fichero «calculos.cpp» de implementación del módulo de biblioteca «calculos» que
 *          facilita algunas funciones para trabajar con datos de tipo entero
\*********************************************************************************************/
#include "calculos.hpp"

/*
 * Pre:  ---
 * Post: Devuelve el número de cifras de «n» cuando este se escribe en base 10.
 */
unsigned numCifras(int n) {
    unsigned cuenta = 1;      // lleva la cuenta de las cifras identificadas
    n = n / 10;               // elimina la cifra menos significativa de «n»
    while (n != 0) {
        // El valor de <cuenta> es igual al de cifras identificadas en «n»
        cuenta++;       // contabiliza la cifra menos significativa de «n»
        n = n / 10;     // y la elimina de «n».   
    }
    return cuenta;
}


/*
 * Pre:  ---
 * Post: Devuelve |a|.
 */
unsigned absoluto(int a) {
    if (a >= 0) {
        return a;
    } else {
        return -a;
    }
}


/*
 * Pre:  ---
 * Post: Devuelve la suma de las cifras de «n» cuando «n» se escribe en base 10.
 */
unsigned sumaCifras(int n) {
    n = absoluto(n);               // si «n» es negativo, le cambia el signo
    unsigned suma = 0;             // suma de las cifras eliminadas de «n»
    while (n != 0) {
        suma = suma + n % 10;      // suma la cifra menos significativa de «n»
        n = n / 10;                // y la elimina de «n»
    }
    return suma;
}


/*
 *  Pre:  i ≥ 1
 *  Post: Devuelve la «i»-ésima cifra menos significativa de «n» cuando «n» se escribe
 *        en base 10.
 */
unsigned cifra(int n, unsigned i) {
    n = absoluto(n);               // si «n» es negativo, le cambia el signo
    for (int exp = 1; exp < i; exp++) {
        n = n / 10;         // elimina la cifra menos significativa de «n»
    }
    return n % 10;
}


/*
 *  Pre:  ---
 *  Post: Devuelve el número que escrito en base 10 es la imagen especular de «n» cuando «n»
 *        se escribe también en base 10.
 */
int imagen(int n) {
    // «negativo» memoriza si «n» es, inicialmente, positivo o negativo.
    bool negativo = n < 0;
    n = absoluto(n);               // si «n» es negativo, le cambia el signo

    // Variable para el cálculo de la imagen especular de «n»
    int resultado = 0;
    while (n != 0) {
        // Incorpora el dígito menos significativo de «n» a la variable «resultado»
        resultado = 10 * resultado + n % 10;
        // Y lo elimina de «n»
        n = n / 10;
    }
    
    // Se devuelve el valor «resultado» con el signo que tenía «n» al la ejecución de esta
    // función.
    if (negativo) {
        return -resultado;
    } else {
        return resultado;
    }
}


/*
 *  Pre:  ---
 *  Post: Devuelve el factorial de «n».
 */
unsigned factorial(unsigned n) {
    unsigned factorial = 1;      //  factorial = 0!
    for (unsigned i = 2; i <= n; i++) {
        //  factorial = (i - 1)!
        factorial = i * factorial;
        // factorial = i!
    }
    // factorial = n!
    return factorial;
}


/*
 *  Pre:  ---
 *  Post: Devuelve true si y solo si «n» es un número primo.
 */
bool esPrimo(unsigned n) {
    if (n == 2) {
        return true;      // «n» es igual a 2, luego es primo.
    } else if (n < 2 || n % 2 == 0) {
        return false;     // «n» es menor que 2 o par mayor que 2.
    } else {
        // Se buscan posibles divisores impares de «n» a partir del 3:

        // «divisor» indica el siguiente impar candidato a dividir a «n».
        unsigned divisor = 3;              // Primer divisor impar a probar

        // «encontrado» indica si se ha encontrado un divisor de «n».
        bool encontrado = false;

        while (!encontrado && divisor * divisor <= n) {
            encontrado = n % divisor == 0;
            divisor = divisor + 2;
        }
        return !encontrado;
    }
}


/*
 *  Pre: a ≠ 0 ∨ b ≠ 0
 *  Post: Devuelve el máximo común divisor de «a» y «b».
 */
unsigned mcd(int a, int b) {
    // Algoritmo de Euclides para el cálculo del mcd
    a = absoluto(a);
    b = absoluto(b);
    
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    
    return a;
}
