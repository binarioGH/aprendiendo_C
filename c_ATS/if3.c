#include <stdio.h>
int main(){
	int num;
	printf("Ingresa un numero: ");
	scanf("%i", &num);
	if(num < 0){
		printf("Es negativo.");
	}
	else{
		printf("Es positivo");
	}
	return 0;
}