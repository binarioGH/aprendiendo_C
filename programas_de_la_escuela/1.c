 #include <stdio.h>
 
 int main(){
 	int num;
 	printf("Introduce un numero: ");
 	scanf("%i", &num);
 	if(num < 100){
 		printf("%i es menor a 100", num);
	 }
	else if (num == 100){
		printf("escogiste 100");
	}
	else{
		printf("%i es mayor a 100",num);
	}
 	return 0;
 }
