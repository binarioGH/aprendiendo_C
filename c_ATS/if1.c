#include <stdio.h>
int main(){
	int num1, num2;
	printf("Ingresa 2 numeros: ");scanf("%i %i", &num1, &num2);
	if(num1%num2 == 0){
		printf("El resuido de la divicion entre %i y %i es igual a 0", num1, num2);
	}
	return 0;
}