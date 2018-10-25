#include <stdio.h>

int main(){
	int edad = 10;
	printf("Direccion en memoria de la variable EDAD: %p", &edad);
	printf("\nOPC1 para imprimir el valor de la variable: %i", edad);
	int * p_numero;
	p_numero = &edad;
	printf("\nEl valor de la variable de tipo puntero es de: %i", *p_numero);
	return 0;
}