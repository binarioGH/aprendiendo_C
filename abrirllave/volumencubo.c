#include <stdio.h>
#include <math.h>

int main(){
	float arista;
	printf("Ingresa las aristas del cubo: ");scanf("%f", &arista);
	printf("El volumen del cubo es: %.2f", pow(arista, 3));
	return 0;
}