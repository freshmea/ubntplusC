#include <stdio.h>
int main(void)
{
	int a, b;
	// scanf("%d", &a);
	// scanf("%d", &b);
	scanf("%d %d", &a , &b);

	printf("두 숫자의 더하기는 %d + %d = %d\n", a, b, a+b);
	printf("두 숫자의 빼기는 %d - %d = %d\n", a, b, a-b);
	printf("두 숫자의 곱하기는 %d * %d = %d\n", a, b, a*b);
	printf("두 숫자의 나누기는 %d / %d = %d\n", a, b, a/b);
	printf("두 숫자의 나머지는 %d %% %d = %d\n", a, b, a%b);

	return 0;
}