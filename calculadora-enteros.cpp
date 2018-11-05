/*************************************************************************
 * Curso de Programación 1. Tema 7 y práctica 3
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 17 de octubre de 2018
 * Resumen: Módulo principal de un programa interactivo dirigido por menú
 *          que permite al usuario la realización de algunos cálculos con
 *          datos de tipo entero.
 *          Versión específica de la práctica 3.
 ************************************************************************/

#include <iostream>
#include "../../Biblioteca/calculos.h"
using namespace std;


/*
 *  Pre:  ---
 *  Post: Ha presentado el menú de opciones disponibles.
 */
void presentarMenu () {
    cout << endl;
    cout << "MENÚ DE OPERACIONES" << endl;
    cout << "===================" << endl;
    cout << "0 - Finalizar" << endl;
    cout << "1 - Calcular el número de cifras de un entero" << endl;
    cout << "2 - Sumar las cifras de un entero" << endl;
    cout << "3 - Extraer una cifra de un entero" << endl;
    cout << "4 - Calcular la imagen especular de un entero" << endl;
    cout << "5 - Comprobar si un entero es primo" << endl;
    cout << "6 - Calcular el minimu comun multiplo" <<endl;
    cout << "7 - n-ésimo término de la sucesión de Fibonnaci " << endl << endl;
}

/*
 *  Pre:  ---
 *  Post: Ha ejecutado las acciones asociadas a la orden cuyo código es
 *        igual al valor del parámetro «operacion».
 */
void ejecutarOrden (int operacion) {
    if (operacion >= 1 && operacion <= 5) {
        // Se va a ejecutar una operación válida.
        // En primer lugar se pide al usuario que defina un número entero.
        cout << "Escriba un número entero: " << flush;
        int numero;
        cin >> numero;

        if (operacion == 1) {
            // Informa del número de cifras de «numero»
            cout << "El número " << numero << " tiene "
                 << numCifras(numero) << " cifras." << endl;
        }
        else if (operacion == 2) {
            // Informa de la suma de las cifras de «numero»
            cout << "Las cifras de " << numero << " suman "
                 << sumaCifras(numero) << "." << endl;
        }
        else if (operacion == 3) {
            // El usuario debe definir la posición de la cifra de «numero»
            // en la que está interesado.
            cout << "Seleccione la posición de una cifra: " << flush;
            int posicion;
            cin >> posicion;

            // Informa del valor de la cifra ubicada en la posición
            // indicada por la variable «posicion» de «numero».
            cout << "La cifra situada en la posición " << posicion
                 << " del número " << numero << " es "
                 << cifra(numero, posicion) << "." << endl;
        }
        else if (operacion == 4) {
            // Informa del valor de la imagen especular de «numero»
            cout << "El número imagen especular de " << numero
                 << " es el " << imagen(numero) << "." << endl;
        }
        else if (operacion == 5) {
            // Informa si «numero» es un número primo o no lo es
            cout << "El número " << numero;
            if (!esPrimo(numero)) {
                cout << " no";
            }
            cout << " es primo." << endl;
        }
        }

     else if (operacion == 6) {
          cout << "Escribe dos numeros enteros: " << flush;
          int numero1 , numero2;
          cin >> numero1 >> numero2;
          cout << "El minimo comun multiplo de " << numero1 << " Y "
               << numero2 << " Es igual: " << mcm(numero1 , numero2) << endl;

    } else if (operacion == 7) {
           cout << "Escribe una posicion para saber su valor en fibonacci: " << flush;
           int fibo;
           cin >> fibo;
           cout << "el valor de la posicion " << fibo << " Es " << fibonacci(fibo) << endl;

    }

     else {
        // El código de operación no es válido
        cout << "Opción desconocida" << endl;
    }

}


/*
 * Pre:  ---
 * Post: Ha planteado al usuario de forma reiterada un menú con varias
 *       opciones. En cada iteración, ha leído la respuesta del usuario y
 *       ha presentado los resultados de ejecutar la opción elegida.
 *       Ha concluido cuando el usuario ha seleccionado la opción «0».
 */
int main () {
    // Presenta por primera vez el menú de opciones.
    presentarMenu();

    // Pide al usuario que escriba el código de la primera operación.
    cout << "Seleccione una operación [0-7]: " << flush;

    // Asigna a «operacion» la respuesta del usuario.
    int operacion;
    cin >> operacion;

    // Itera hasta que el valor de «operacion» sea igual a 0.
    while (operacion != 0) {
        // Ejecuta la última operación seleccionada.
        ejecutarOrden(operacion);

        // Presenta de nuevo el menú de opciones.
        presentarMenu();

        // Pide al usuario que escriba el código de una nueva operación.
        cout << endl << "Seleccione una operación [0-7]: " << flush;
        // Asigna a «operacion» la nueva respuesta del usuario.
        cin >> operacion;
    }

    // El programa concluye normalmente.
    return 0;
}
