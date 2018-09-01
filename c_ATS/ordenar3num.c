#include <stdio.h>
void ordenate(int n1,int n2,int n3){
	int max = 0, i, nums[3] = {n1, n2, n3};
	for(i=0;i<=3;i++){
		if(nums[i] >= max){
			max = nums[i];
		}
	}
	printf("El mayor es: %i", max);
}

int main(){
	int n[3];
	printf("Ingresa los 3 numeros: ");scanf("%i %i %i", &n[0], &n[1],&n[2]);
	ordenate(n[0], n[1], n[2]);
	return 0;
}

