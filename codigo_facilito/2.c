#include <stdio.h>

int main(){
	int num1, num2, resultado;
	printf("Ingrese el primer valor: ");
	scanf("%d", &num1);
	printf("Ahora el segundo numero: ");
	scanf("%d", &num2);
	resultado = num1 + num2;
	printf("El resultado es: %d", resultado);
	return 0;
}