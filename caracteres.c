// en este programa voy a hacer algunos experimentos con caracteres
#include <stdio.h>

int main(){
	char name[50];
	printf("introduzca su nombre: ");
	gets(name);
	printf("tu nombre es: %s",name);
	return 0;

}
