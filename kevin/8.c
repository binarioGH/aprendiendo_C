#include <stdio.h>
#include <stdlib.h>

int main(){
	int t = 100, des = 98, s;
	char pausa[5];
	while(des != 99){
		
		system("cls");
		printf("Cajero Automatico virtual\n");
		printf("\n1.Ingresar dinero\n2.Retirar dinero\n3.Consultar saldo\n99.Salir\n");
		printf(">>>");scanf("%i", &des);
		fflush(stdin);
		if(des != 99 && des != 3){
			printf("\nIngresa cuanto: ");scanf("%i", &s);
		}
		switch(des){
			case 1:
			    t += s;break;
			case 2:
			    t-= s;break;
			case 3:
			    printf("\nDinero: %i\nPresiona enter para continuar...", t);gets(pausa);break;
			default:continue;
		}

	}

	return 0;
}