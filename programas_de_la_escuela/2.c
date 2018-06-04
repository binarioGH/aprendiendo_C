#include <stdio.h>

int main(){
	int num1, num2, num3;
	printf("introduzca el primer numero: ");
	scanf("%i", &num1);
	printf("introduzca el segundo numero: ");
	scanf("%i", &num2);
	printf("introduzca el ultimo numero: ");
	scanf("%i", &num3);
	if(num1 + num2 == num3){
	printf("%i + %i es igual a: %i", num1, num2, num3);		
	}
	else{
	printf("%i + %i no es igual a: %i", num1, num2, num3);
	}
	return 0;
}
