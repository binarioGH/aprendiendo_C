#include <stdio.h>
int main(){
	int num;
	printf("Ingreza un numero: ");
	scanf("%i", &num);
	if(num == 2){
		printf("El numero es 2\n");
	}
	else if(num != 2){
		printf("El numero no es 2\n");
	}
	if(num > 5 && num < 10){
		printf("el numero es mayor a 5");
	}
	else if(num <= 5 ){
		printf("El numero es menor o igual a 5");
	}
	else if(num >= 10){
		printf("El numero es mayor o igual a 10");
	}
	return 0;
}