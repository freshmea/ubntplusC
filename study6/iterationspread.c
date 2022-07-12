#include <stdio.h>

int main(void)
{
	int nums[10]= {40, 20, 52, 12, 34, 64, 94, 85, 71, 4};
	int sum;
	while(1){
		//최적화 기법 iteration spread.
		for(int i =0;i<10;i+=2){
			sum = nums[i]+nums[i+1];
		}

		printf("sum : %d -- \n", sum);
		}
	return 0;
}