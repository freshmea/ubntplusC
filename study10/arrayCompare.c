#include <stdio.h>

int main(void)
{
	int nums[] = {1, 2, 3, 4, 5};
	int nums2[] = {1, 2, 3, 4, 5};

	//주소의 위치를 비교. 
	// if(nums == nums2) {
	// 	printf("nums and nums2 are equal.\n");
	// } else {
	// 	printf("nums and nums2 are not equal.\n");
	// }

	int i;
	for ( i = 0 ; i < 5; ++i){
		if (nums[i] != nums2[i]){
			break;
		}
	}

	if (i == 5){
		printf("nums and nums2 are equal.\n");
	} else {
		printf("nums and nums2 are not equal.\n");
	}
	return 0;

}