#include <stdio.h>

int main(){
	int v1, v2, v3;
	printf("Ingresa el valor de v1: ");scanf("%i", &v1);v3 = v1;
	printf("Ingresa el valor de v2: ");scanf("%i", &v2);v1 = v2;v2 = v3;
	printf("Valor de v1: %i", v1);printf("\nValor de v2: %i", v2);
}