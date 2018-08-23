#include <stdio.h>

int main(){
	int millas;
	printf("Ingresa el numero de millas recorridas: ");scanf("%i", &millas);
	printf("Has gastado %.2f galones de gasolina.", 20 - (0.05 + (float)millas));
	return 0;
}