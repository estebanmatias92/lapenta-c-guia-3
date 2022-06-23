#include <stdio.h>

#include "../../../include/core/exercises/ejercicios.h"
#include "../../../include/math/math.h"

void ejercicio_6() 
{    

    printf("\nSumar los primeros N números impares\n");

    int N = 0;
    printf("\nIngresar cantidad de numeros impares a sumar: ");
    fflush(stdin);
    scanf(" %d", &N);

    int suma = 0;
    for (size_t i = 1; i <= N*2; i+=2)
        suma += i;    

    printf("La suma de de lor primeros %d números impares es: %d", N, suma);
    
    printf("\n\n");
    
}
