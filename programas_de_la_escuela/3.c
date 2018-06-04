#include <stdio.h>

int main(){
	float num1, num2, num3;
	printf("introduzca el primer numero: ");
	scanf("%f", &num1);
	printf("introduzca el segundo numero: ");
	scanf("%f", &num2);
	printf("introduzca el ultimo numero: ");
	scanf("%f", &num3);
	if(num1 / num2 == num3){
	printf("%.f entre %.f es igual a: %.f", num1, num2, num3);		
	}
	else{
	printf("%.f entre %.f no es igual a: %.f", num1, num2, num3);
	}
	return 0;
}
