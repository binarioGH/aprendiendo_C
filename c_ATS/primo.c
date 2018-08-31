#include <stdio.h>
int main(){
	int i, max, check = 0;
	printf("Ingresa el numero: ");scanf("%i", &max);
	for(i=2;i<max; i++){
		if(max % i == 0){
			check = 1;
			break;
		}
	}
	if(check == 0){
		printf("Es primo.");
	}
	else{
		printf("No es primo.");
	}
	return 0;
}