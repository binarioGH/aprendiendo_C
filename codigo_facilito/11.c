#include <stdio.h>

int main(){
	int num;
	printf("Ingresa un numero: ");
	scanf("%i", &num);
	switch(num){
		case 1:
		printf("Escogiste el primer caso");
		break;
		case 2:
		printf("Escogiste el segundo caso");
		break;
		default:
		printf("No se que escogiste");
		break;
	}
}