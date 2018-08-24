#include <stdio.h>

int main(){
	int hours;
	printf("Introduse el numero de horas que has usado la computadora: ");
	scanf("%i", &hours);
	printf("A tu computadora le queda %.2f de bateria.", 100 - (12.5 * hours));
	return 0;
}