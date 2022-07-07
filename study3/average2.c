#include <stdio.h>

int main()
{
	int korean=0;
	int english;
	int mathemathics;
	int sum;
	double average;

	printf("국어 점수는 :");
	scanf("%d", &korean);
	printf("영어 점수는 :");
	scanf("%d", &english);
	printf("수학 점수는 :");
	scanf("%d", &mathemathics);
	sum = korean + english + mathemathics;
	average = sum / 3.0;
	printf("Total score is : %d\nAverage score is : %.2f\n", sum, average);

	return 0;
}