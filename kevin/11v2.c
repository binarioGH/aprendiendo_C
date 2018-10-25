#include <stdio.h>
int main(){
	//Entonces, se pueden modificar valores de otros programas usando esto...
	//Interesante AF
	int edad = 10;
	printf("Valor: %i\nDireccion: %p", edad, &edad);
	//Esta parte es un pequeño experimento, quier ver si la dirección cambia si el
	//valor cambia.
	edad = 20;
	printf("\nValor: %i\nDireccion: %p", edad, &edad);
	//nop, no cambia.
	return 0;
}