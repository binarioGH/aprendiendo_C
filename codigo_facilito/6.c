#include <stdio.h>
int main(){
	char a = 'c'; //1 byte, rango: 0 .. 255
	int  b = 1; //2 bytes, rango -32768 .. 32767
	short c = 1;// 2 bytes, rango -128 .. 127
	unsigned int d = 1; // 2 bytes, rango 0..65525
	long e = 1212;//4 bytes -2147483648..2147483647
	float f = 1.0; //4 bytes
	double g = 8.0;//8 bytes
	printf("%c\n", a);
	printf("%i\n", b);
	printf("%i\n", c);
	printf("%i\n", d);
	printf("%li\n", e);
	printf("%f\n", f);
	printf("%lf\n", g);
	return 0;
}