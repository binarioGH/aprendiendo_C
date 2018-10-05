#include <stdio.h>
#include <stdlib.h>

int main(){
	int random = rand() % 51;
	int num;
	do{
		printf("\nIngresa un numero: ");scanf("%i", &num);
		if(num > random){
			printf("\n%i es mayor a el numero.", num);
		}
		else if(num < random){
			printf("\n%i es menor a el numero.", num);
		}
		else{
			printf("Bien, adivinaste que el numero es %i", random);
		}
		fflush(stdin);
	}while(random != num);
	
	return 0;
}