#include <stdio.h>

int main(){
	int year;
	printf("Ingresa el a%co: ", 164);scanf("%i", &year);
	if(year %4 == 0){
		printf("Es bisiesto.");
	}
	else{
		printf("No es bisiesto.");
	}
	return 0;
}