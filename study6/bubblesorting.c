#include <stdio.h>

int main(void)
{
	int nums[10]= {40, 20, 52, 12, 34, 64, 94, 85, 71, 4}; //초기화 리스트 

	// sorting
	// i 버블이 올라오는 위치
	for (int i = 9; i>=1; --i){
		for (int j = 0; j < i; ++j){
			if (nums[j] > nums[j+1]){
				int tmp = nums[j];
				nums[j] = nums[i];
				nums[i] = tmp;
			}
		}
	}

	for(int i=0;i<10;++i){
		printf("%d ", nums[i]);
	}
	printf("\n");
	return 0;
}