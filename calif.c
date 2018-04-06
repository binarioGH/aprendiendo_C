#include <stdio.h>
void main(){
    int calif1, calif2, calif3, calif4, total, total2;
    printf(" introduzca el valor de la primera nota: ");
    scanf("%i", &calif1);
    printf("\n introduzca el valor de la segunda: ");
    scanf("%i", &calif2);
    printf("\n introduzca el valor de la tercera: ");
    scanf("%i", &calif3);
    printf("\n introduzca el valor de la cuarta: ");
    scanf("%i", &calif4);
    total = calif1 + calif2 + calif3 + calif4;
    total2 = total / 4;
    printf("el promedio es: %i",total2);
}
