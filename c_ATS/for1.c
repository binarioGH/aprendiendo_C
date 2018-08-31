#include <stdio.h>
int main(){
	int i, total=0;
	for(i=1;i <= 10; i++){
		if(i%2 == 0){
			total += i;
		}
	}
	printf("Total: %i", total);
	return 0;
}