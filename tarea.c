#include <stdio.h>
int main(){
	int i, count = 1;
	float p1 = 119.99, p2 = 49.99;
	printf("Ingresa por cuantos meses vas a estar inscrito: ");scanf("%i", &i);
	while(count < i){
		p1 += 39.99;
		p2 += 44.99;
		printf("---------");
		printf("\nMes %i\nPlan 1: %.2f\nPlan 2: %.2f\n", count, p1, p2);
		count++;
	}
	return 0;	
}