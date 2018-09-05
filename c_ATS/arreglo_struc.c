#include <stdio.h>

struct persona{
	char nombre[20];
	int edad;
}personas[5];
int main(){
	int i;
	for(i=0;i<5;i++){
		printf("%i)Ingresa tu nombre: ", i+1);gets(personas[i].nombre);
		printf("Ingresa tu edad: ");scanf("%i", &personas[i].edad);
		fflush(stdin);
	}
	for(i=0;i<5;i++){
		printf("Nombre: %s | Edad: %i\n",personas[i].nombre, personas[i].edad);
	}

	return 0;
}