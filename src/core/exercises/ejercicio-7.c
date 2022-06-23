#include <stdio.h>

#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_7() 
{    

    printf("\nPotencia de X elevado a la Y\n");

    int x, y;
    printf("\nIngrese el valor de X: ");
    fflush(stdin);
    scanf(" %d", &x);

    printf("Ingrese el valor de X: ");
    fflush(stdin);
    scanf(" %d", &y);

    int pot = x;
    if (y == 0)
    {
        pot = 1;
    } 
    else if (y == 1)
    {
        pot = x;
    }
    else
    {
        for (size_t i = 2 ; i <= y; i++)        
            pot += pot;
    }

    printf("La potencia de %d elavado a %d es: %d", x, y, pot);

    printf("\n\n");    
}