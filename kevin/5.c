#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct alumno{
	char name[20];
	int edad;
	int promedio;
}alumnos[50];
	int main(){
	srand (time(NULL));
	int cantidad, i, n;
	char names[7][10] = {"Juan", "Max", "Julia", "Pablo", "Alejandra", "Regina", "Angel"};
	char lstnames[5][10] = {"Perez", "Gonzales", "Martinez", "Rodriguez", "Contreras"};
	printf("Ingrese la cantidad de alumnos: ");scanf("%i", &cantidad);
	for(i=0;i<cantidad;i++){
		snprintf( &( alumnos[i].name ), sizeof( alumnos[i].name ), "Nombre: %s %s",names[rand( ) % 8], lstnames[rand( ) % 6] );
		alumnos[i].edad = rand() % 12 + 19;
		alumnos[i].promedio = rand() % 11;
		printf("\n----------\nNombre: %s\nEdad: %i\nPromedio: %i\n",alumnos[i].name, alumnos[i].edad,alumnos[i].promedio); 
	}
	return 0;
}