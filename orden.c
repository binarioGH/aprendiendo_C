#include <stdio.h>
int main(){
	int nums[3], i, max = 0, min = 0, mid = 0;
	printf("Ingresa un numero: ");scanf("%i", &nums[0]);
	printf("Ingresa otro numero: ");scanf("%i", &nums[1]);
	printf("Ingresa un numero:  ");scanf("%i", &nums[2]);
	for(i=0;i < 3; i++){
		if(nums[i] >= max){
			max = nums[i];
		}
		else if(nums[i] < max && nums[i] < mid){
			min = nums[i];
		}
		else if(nums[i] > min && nums[i] < max){
			mid = nums[i];
		}
		printf("%i: %i, %i, %i\n", nums[i], min, mid,max);
	}
	printf("%i, %i, %i", min, max, mid);
	return 0;
}