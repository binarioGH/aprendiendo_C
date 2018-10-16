#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sr(int num1, int num2, int n);

int main(){
	srand(time(NULL));
	int n1, n2, resp = -1, ans, sign;
	char ops[4][1] = {'+', '-', '/', '*'}, op, enter[1];
	while(resp != 2001){
		system("cls");
		sign = rand()%(2+0);
		if(sign == 1){
			op = '-';
		}
		else{
			op = '+';
		}
		n1 = rand()%(1001+1);n2 = rand()%(1001+1);
		printf("Para salir ingrese 2001.\n");
		printf("\n%i %c %i", n1, op, n2);
		printf("\n>>");scanf("%i", &resp);
		if(op == '-'){
			ans = sr(n1, n2, -1);
		}
		else{
			ans = sr(n1, n2, 1);
		}
		if(ans == resp){
			printf("\nCorrrecto :)\nIngresa enter para continuar...");gets(enter);
		}
		else{
			printf("\nIncorrrecto :(\nLa respuesta es %i\nIngresa enter para continuar...", ans);gets(enter);
		}
		fflush(stdin);
	}
	return 0;
}
int sr(int num1, int num2, int n){
	return num1 + (num2 * n);
}
