#include <stdio.h>

struct persona{
    char nombre[20];
    int edad;	
}persona1 = {"Diego", 16}, persona2 = {"Maria", 25};

int main(){
	printf("Tu nombre es %s y tu edad es %i", persona1.nombre, persona1.edad);
	printf("\nSu edad es %s y su edad es %i", persona2.nombre, persona2.edad);
	return 0;
}