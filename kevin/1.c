//https://www.youtube.com/watch?v=YlD5SixR23w&index=2&list=PLFOSJTssMYJZmuic5tGla8O_wGXPEm00ghttps://www.youtube.com/watch?v=YlD5SixR23w&index=2&list=PLFOSJTssMYJZmuic5tGla8O_wGXPEm00g
#include <stdio.h>
int main(){
	int num, i, m;
	printf("Ingresa que tabla quieres ver: ");scanf("%i", &num);
	printf("Ingresa el hasta que numero se va a multiplicar %i: ",num);scanf("%i",&m);
	for(i = 1; i <= m;i++){
		printf("\n%i * %i = %i\n", num, i, num*i);
	}
	return 0;
}