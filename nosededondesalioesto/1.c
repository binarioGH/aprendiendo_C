//https://www.youtube.com/watch?v=5BpYD7TxvKU
#include <stdio.h>
int main(){
	int num = 195;
	char prueba = 'a';
	float n = 10.5;
	printf("%p\n%p\n%p", &num, &prueba, &n);

	return 0;
}