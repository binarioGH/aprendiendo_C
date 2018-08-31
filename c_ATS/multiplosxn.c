#include <stdio.h>
//versión mejorada del programa multiplos3n.c
int main(){
	int n, count, min;
	printf("Ingresa el numero del que se buscaran multiplos: ");scanf("%i", &min);
	printf("Ingresa hasta que numero se va a buscar: ");scanf("%i", &n);
	count = min;
	while(count <= n){
	    (count%min==0) ? printf("\n%i es multiplo de %i\n",count, min):printf("%i No es multiplo.\n", count);
        count ++;		
	}
	return 0;
}