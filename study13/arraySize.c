#include <stdio.h>

//매크로 함수를 쓰면 타이핑을 줄일 수 있따. 그런데 쓰지 말자. 
//#define ARRAYSIZE(arr) (sizeof(arr) / sizeof(arr[0]))



int sumArray(int sums[], int count)
{
	int sum = 0;
	for(int i = 0; i < count; ++i)
		sum += sums[i];
	return sum;
}

int main(void)
{
	int nums[] = {10, 20, 30, 40, 50};
	int count = 0;
	printf("%lu\n", sizeof(nums)/sizeof(nums[0]));	// sizeof(&nums[0]) X 에외적인 경우. 
	count = sizeof(nums)/sizeof(nums[0]);
	int sum = sumArray(nums, count);
	//int sum = sumArray(nums, ARRAYSIZE(nums));
	printf("%d\n", sum);
	return 0;
}