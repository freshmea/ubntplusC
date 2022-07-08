#include <stdio.h>

int main(void)
{
	int num;

	printf("sizeof(char) : %ld\n", sizeof(char));
	printf("sizeof(short) : %ld\n", sizeof(short));
	printf("sizeof(int) : %ld\n", sizeof(int));
	printf("sizeof(long) : %ld\n", sizeof(long));
	printf("sizeof(long long) : %ld\n", sizeof(long long));
	printf("sizeof(float) : %ld\n", sizeof(float));
	printf("sizeof(double) : %ld\n\n", sizeof(double));

	printf("sizeof(num) : %ld\n", sizeof(num));


	return 0;
}