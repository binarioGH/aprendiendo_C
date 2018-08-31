#include <stdio.h>
int main(){
	int check = 1, count = 1, n, total = 0;
	printf("Ingresa el limite: ");scanf("%i", &n);
	while(count <= n){
		if(check == 1){
			total -= count;
			check = 0;
		}
		else{
			total += count;
			check = 1;
		}
		count ++;
	}
	printf("El total es: %i", total);
	return 0;
}