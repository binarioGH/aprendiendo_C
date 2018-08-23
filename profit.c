#include <stdio.h>
int main(){
	int nc, ns, total;
	printf("Ingresa el numero de papas que vendi%c Alexis: ", 162);scanf("%i",&nc);
	printf("Ingresa el numero de sodas que vendi%c: ", 162);scanf("%i", &ns);
	total = (nc + (ns * 2)) - 50;
	printf("Tiene %i", total);
	return 0;
}