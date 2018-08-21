#include <stdio.h>

int main(){
	int h, m, s;
	printf("Ingresa la cantidad de horas: ");
	scanf("%i", &h);
	m = h * 60;
	s = m * 60;
	printf("Horas: %i\nMinutos: %i\nSegundos: %i",h, m, s);
	return 0;
}