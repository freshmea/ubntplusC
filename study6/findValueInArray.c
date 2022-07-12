#include <stdio.h>

int main(void)
{
	int nums[10]= {40, 20, 52, 12, 34, 64, 94, 85, 71, 4}; //초기화 리스트 

	int value;
	printf("value : ");
	scanf("%d", &value);

	int i;
	for (int i=0;i<10;++i){
		if (value == nums[i]){
			break;
		}
	}

	if (i<10){
		printf("%d is found. index : %d\n", value, i);
	} else {
		printf("%d is not found.\n", value);
	}

	return 0;
}