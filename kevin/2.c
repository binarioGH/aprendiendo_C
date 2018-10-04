void menu();
void sumar(int na, int nb, int mlt);
void multiplicar(int na, int nb);
void dividir(int na, int nb);

#include <stdio.h>

int main(){
	menu();
	return 0;
}

void menu(){
	int opt, n1, n2;
	printf("\n\n\n1: sumar\n2: restar\n3: multiplicar\n4: dividir\n>>>>");
	scanf("%i", &opt);
	printf("\nIngresa el primer numero: ");scanf("%i", &n1);
	fflush(stdin);
	printf("\nIngresa el segundo numero: ");scanf("%i", &n2);
	switch(opt){
		case 1:sumar(n1, n2, 1);break;
		case 2:sumar(n1,n2, -1);break;
		case 3:multiplicar(n1,n2);break;
		case 4:dividir(n1,n2);break;
		default: fflush(stdin);menu();
	}

}
void sumar(int na, int nb, int mlt){
	printf("El resultado es: %i", na + (nb*mlt));
}
void multiplicar(int na, int nb){
	printf("El resultado es: %i", na * nb);
}
void dividir(int na, int nb){
	printf("El resultado es: %.2f", (float)na / (float)nb);
}