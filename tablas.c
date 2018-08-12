#include <stdio.h>


int main(){
	int i, e;
	for(i=1;i < 11; i++){
		for(e=1; e < 11; e++){
			printf("%i * %i es %i\n",i, e, i*e);
		}
	}
	return 0;
}