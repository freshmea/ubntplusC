#include <stdio.h>

int main(void)
{
	int nums[] = {1, 2, 3, 4, 5};
	int *p;

	p = nums;	// p =&nums[0];
	p = p;
	*(p+1) = *(p+2);
	(p) = (p+1);
	// 포인터와 배열의 같은 표현 식. 
	for (int i = 0; i<5; ++i){
		printf("nums[%d] : %d\t", i, nums[i]);
		printf("*(p+%d) : %d\t", i, *(p+i));
		printf("*(nums+%d) : %d\t", i, *(nums+i));
		printf("p[%d] : %d\n", i, p[i]);
	}

	for (int i = 0; i<5; ++i){
		printf("nums[%d] : %p\t", i, nums);
		printf("*(p+%d) : %p\t", i, (p+i));
		printf("*(nums+%d) : %p\t", i, (nums+i));
		printf("p[%d] : %p\n", i, &p[i]);
	}

	return 0;
}