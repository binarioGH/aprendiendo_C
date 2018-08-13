#include <stdio.h>

int main(){
	int horas;
	float dph;
	printf("Ingresa cuantas horas trabajas:  ");
	scanf("%i", &horas);
	printf("Ingresa cuanto ganas por hora: ");
	scanf("%f", &dph);
	dph = dph * (float)horas;
	printf("Ganas: %.2f al dia.", dph);
	return 0;
}