/* Calcular el nuevo salario de un obrero que obtuvo un aumento de 25%
https://www.youtube.com/watch?v=-nEF-aVshtU */
#include <stdio.h>
int main(){
	int salario;
	printf("\n introduzca su salario actual: ");
	scanf("%i",&salario);
	salario = salario + salario * 0.25;
	printf("\n su nuevo salario es: %i", salario);
	return 0;
}