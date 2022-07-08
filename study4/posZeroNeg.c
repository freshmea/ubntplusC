#include <stdio.h>

int main(void)
{
	while(1){
		int num;
		printf("input num :");
		scanf("%d", &num);

		if (num>0){
			printf("%d is positive number.\n", num);
		} else if (num == 0){
			printf("%d is Zero.\n", num);
		} else {
			printf("%d is negative number.\n", num);
		}
	}
	return 0;
}