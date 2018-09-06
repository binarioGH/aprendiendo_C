#include <stdio.h>
struct alumn{
	char name[10];
	int grades;
}alumns[3];
int main(){
	int i, max = 0;
	for(i=0;i<3;i++){
		fflush(stdin);
		printf("Ingresa el nombre del alumno: ");gets(alumns[i].name);
		printf("Ingresa el promedio de %s: ",alumns[i].name);scanf("%i", &alumns[i].grades);
	}
	for(i=0;i<3;i++){
		if(alumns[i].grades >= max){
			max = alumns[i].grades;
		}
	}
	printf("\nPromedio mas alto: %i", max);
	return 0;
}