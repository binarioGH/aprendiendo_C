#include <stdio.h>
int main(){
	int n[10] = {1,2,3,4,4,7,8,9,5,4}, i;
	int *p_n;
	p_n = n;
	for(i=0;i<10;i++){
		printf("\nDato n[%i]: %i\nPosicion: %p",i, *p_n, p_n);
		p_n++;
	}
	return 0;
}