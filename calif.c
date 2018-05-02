#include <stdio.h>

int main(){
	float total, examen, proyecto, trabajo;
	printf("cuanto sacaste en examen? ");
	scanf("%f", &examen);
	printf("cuanto sacaste en el proyecto? ");
	scanf("%f", &proyecto);
	printf("cuanto sacaste en trabajos? ");
	scanf("%f", &trabajo);
	examen = examen * 0.4;
	proyecto = proyecto * 0.4;
	trabajo = trabajo * 0.2;
	total = examen + trabajo + proyecto;
	if (total >= 6.5 && total <= 6.9){
	total = 7;
	}
	else if(total >= 7.5 && total <= 7.9){
		total = 8;
	}
	else if(total >= 8.5 && total <= 8.9){
		total = 9;
	}
	else if(total >= 9.5 && total <= 9.9){
		total = 10;
	}
	printf("tu promedio es: %.1f \n", total);
	if (total < 5.9){
		printf("reprobaste, debes de estudiar para la proxima");
	}
	else if(total < 7){
		printf("tu promedio es suficiente para pasar, pero puedes mejorar");
	}
	else if(total < 9 && total > 7){
		printf("tu promedio no esta nada mal, sigue estudiando");
	}
	else if(total == 10){
		printf("tu promedio es perfecto");
	}
	return 0;
}
