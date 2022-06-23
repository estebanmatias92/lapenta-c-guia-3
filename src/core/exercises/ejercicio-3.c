#include <stdio.h>

#include "../../../include/core/exercises/ejercicios.h"

void ejercicio3_do_while_version(void);
void ejercicio3_while_version(void);

void ejercicio_3() 
{    

    printf("\nSumar mientras el numero sea mayor que 0\n");

    printf("\nUsar numeros naturales mayores que cero, o usar cero para salir");
    printf("\nDo-While version: ");
    printf("\n");
    ejercicio3_do_while_version();
    printf("\n");

    printf("\nWhile version: ");
    printf("\n");
    ejercicio3_while_version();
    printf("\n\n");
}

void ejercicio3_do_while_version(void)
{
    int A, B, Z;
    int bool;
    B = 1;

    do 
    {
        Z = 0;
        bool = 0;

        do 
        {
            printf("Ingresar número: ");
            scanf("%d", &A);

            if (A > 0)
                Z += A;
            else
                bool = 1;

        } while (bool == 0);

        printf("La suma total es: %d", Z);
        B += 2;

    } while (B >= 5);

}

void ejercicio3_while_version(void)
{
    int A, B, Z;
    int bool;
    B = 5;

    while (B >= 5)
    {
        Z = 0;
        bool = 0;

        while (bool == 0)
        {
            printf("Ingresar número: ");
            scanf("%d", &A);

            if (A > 0)
                Z += A;
            else
                bool = 1;

        };

        printf("La suma total es: %d", Z);
        B -= 2;
    };

}