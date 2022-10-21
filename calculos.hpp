/******************************************************************************\
 * Curso de Programación 1. Tema 7 y práctica 3
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 15-10-2021
 * Resumen: Fichero calculos.hpp de interfaz del módulo de biblioteca
 *          «calculos» que facilita algunas funciones para trabajar con
 *          datos de tipo entero
\******************************************************************************/

/*
 * Pre:  ---
 * Post: Devuelve el número de cifras de «n» cuando «n» se escribe en
 *       base 10.
 */
unsigned numCifras(int n);


/*
 * Pre:  ---
 * Post: Devuelve la suma de las cifras de «n» cuando «n» se escribe en
 *       base 10.
 */
unsigned sumaCifras(int n);


/*
 *  Pre:  i ≥ 1
 *  Post: Devuelve la «i»-ésima cifra menos significativa de «n» cuando
 *        «n» se escribe en base 10.
 */
unsigned cifra(int n, unsigned i);


/*
 *  Pre:  ---
 *  Post: Devuelve el número que escrito en base 10 es la imagen
 *        especular de «n» cuando «n» se escribe también en base 10.
 */
int imagen(int n);


/*
 *  Pre:  ---
 *  Post: Devuelve el factorial de «n».
 */
unsigned factorial(unsigned n);


/*
 *  Pre:  ---
 *  Post: Devuelve true si y solo si «n» es un número primo.
 */
bool esPrimo(unsigned n);


/*
 *  Pre: a ≠ 0 o b ≠ 0
 *  Post: Devuelve el máximo común divisor de «a» y «b».
 */
unsigned mcd(int a, int b);
