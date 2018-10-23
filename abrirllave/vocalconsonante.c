#include <stdio.h>
#include <ctype.h>

int main(){
	char letra;
	printf("Ingresa una letra: ");scanf("%c", &letra);
	letra = tolower(letra);
	printf("%c\n",letra);
	if(letra != 'a'&&letra != 'e'&&letra != 'i'&&letra != 'o'&&letra != 'u'){
		printf("Es una consonante.");
	}
	else{
		printf("Es una vocal.");
	}
	return 0;
}