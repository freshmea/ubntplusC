#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi;
	double *pd;

	pi = (int *)malloc(sizeof(int));
	if (pi == NULL)
	{
		printf("# 메모리가 부족합니다. \n");
		exit(1);
	}
	pd = (double *)malloc(sizeof(double));

	
}