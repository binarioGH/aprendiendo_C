#include <stdio.h>

int main(){
	int edad;
	printf("Ingresa tu edad: ");
	scanf("%i", &edad);
	if(edad < 18){
		printf("Eres menor de edad.");
	}
	else if(edad >= 18){
		printf("Eres mayor de edad.");
	}
	return 0;
}