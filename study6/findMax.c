#include <stdio.h>

int main(void)
{
	int nums[10]= {40, 20, 52, 12, 34, 64, 94, 85, 71, 4}; //초기화 리스트 

	int max;
	max = nums[0];
	for (int i =1; i<10; ++i){
		if (max < nums[i]){
			max = nums[i];
		} else {
			max = max;
		}
	}

	printf("max : %d\n", max);
	return 0;
}