#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a, b;
	int i=0;

	while(1)
	{
		i++;
		srand((unsigned int)time(NULL)+i);
		double rand1;
		rand1 = rand()/(double)RAND_MAX*3;

		srand((unsigned int)time(NULL)+i+1000);
		double rand2;
		rand2 = rand()/(double)RAND_MAX*3;

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
	printf("%d", i);
	return 0;
}