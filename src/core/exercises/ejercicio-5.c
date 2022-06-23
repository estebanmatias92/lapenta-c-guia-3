#include <stdio.h>
#include <stdlib.h>

#include "../../../include/core/exercises/ejercicios.h"
#include "../../../include/math/math.h"
#include "../../../include/arrays/arrays.h"

void ejercicio5_a(void);
void ejercicio5_b(int N);
void ejercicio5_c(int N, int K);
void ejercicio5_d(int K);
void ejercicio5_e(int K);
void ejercicio5_f(int N);

void ejercicio_5() 
{    

    printf("\nBucles condicionales\n");

    int N, K;
    printf("\nIngresar valor numerico para N: ");
    fflush(stdin);
    scanf(" %d", &N);
    printf("Ingresar valor numerico para K: ");
    fflush(stdin);
    scanf(" %d", &K);

    ejercicio5_a();

    ejercicio5_b(N);

    ejercicio5_c(N, K);

    ejercicio5_d(K);

    ejercicio5_e(K);

    ejercicio5_f(N);

    printf("\n\n");
}

void ejercicio5_a(void)
{
    printf("\na) Mostrar por pantalla los primeros 10 números naturales:");

    float promedio = 0;
    float suma = 0;
    int count = 10;

    for (int i = 1; i <= count; i++)
    {
        suma += i;
    }

    promedio = (float) (suma / count);

    printf("\nEl promedio de los primeros 10 números naturales es: %.2f", promedio);
    printf("\n");
    
}

void ejercicio5_b(int N)
{
    printf("\nb) Mostrar por pantalla los N primeros números pares:");

    size_t count = 0;
    unsigned int i = 0;

    printf("\nLos primeros %d números pares son: ", N);
    while (count < N)
    {

        if (is_even_int(i) == 0)
        {
            printf("%d ", i);
            count++;
        }

        i++;
    }
    
    printf("\n");
}

void ejercicio5_c(int N, int K)
{
    printf("\nc) Calcular y mostrar por pantalla la suma de los N primeros múltiplos de K: ");

    size_t count = 0;
    int multiplo = 0;
    int suma = 0;

    for (size_t i = 1; i <= N; i++)
    {
        multiplo = K * i;
        suma += multiplo;
    }

    printf("\nLa suma de los primeros %d múltiplos de %d es: %d", N, K, suma);
    printf("\n");
    
}

void ejercicio5_d(int K)
{
    printf("\nd) Mostrar por pantalla los números enteros que se encuentran comprendidos \nen el intervalo [-K ... K] en orden ascendente y luego en orden descendente:");

    size_t length = abs((-K) - K) + 1;
    int *array = range_int(-K, (K + 1));
    int *inverse_array = range_int(K, -(K + 1));

    print_array_int(array, length, "\n[-K, ..., k] = {",", ", "}");
    print_array_int(inverse_array, length, "\n[K, ..., -k] = {",", ", "}");

    printf("\n");
}

void ejercicio5_e(int K)
{
    printf("\ne) Mostrar por pantalla los términos de la sucesión 1,3,6,10,15,21,28..... \nque sean menores al número K:");
     
    size_t length = (K+1) - 1;
    int *array = range_int(1, K+1);

    int *triangular_array = array_map_int(array, length, triangular_number_int);

    printf("\nSucesion triangular de %d terminos: ", K);
    print_array_int(triangular_array, length, "{",", ", "}");

    int i = 1;
    int triangular = 0;

    printf("\nSucesion triangular menor que %d: {", K);
    while (triangular < K)
    {
        triangular = triangular_number_int(i);

        if (triangular < K)
            printf("%d", triangular);
        
        i++;

        if (triangular_number_int(i) < K)        
            printf(", ");
    };
    printf("}");

    printf("\n");
    
    
}

void ejercicio5_f(int N)
{
    printf("\nf) Calcular el promedio de N números:");

    float *array = range_float(1, N+1);
    size_t length = N;

    float average = array_average_float(array, length);

    printf("\nEl promedio de %d números es: %.2f", N, average);
    printf("\n");
}