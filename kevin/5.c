#include <stdio.h>
#include <stdlib.h>
struct alumno{
	int edad;
	int promedio;

}alumnos[7];
int main(){
	int cantidad, i, n;
	char names[7][10] = {"Juan", "Max", "Julia", "Pablo", "Alejandra", "Regina", "Angel"};
	printf("Ingrese la cantidad de alumnos: ");scanf("%i", &cantidad);
	for(i=0;i<cantidad-1;i++){
		alumnos[i].edad = rand() % 12 + 18;
		alumnos[i].promedio = rand() % 10;
		printf("----------\nNombre: %s\nEdad: %i\nPromedio: %i\n", names[i], alumnos[i].edad,alumnos[i].promedio); 
	}
	return 0;
}