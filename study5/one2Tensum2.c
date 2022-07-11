#include <stdio.h>

int main(void)
{
	int sum = 0;

	// int i = 1;
	// while(i <= 10){
	// 	printf("%d\n", i);
	// 	sum = sum + i;
	// 	++i;
	// }

	for(int i=1;i<= 10; ++i){
		printf("%d\n", i);
		sum = sum +i;
	}
	printf("sum [1, 10] : %d\n", sum);
}