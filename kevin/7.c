#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand (time(NULL));
	int dinero = rand()%(301-100);
	int des;
	char productos[5][10] = {"Arroz", "Jamon", "Atun", "Platano", "Chocolate"};
	int costo[5] = {5, 10, 20, 15, 12}, i;

	do{
		system("cls");
		printf("Fondo: %i", dinero);
		for(i=0;i < 5;i++){
			printf("\n%i: %s $%i", i, productos[i],costo[i]);
		}
		printf("\n100. Salir.\n");
		printf("\nQue producto desea comprar?: ");scanf("%i", &des);
		if(des >= 5){continue;}
		else{
			dinero -= costo[des];
		}

	}while(des != 100);

	return 0;
}