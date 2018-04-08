// programa que muestra una secuencia del 0 al 11 coun un while y luego deciende a 0
#include <stdio.h>
int main(){
	int count = 0;
	while(count <= 10){
		printf("la cuenta va en: %i \n", count);
		count += 1;
	}
	while(count >= 0){
		printf("la cuenta va en: %i \n", count);
		count -= 1;
	}
	return 0;
}
