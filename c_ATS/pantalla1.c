#include <stdio.h>
#include <stdlib.h>

int main(){
	char tecla;
	printf("Ingrese 1 para limpiar la pantalla: ");scanf("%c", &tecla);
	if(tecla == '1'){
		system("cls");
	}
	return 0;
}