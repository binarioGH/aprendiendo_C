#include <stdio.h>
#include <stdlib.h>
int main(){
	int option, add, total = 100;
	while(option != 3){
		system("cls");
		printf("\tBienvenido al cajero virtual.\n");
		printf("\t1.Ingreso en cuenta.\n");
		printf("\t2.Retirar dinero.\n");
		printf("\t3.Salir.");
		printf("\n\nTotal: %i", total);
		printf("\n\n\t>>");scanf("%i", &option);
		switch(option){
			case 1:
			    printf("\nCuanto dinero desea ingresar: ");
			    scanf("%i", &add);
			    total += add;
			    break;
			case 2:
			    printf("\nCuanto dinero desea retirar?: ");
			    scanf("%i", &add);
			    total -= add;
			    break;
			default: break;
		}
	}
	return 0;
}