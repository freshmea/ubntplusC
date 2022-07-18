#include <stdio.h>

int main(void)
{
	int nums[] = {1, 2, 3, 4, 5};
	int nums2[5];

	// nums2 = nums; // 100 = 200; 의 의미라서 에러가 난다. 
	for (int i=0;i<6;++i){
		nums2[i] = nums[i];
	}



	for(int i=0; i<5;i++)
		printf("%d\n", nums2[i]);
	printf("\n");
	printf("%p", nums);
	return 0;

}