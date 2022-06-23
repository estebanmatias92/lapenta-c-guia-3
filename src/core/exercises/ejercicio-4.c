#include <stdio.h>

#include "../../../include/core/exercises/ejercicios.h"

void ejercicio4_do_while_version(void);
void ejercicio4_while_version(void);

void ejercicio_4() 
{    

    printf("\nDivision mediante restas\n");

    printf("\nDo-While version: ");
    ejercicio4_do_while_version();
    printf("\n");

    printf("\nWhile version:");
    ejercicio4_while_version();
    printf("\n\n");
}

void ejercicio4_do_while_version(void)
{
    int A, B, D, M, S;

    printf("\nIngrese dividendo y divisor\n");
    scanf("%d%d", &A, &B);

    M = A;
    D = 0;
    do 
    {
        M-=B;
        D+=1;
    //} while (M < B); En el cogido original, nunca pasaba de la primera iteración, porque elr esto siempre es mayor que el divisor
    } while (M >= B);

    printf("La División de %d por %d es: %d y el resto es %d :", A, B, D, M);

}

void ejercicio4_while_version(void)
{
    int A, B, D, M, S;

    printf("\nIngrese dividendo y divisor\n");
    scanf("%d%d", &A, &B);

    M = A;
    D = 0;
    while (M >= B) 
    {
        M-=B;
        D+=1;
    };

    printf("La División de %d por %d es: %d y el resto es %d :", A, B, D, M);

}