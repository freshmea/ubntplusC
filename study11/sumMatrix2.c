#include <stdio.h>

// int sumArray(const int *pArray, int size)
int sumMatrix(int *pM, int n, int m)
{
	int sum = 0;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			sum += *(pM+i+i*j); // *(*(pM+i)+j)
		}
	}
	return sum;
}

//함수로 배열 전달.
int main(void)
{
	// int nums[][4] ={1,2,3,4,5,6,7,8,9,10,11,12 };
	int nums[3][4] ={{14, 25, 36, 47}, {58, 54, 34, 65}, {34, 97, 35, 67}};
	printf("%ld %ld\n", sizeof(nums)/sizeof(int), sizeof(nums[0])/sizeof(int));
	int sum = sumMatrix(nums[0], (sizeof(nums)/sizeof(int))/(sizeof(nums[0])/sizeof(int)), sizeof(nums[0])/sizeof(int)); // sumArray(&nums[0])
	printf("sum : %d\n", sum);

	return 0;
}