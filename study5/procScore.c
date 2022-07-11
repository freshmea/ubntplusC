#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXC	100


int main(void)
{
	//배열을 가지고 입력 받기.
	int scores[50];

	for (int i=0; i < 50; ++i){
		// scanf("%d", &scores[i]);
		srand((unsigned int)time(NULL)-i*100);
		double rand1;
		rand1 = rand()/(double)RAND_MAX*MAXC;

		scores[i] = (int)rand1;
		printf("%d", scores[i]);
	}

	int sum=0;

	for (int i=0; i<50; ++i){
		sum += scores[i];
	}

	double average = (double)sum/50;

	printf("average: %.2f\n", average);
	return 0;
}