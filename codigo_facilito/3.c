#include <stdio.h>

//Operadores. https://www.youtube.com/watch?v=lxmPSy6Ga7M&list=PLpOqH6AE0tNgqknxjMAJ8bX_L1a7lnBaH&index=5
int main(){
	float n1, n2;
	printf("Ingresa el primer numero: ");
	scanf("%f", &n1);
	printf("Ingresa el segundo numero: ");
	scanf("%f", &n2);
	printf("Suma: %.0f \n", n1 + n2);
	printf("Resta: %.0f \n", n1 - n2);
	printf("Multiplicar: %.0f \n", n1 * n2);
	printf("Dividir: %f \n", n1 / n2);
	return 0;
}