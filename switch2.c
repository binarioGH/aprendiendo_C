// codigo basado en: https://www.youtube.com/watch?v=UbkRifnA0FU
#include <stdio.h>

int main(){
	char vocal;
	printf("introduce una vocal: ");
	scanf("%c", &vocal);
	switch(vocal){
		case 'a': printf("escogiste a");break;
		case 'e': printf("escogiste e");break;
		case 'i': printf("escogiste i");break;
		case 'o': printf("escogiste o");break;
		case 'u': printf("escogiste u");break;
		default: printf("%c no es una vocal", vocal);
	}
	return 0;
}
