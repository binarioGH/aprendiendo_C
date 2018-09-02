#include <stdio.h>
struct persona{
	char nombre[20];
	int edad;
}persona1;
int main(){
	printf("Ingresa tu nombre: ");gets(persona1.nombre);
	printf("Ingresa tu edad: ");scanf("%i", &persona1.edad);
	printf("Tu nombre es %s u tu edad es %i", persona1.nombre, persona1.edad);
	return 0;
}