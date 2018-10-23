#include <stdio.h>

int main(){
	int des, top, i, max = 0;
	printf("Ingresa 1 para sumar pares y 0 para impares:");scanf("%i", &des);
	printf("Ingresa cuantas veces se va a sumar: ");scanf("%i", &top);
	for(i = 1;i<top;i++){
		if(top == 1){
			if(i%2 == 0){
				max += i;
			}
		}
		else{
			if(i%2 == 0){
				continue;
			}
			else{
				max += i;
			}
		}
	}
	printf("El resultado es: %i", max);
	return 0;
}