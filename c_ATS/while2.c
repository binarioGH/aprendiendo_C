#include <stdio.h>

int main(){
	int n, count = 0, total = 0;
	printf("Ingresa el maximo: ");scanf("%i",&n);
	while(count <= n){
		total += count;
		count ++;
	}
	printf("%i", total);
	return 0;
}