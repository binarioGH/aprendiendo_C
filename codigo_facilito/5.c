#include <stdio.h>
#define PI 3.1416

int main(){
	int num;
	printf("Ingresa un numero: ");
	scanf("%i", &num);
	printf("El resultado es: %f", num + PI);
	return 0;
}