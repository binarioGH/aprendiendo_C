#include <stdio.h>

int main(){
	float total, des;
	printf("Ingresa cuanto compraste: ");
	scanf("%f", &total);
	des = total * 0.15;
	total = total - des;
	printf("el total es: %.2f\nahorraste %.2f", total, des);

	return 0;
}