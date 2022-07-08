#include <stdio.h>

int main(void)
{
	int num;
	printf("input a :");
	scanf("%d", &num);

	printf( "1 <= %d <= 9 : %d\n", num, 1 <= num && num <= 9);

	return 0;
}