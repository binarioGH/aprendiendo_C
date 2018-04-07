// este programa es un reto que aparece en: https://www.youtube.com/watch?v=5rbUC6sGf4I
#include <stdio.h>
int main(){
    float f, c;
    printf("introduzca los grados celsius: ");
    scanf("%f",&c);
    f = 1.8;
    f *= c;
    f += 32;
    printf("el resultado es: %.1f",f); 
	return 0;
}
