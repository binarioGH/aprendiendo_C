#include<stdio.h>
int main(){
	int pesetas;
	float euros;
	printf("Ingresa la cantidad de pesetas: ");scanf("%i", &pesetas);
	euros = pesetas/166.386;
	printf("Equivalente en euros: %.3f", euros);

	return 0;
}