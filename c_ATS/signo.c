#include <stdio.h>
#include <string.h>
int main(){
	char name[20], sign[20];
	printf("Ingresa tu nombre: ");gets(name);
	printf("Ingresa tu signo: ");gets(sign);
	if(strcmp(sign, "aries") == 0){
		printf("%s es aries.", name);
	}
	else{
		printf("%s no es aries.", name);
	}
	return 0;
}