#include <stdio.h>

int main()
{
	int korean;
	int english;
	int mathemathics;
	int sum;
	int average;

	printf("Enter Korean's score :");
	scanf("%d", &korean);
	printf("Enter English's score :");
	scanf("%d", &english);
	printf("Enter mathemathics's score :");
	scanf("%d", &mathemathics);
	sum = korean + english + mathemathics;
	average = sum / 3;
	printf("Total score is : %d\nAverage score is : %d\n", sum, average);

	return 0;
}