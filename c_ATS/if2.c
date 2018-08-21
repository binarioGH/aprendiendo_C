#include <stdio.h>

int main(){
	float nota;
	printf("Ingresa tu nota: ");scanf("%f", &nota);
	if(nota <= 10.5 ){
		printf("Reprobaste.");
	}
	else{
		printf("Aprobaste.");
	}
	return 0;
}