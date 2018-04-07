// programa para sacar la hipotenusa de un triangulo rectangulo
#include <stdio.h>
#include <math.h>


int main(){
	float a, b, c;
	printf("introduzca el valor de los 2 catetos: ");
	scanf("%f %f",&a, &b);
	a *= a;
	b *= b;
	c = a + b;
	c = sqrt(c);
	printf("\nel resultado es: %.1f", c);
	return 0;
}
