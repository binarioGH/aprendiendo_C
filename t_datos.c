// tipos de datos: https://www.youtube.com/watch?v=TRwuPth2_P4
#include <stdio.h>

//prototipos
void tipod(rango, bytes);

int main(){
	int dato;
	printf("de que tipo de dato quieres tener mas info? \n [0]char \n [1]short \n [2]int \n >");
	scanf("%d", &dato);
	if(dato == 0){
		tipod(0, 255, 1);
	}
	else if(dato == 1){
		tipod(-128, 127, 2);
	}
	else if(dato == 2){
		tipod(-32768, 32767, 2);
	}

	return 0;
}
void tipod(rango, rango2, bytes){
	printf("\n pesa: %i",bytes);
	printf("\n rango de: %i a %i", rango, rango2);
}