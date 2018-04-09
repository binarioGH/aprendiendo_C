// codigo basado en este vídeo: https://www.youtube.com/watch?v=GRrqJEgtpa0

#include <stdio.h>

int main(){
	int usr, num;
	for(;;){
	system("cls");
	printf("introduzca un numero entero: ");
	scanf("%i", &usr);
	system("cls");
	for (num = 0; num <= usr; num++){
		printf("%i \n",num);
	}
	getch();
	}
	return 0;
}
