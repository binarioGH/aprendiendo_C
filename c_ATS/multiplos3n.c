#include <stdio.h>

int main(){
	int n, count = 1;
	printf("Digita un numero: ");scanf("%i", &n);
	while(count <= n){
		(count%3==0) ? printf("\n%i es multiplo de 3.\n", count): printf("\n%i No es multiplo.", count);
		count ++;
	}
	return 0;
}