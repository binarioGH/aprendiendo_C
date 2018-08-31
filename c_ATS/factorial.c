#include <stdio.h>
int main(){
	int num, i, total = 1;
	printf("Ingresa el numero: ");scanf("%i", &num);
	for(i=1; i<=num; i++){
		total *= i;
	}
	printf("%i", total);
	return 0;
}