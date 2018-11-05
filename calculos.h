/*************************************************************************
 * Curso de Programación 1. Tema 7 y práctica 3
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 17 de octubre de 2018
 * Resumen: Fichero calculos.h de interfaz del módulo de biblioteca
 *          «calculos» que facilita algunas funciones para trabajar con
 *          datos de tipo entero
 *          Versión específica de la práctica 3.
 ************************************************************************/

#ifndef CALCULOS_H_INCLUDED

#define CALCULOS_H_INCLUDED


/*
 * Pre:  ---
 * Post: Ha devuelto el número de cifras de «n» cuando «n» se escribe en
 *       base 10.
 */
int numCifras(int n);


/*
 * Pre:  ---
 * Post: Ha devuelto la suma de las cifras de «n» cuando «n» se escribe en
 *       base 10.
 */
int sumaCifras(int n);


/*
 *  Pre:  i ≥ 1
 *  Post: Ha devuelto la «i»-ésima cifra menos significativa de «n» cuando
 *        «n» se escribe en base 10.
 */
int cifra(int n, int i);


/*
 *  Pre:  ---
 *  Post: Ha devuelto el número que escrito en base 10 es la imagen
 *        especular de «n» cuando «n» se escribe también en base 10.
 */
int imagen(int n);


/*
 *  Pre:  n ≥ 0
 *  Post: Ha devuelto el factorial de «n».
 */
int factorial(int n);


/*
 *  Pre:  ---
 *  Post: Ha devuelto true si y solo si «n» es un número primo.
 */
bool esPrimo (int n);


/*
 *  Pre: a ≠ 0 o b ≠ 0
 *  Post: Ha devuelto el máximo común divisor de «a» y «b».
 */
int mcd (int a, int b);


/*
 *  Pre: a ≠ 0 o b ≠ 0
 *  Post: Ha devuelto el mímimo común múltiplo de «a» y «b».
 */
int mcm(int a, int b);


/*
 *  Pre:  n ≥ 1
 *  Post: Ha devuelto el n-ésimo término de la sucesión de Fibonnaci.
 *  Nota: La sucesión de Fibonacci es una sucesión infinita de números
 *        naturales que comienza con los números 0 y 1 y cuyos restantes
 *        términos son iguales a la suma de los dos que le preceden. Estos
 *        son los primeros términos de esta sucesión infinita:
 *          0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ...
 */
int fibonacci(int n);

#endif // CALCULOS_H_INCLUDED
