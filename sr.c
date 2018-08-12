#include <stdio.h>
//suma recursiva.

int main(){
	int num, max, i;
	printf("Ingresa un numero: ");
	scanf("%i", &num);
	printf("Ingresa cuantas veces se va a sumar: ");
	scanf("%i", &max);
	for(i=1;i <= max; i++){
		num += num;
	}
	printf("el resultado es: %i", num);
	return 0;
}