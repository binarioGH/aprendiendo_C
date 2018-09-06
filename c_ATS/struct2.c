#include <stdio.h>
struct corredor{
	char nombre[20];
	char sexo[10];
	int edad;
	char club[15];

}runner;

int main(){
	fflush(stdin);
	printf("\nIngresa el nombre del corredor: ");gets(runner.nombre);
	printf("\nIngresa su sexo: ");gets(runner.sexo);
	printf("\nIngresa su edad: ");scanf("%i", &runner.edad);
	if(runner.edad < 18){
		printf("\nNo puede competir.");
	}
	else if(runner.edad >= 18 && runner.edad < 40){
		printf("\nCategoria: Juvenil.");
	}
	else if(runner.edad >= 40 && runner.edad < 60){
		printf("\nCategoria: Senior.");
	}
	else if(runner.edad >= 60){
		printf("\nCategoria: Veterano.");
	}

	return 0;
}