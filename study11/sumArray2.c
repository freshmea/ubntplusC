#include <stdio.h>

// int sumArray(const int *pArray, int size)
int sumArray(int pArray[], int size)
{
	int sum = 0;
	for (int i=0;i<size;i++){
		sum += pArray[i];
	}
	return sum;
}

//함수로 배열 전달.
int main(void)
{
	int nums[] ={14, 25, 36, 47, 58, 54, 34, 65, 34, 97};

	int sum = sumArray(nums, sizeof(nums)/sizeof(int)); // sumArray(&nums[0])
	printf("sum : %d\n", sum);

	sum = sumArray(nums+5, 5); // sumArray(&nums[0])
	printf("sum : %d\n", sum);
	return 0;
}