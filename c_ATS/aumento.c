#include <stdio.h>

int main(){
	float inicial, total;
	printf("Ingresa tu salario inicial: ");
	scanf("%f", &inicial);
	total = inicial * 0.25;
	total += inicial;
	printf("Tu nuevo salario es: %.2f", total);
}