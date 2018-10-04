#include <stdio.h>
void menu();
int sumar();
int restar();
int multiplicar();
int dividir();
int main(){
	menu();
	return 0;
}
void menu(){
	int d, n1, n2, t = 0;
	while(1){
		fflush(stdin);
		printf("1.Suma\n2.Resta\n3.Multiplicacion\n4.Divicion\n5.salir");scanf("%i",&d);
		printf("\nIngresa los 2 numeros: ");scanf("%i %i", &n1, &n2);
		if(d == 1){
			t = sumar(n1, n2);
		}
		else if(d == 2){
			t = restar(n1, n2);
		}
		else if(d == 3){
			t = multiplicar(n1, n2);
		}
		else if(d == 4){
			t = dividir(n1, n2);
		}
		else if(d == 5){
			break;
		}
		printf("\nEl resultado es: %i", t);
	}
}
int suma(int n1, int n2){
	return n1 + n2;
}
int resta(int n1, int n2){
	return n1 - n2;
}
int multiplicar(int n1, int n2){
	return n1 * n2;
}
int dividir(int n1, int n2){
	return (int)n1/n2;
}