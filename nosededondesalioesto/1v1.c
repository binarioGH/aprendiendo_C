#include <stdio.h>
int main(){
	int n = 10;
	int *pn = &n;
	printf("V: %i\nD: %p", *pn, &n);
	return 0;
}