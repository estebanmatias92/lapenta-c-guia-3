#include <stdio.h>

#include "../../../include/core/exercises/ejercicios.h"
#include "../../../include/math/math.h"

void ejercicio_8() 
{    

    printf("\nDeterminar si Z es primo\n");

    int Z = 0;
    printf("\nIngresar número: ");
    fflush(stdin);
    scanf(" %d", &Z);

    printf("El numero %d %s primo", Z, (is_prime_int(Z) == 0) ? "es" : "no es");
    printf("\n\n");

}