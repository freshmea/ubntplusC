#include <stdio.h>

int main()
{
	int length;
	int height;
	int area;

	printf("Enter triangle's lenth :");
	scanf("%d", &length);
	printf("Enter triangle's lenth :");
	scanf("%d", &height);
	area = length * height / 2;
	printf("triangle's arear is : %d\n", area);

	return 0;
}