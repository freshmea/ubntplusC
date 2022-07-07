#include <stdio.h>

int main()
{
	int korean=0;
	int english;
	int mathemathics;
	int sum;
	double average;

	printf("Enter Korean's score :");
	scanf("%d", &korean);
	printf("Enter English's score :");
	scanf("%d", &english);
	printf("Enter mathemathics's score :");
	scanf("%d", &mathemathics);
	sum = korean + english + mathemathics;
	average = sum / 3.0;
	printf("Total score is : %d\nAverage score is : %.2f\n", sum, average);

	return 0;
}