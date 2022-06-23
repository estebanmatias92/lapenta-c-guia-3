#include <stdio.h>

#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_1() 
{    

	printf("\nAnalizar siguiente bucle\n");

	int i=0, j;
	while (i<4) {
		i++;
		printf("\nEstoy en el ciclo!!!!");
	}

	j=100*i;

	printf("\nEl valor de j es %d", j);


	printf("\n\n");
	printf("I\tI<4\tJ\n");
	printf("--------------------\n");
	char boolean = 'F';
	i = 0;
	j = 0;
	while (i<4) {
		boolean = 'T';
		printf("%d\t%c\t%d\n", i, boolean, j);
		i++;
		boolean = 'F';

	}
	j = 100 * i;
	printf("%d\t%c\t%d\n", i, boolean, j);

}