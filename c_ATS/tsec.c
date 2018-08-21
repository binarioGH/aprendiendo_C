#include <stdio.h>

int main(){
	int h, m, s, total;
	printf("Ingresa el numero de horas: ");
	scanf("%i", &h);
	printf("Ingresa el numero de minutos: ");
	scanf("%i", &m);
	printf("Ingresa el numero de segundos: ");
	scanf("%i", &s);
	h = (h * 60) * 60;
	m = m * 60;
	total = h + m + s;
	printf("El total de segundos es: %i.", total);
	return 0;
}