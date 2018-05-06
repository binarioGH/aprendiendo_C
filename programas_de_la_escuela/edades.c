#include <stdio.h>


int main(){
	int edad;
	char nombre[20];
	printf("introduzca su nombre: ");
	scanf("%s", &nombre);
	printf("Introduzca su edad: ");
	scanf("%i", &edad);
	if(edad <= 3){
		printf("%s es un/a bebe", nombre);
	}
	else if(edad > 3 && edad < 15){
	printf("%s es un/a nino/a", nombre);
	}
	else if(edad >= 15 && edad < 18){
		printf("%s es un/a adolecente", nombre);
	}
	else if(edad >= 18 && edad <30){
		printf("%s es un/a joven", nombre);
	}
	else if(edad >= 30 && edad < 60){
		printf("%s es un adulto", nombre);
	} 
	else if(edad >= 60){
		printf("%s es un adulto mayor", nombre);
	}
	return 0; 
}


