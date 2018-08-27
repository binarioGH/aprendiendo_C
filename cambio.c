#include <stdio.h>

int main(){
	int he, hs, iap, dinero, total, i, mi;
	int monedas[7] = {100, 50, 20, 10, 5, 2 ,1};
	printf("Hora de entrada: ");scanf("%i", &he);
	printf("Hora de salida: ");scanf("%i", &hs);
	iap = hs - he;
	printf("Horas de servicio: %i", iap);
	iap = iap * 18;
	printf("\n\nIngreso a pagar: %i\n", iap);
	printf("Ingrese dinero: ");scanf("%i", &dinero);
	total = dinero - iap;
	printf("\n\n Cambio: %i\n", total);
	for(i=0;i < 7; i++){
		mi = (int)(total / monedas[i]);
		printf(" $%i %i\n", monedas[i], mi);
		total = total - (mi * monedas[i]);
	}
	return 0;
}