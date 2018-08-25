#include <stdio.h>
#include <strings.h>

int main(){
	char name[20];
	int edad, sexo;
	printf("Ingresa tu nombre: ");gets(name);
	printf("Ingresa 1 si eres mujer y 2 si eres hombre");scanf("%i", &sexo);
	printf("Ingresa tu edad: ");scanf("%i", &edad);
	if(edad >= 18 && sexo == 2){
		printf("Eres hombre mayor de edad.");
	}
	else{
		printf("No eres hombre mayor de edad.");
	}

	return 0;
}