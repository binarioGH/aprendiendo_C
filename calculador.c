// este programa es una calculadora basica.
#include <stdio.h>
int main(){
	int select, n1, n2, ans;
	printf("decide que operacion quieres hacer: \n [0]suma \n [1]resta \n [2]division \n [3]multiplicacion \n >");
	scanf("%i", &select);
	if(select > 3 ){
		printf("\n \n esa opcion no existe");
		return 0;
	}
	printf("introduce el primer valor: ");
	scanf("%i",&n1);
	printf("ahora el segundo: ");
	scanf("%i",&n2);
	if(select == 0){
		ans = suma(n1, n2);
		printf("\n \n la respuesta es %i",ans);
		getch();
	}
	else if(select == 1){
		ans = resta(n1, n2);
		printf("\n \n la respuesta es %i",ans);
		getch();
	}
	else if(select == 2){
		ans = div(n1, n2);
		printf("\n \n la respuesta es %i", ans);
		getch();
	}
	else if(select == 3){
		ans = mult(n1, n2);
		printf("\n \n la respuesta es %i", ans);
		getch();
	}
	return 0;
}
int suma(num1, num2){
	int answ = num1 + num2;
	return answ;
}
int resta(num1, num2){
	int answ = num1 - num2;
	return answ;
}
int div(num1, num2){
	int answ = num1 / num2;
	return answ;
}
int mult(num1, num2){
	int answ = num1 * num2;
	return answ;
}
