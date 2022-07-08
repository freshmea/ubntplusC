#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXC 8

int main(void)
{
	int a, b;
	int i=0;
	double sum=0;

	for(int j=0;j<100;j++){
		i = 0;
		while(1)
		{
			i++;
			srand((unsigned int)time(NULL)+i);
			double rand1;
			rand1 = rand()/(double)RAND_MAX*MAXC;

			srand((unsigned int)time(NULL)+i+1000);
			double rand2;
			rand2 = rand()/(double)RAND_MAX*MAXC;

			a=rand1;
			b=rand2;

			printf("%d > %d : %d\t", a, b, a>b);
			printf("%d < %d : %d\n", a, b, a<b);
			printf("%d >= %d : %d\t", a, b, a>=b);
			printf("%d <= %d : %d\n", a, b, a<=b);
			printf("%d == %d : %d\t", a, b, a==b);
			printf("%d != %d : %d\n\n", a, b, a!=b);
			if(a ==b ){
				break;
			}
		}
		printf("%f\n", sum);
		sum = sum + i+1;
	}
	printf("%.2f\n", sum/100);
	return 0;
}