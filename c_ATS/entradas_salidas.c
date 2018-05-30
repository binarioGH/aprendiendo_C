#include <stdio.h>

int main(){
	char x[50];
	printf("Digita tu nombre: ");
	gets(x);
	printf("Tu nombre es: %s", x);
	return 0;
}
