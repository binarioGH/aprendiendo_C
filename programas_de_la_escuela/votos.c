#include <stdio.h>
#include <ctype.h>
// programa que simula ser una encuesta para elegir a un representante politico.
int main(){
	int meade = 0, anaya = 0, amlo = 0, contador_for;
	char decidir;
	for(contador_for = 0; contador_for < 5;contador_for +=1 ){
		system("cls");
		printf("por quien vas a votar? \n");
		printf("encuestados: %i \n", contador_for);
		printf("A. Meade \n");
		printf("B. Anaya \n");
		printf("C. AMLO \n");
		printf("Tu respuesta: ");
		scanf("%c", &decidir);
		decidir = toupper(decidir);
		switch(decidir){
			case 'A': meade +=1; break;
			case 'B': anaya += 1; break;
			case 'C': amlo += 1; break;
			default: contador_for -= 1;
		}
	}
	printf("terminaron las encuestas... \n");
	printf("Meade: %i \n", meade);
	printf("Anaya: %i \n", anaya);
	printf("AMLO: %i \n", amlo);

}
