/*cristina es una camarera y gana 7.5 dolares por hora.
haz un programa que determina cuanto gana*/
#include <stdio.h>

int main(){
	int horas;
	printf("Cuantas horas trabaj%c?: ", 162);scanf("%i", &horas);
	printf("Cristina gan%c %.2f dolares", 162, (float)horas * 7.5);
	return 0;
}