#include <stdio.h>
int main(void)
{
	int nums1[50] = {1, 2, 3, 4, 5};   // 1
	int nums2[] = {1, 2, 3, 4, 5};    // 2
	int nums3[10] = {1, 2, 3, 4, 5};  // 3
	int nums4[50];
	// printf("%ld",sizeof(nums1));
	for (int i;i < sizeof(nums1)/sizeof(int) ; ++i)
		printf("%d ", nums1[i]);
	printf("Hello, world\n");
	return 0;

}