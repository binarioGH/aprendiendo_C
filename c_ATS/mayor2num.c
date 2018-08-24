#include <stdio.h>
int main(){
	int n1, n2;
	printf("Ingresa 2 numeros: ");scanf("%i %i",&n1, &n2);
	if(n1 < n2){
		printf("%i",n2);
	}
	else if(n1 > n2){
		printf("%i", n1);
	}
	else{
		printf("Son iguales.");
	}
	return 0;
}