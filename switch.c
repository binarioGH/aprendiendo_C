// codigo basado en: https://www.youtube.com/watch?v=UbkRifnA0FU
#include <stdio.h>

int main(){
	int numero;
	printf("introduzca un numero entre 1 y 3: ");
	scanf("%i", &numero);
	switch(numero){
	case 1: printf("escogiste: 1"); break;
	case 2: printf("escogiste: 2"); break;
	case 3: printf("escogiste: 3"); break;
	default: printf("solo se pueden numeros del 1 al 3");
	}
	return 0;
}
