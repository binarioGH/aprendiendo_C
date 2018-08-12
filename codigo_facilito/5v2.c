#include <stdio.h>
#define CUBO(a) a*a*a

int main(){
	int num;
	printf("Ingresa un numero: ");
	scanf("%i", &num);
	printf("El cubo de %i es %i",num, CUBO(num));
	return 0;
}