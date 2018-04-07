/*  https://www.youtube.com/watch?v=5rbUC6sGf4I
 este ejercicio será una fución entre calif.c y el vídeo correspondiente al link de youtube que dejé
*/
#include <stdio.h>
int main(){
	int n1, n2, n3, n4, total, rtotal;
	char name[50];
	printf("introduzca su nombre: ");
	gets(name);
	printf("introduzca los 4 valores de sus notas: ");
	scanf("%i %i %i %i",&n1,&n2,&n3,&n4);
	total = n1 + n2 + n3 + n4;
	rtotal = total / 4;
	printf("el promedio de %s es: %i",name, rtotal);
	return 0;
}
