#include <stdio.h>
int main(){
	int n1=0, n2=1, t, m, i;
	printf("Ingresa el maximo: ");scanf("%i", &m);
	for(i=0;i < m; i++){
		printf("%i\n", n1);
		t = n1 + n2;
		n1 = n2;
		n2 = t;
	}
	return 0;
}