#include <stdio.h>

int main(){
	float num1, num2;
	printf("introduce el valor del primer numero: ");
	scanf("%f",&num1);
	printf("introduce el valor del segundo numero: ");
	scanf("%f",&num2);
	printf("La suma es: %.0f",num1 + num2);
	printf("\nLa resta es: %.0f", num1 - num2);
	printf("\nLa multiplicacion es: %.0f", num1 * num2);
	printf("\nLa division es: %.0f", num1 / num2);
	return 0;
}
