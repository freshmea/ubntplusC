#include <stdio.h>

int main()
{
	int width, height;
	double area;

	printf("삼각형의 밑변을 넣으세요 :");
	scanf("%d", &width);
	printf("삼각형의 높이를 넣으세요 :");
	scanf("%d", &height);
	area = width * height / 2.0;
	printf("삼각형의넓이는 : %.1f\n", area);

	return 0;
}