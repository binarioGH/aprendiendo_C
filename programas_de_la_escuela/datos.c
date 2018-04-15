
#include <stdio.h>

main()
{
char r1[50],r2,r3[20],r4[20];



printf("Ingrese un Nombre \n ");
scanf ("%s",&r1);
printf("Hola ");
printf ("%s \n", &r1);


printf("Eres de bachillerato o de licenciatura?  \n ");
scanf ("%s",r2);

if (r2 == 'b')
{
printf("Ingrese su especialidad: \n ");
scanf ("%s",&r3);
}
else 
{
printf("Ingrese su carrera: \n ");
scanf ("%s",&r4);
}

return 0;

}




