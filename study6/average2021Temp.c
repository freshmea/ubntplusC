#include <stdio.h>

int main(void)
{
	double temp[12] = {0};
	for (int i=0;i<12;++i){
		scanf("%lf", &temp[i]);
	}

	double sum = 0;
	for (int i=0;i<12;++i){
		sum += temp[i];
	}

	double average;
	average = sum/12;

	printf("2021 Average Temperature  : %.2lf\n", average);

	return 0;
}