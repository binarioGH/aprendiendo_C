/* programa que trabaja con macros, variable locales y globales.
basado en este vídeo: https://www.youtube.com/watch?v=nWB0Ccose8Y */
#include <stdio.h> 	// libreria
#define PI 3.1416 // macro

int y  = 5; // variable global

int main(){ // funcion principal
    int dec; // variable local
    int x = 10;
	printf("escoge 1 para que la suma sea entera y 0 para decimal 1/0: ");
	scanf("%i", &dec);
    if(dec == 1){
		int suma = PI + x;
		printf("la suma es: %i", suma);
	}
    else if(dec == 0)
	{
		float suma = PI + x; 
		printf("la suma es: %.2f",suma);
	}
	else{
		printf("esa opcion no existe.");
	}

	return 0; 
}
