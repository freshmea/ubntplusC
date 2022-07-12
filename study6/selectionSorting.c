#include <stdio.h>

int main(void)
{
	int nums[10]= {40, 20, 52, 12, 34, 64, 94, 85, 71, 4}; //초기화 리스트 

	// sorting
	for (int i =0; i<10-1; ++i){
		for (int j = i + 1; j < 10; ++j){
			if (nums[i] > nums[j]){
				int tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
			}
		}
	}

	for(int i=0;i<10;++i){
		printf("%d ", nums[i]);
	}
	printf("\n");
	return 0;
}