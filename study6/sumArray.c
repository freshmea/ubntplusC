#include <stdio.h>

int main(void)
{
	int nums[10]= {40, 20, 52, 12, 34, 64, 94, 85, 71, 4}; //초기화 리스트 

	int sum = 0;
	for (int i=0;i<10;++i){
		sum += nums[i];
	}
	printf("sum : %d\n", sum);

	return 0;
}