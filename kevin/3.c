#include <stdio.h>
#include <windows.h>
void stop(int n);
int main(){
	int det, i, h= 0 , m= 0,s = 0 ;
	printf("Ingresa por cuantos segundos va a estar activo el cronometro (segundos): ");scanf("%i", &det);
    for(i = 0;i<det; i++){
    	printf("\n%i-%i-%i\n",h,m,s);
    	if(s == 60){
    		m += 1;
    		s = 0;
    	}
    	if(m == 60){
    		h+= 1;
    		m = 0;
    	}
    	stop(1);
    	s ++;
    }
}

void stop(int n){
	Sleep(n*1000);
}