#include <stdio.h>
int main(){
	int num = 40, *pnum = &num;
	printf("Valor de la variable: %i ", *pnum);
	printf("\n2: %p", &num);
	return 0;
}