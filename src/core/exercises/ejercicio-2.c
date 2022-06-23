#include <stdio.h>
#include <stdlib.h>

#include "../../../include/core/exercises/ejercicios.h"
#include "../../../include/core/menu/menu.h"


void ejercicio_a(void);
void ejercicio_b(void);
void ejercicio_c(void);

void ejercicio_2() 
{    

    printf("\nIndicar que realizan los siguiente programas\n");

    ejercicio_a();
    printf("\n");

    ejercicio_b();
    printf("\n");

    ejercicio_c();

    printf("\n");

}

void ejercicio_a(void)
{
    printf("\nA) Factorial\n");

    int *array = (int *) malloc(sizeof(int) * 1);
    size_t count = stdin_populate_array("Ingresar numero que desea factorizar: ", array, 4, 'N');
    
    for (size_t i = 0; i < count; i++)
    {
        int n = array[i];
        int factorial = 1; 

        while (n > 0) {
            factorial = factorial * n;
            n--;
        }

        printf("\nEl factorial de %d es %d", array[i], factorial);
    }
    
    printf("\n\nExplicacion:");
    printf("\nEl programa ingresa por teclado un numero (n) y mientras \nque que este numero sea mayor a cero, lo multiplica por su predecesor \nguardando el resultado en una variable y disminuyendo el valor de (n) \nEl ciclo se repite hasta que (n) es igual a 0");
    printf("\n\n");
}

void ejercicio_b(void)
{
    printf("\nB) Suma\n");

    int *array = (int *) malloc(sizeof(int) * 1);
    size_t count = stdin_populate_array("Ingresar numero que desea sumar: ", array, 5, 'Z');
    
    for (size_t i = 0; i < count; i++)
    {
        int suma = 0, conta = 0;
        int dato = array[i];

        while (conta < 5) {
            suma += dato;
            conta++;
        }
        printf("\nLa suma de 5 enteros es: %d", suma);    
    }
    
    printf("\n\nExplicacion:");
    printf("\nEl programa suma numeros todos los numeros ingresados por teclado \nmediante un ciclo while");
    printf("\n\n");

}

void ejercicio_c(void)
{
    int pot = 1;

    do {
        printf("La potencia es %d", pot);
        pot *= 2;
    } while ( pot > 30);

    printf("\n\nExplicacion:");
    printf("\nEl programa tiene un ciclo do-while, donde intentaria multiplicar el valor de (pot) por 2 \ny guardarlo para volverlo a multiplicar en la siguiente iteración, pero como la condición es imposible de cumplir para continuar mas allá del primer intento, \nel bucle se detiene inmediatamente termina la primer iteración.");
    printf("\n\n");
}