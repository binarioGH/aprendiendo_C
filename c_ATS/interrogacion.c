#include <stdio.h>
int main(){
	int num;
	printf("Ingresa un numero: ");scanf("%i", &num);
	(num%2==0) ? printf("El numero es par.") : printf("El numero es impar");
	return 0;
}