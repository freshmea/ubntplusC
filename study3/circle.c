#include <stdio.h>
#define PI 3.141592

int main()
{
	int radius;
	double area;


	printf("반지름은 (cm):");
	scanf("%d", &radius);
	area = radius *radius *PI;
	printf("반지름이 %dcm인 원의 넓이는 %.2fcm^2입니다.\n", radius, area);

	return 0;
}