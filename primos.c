#include <stdio.h>
int main(){
	int max, i;
	printf("Ingresa el numero: ");scanf("%i", &max);
	for(i=1; i <= max - 1;i++){
		printf("%i\n", i);
		if(max%i == 0){
			printf("No es primo.");
			return 0;
		}

	}
	printf("Es primo.");
	return 0;
}