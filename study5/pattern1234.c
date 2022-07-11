#include <stdio.h>

int main(void)
{
	for (int i=1; i <= 100; ++i){
		printf(" %d번째 출력 \t: \t1 2 3 4\n", i);
	}
	printf("\n");

	for (int i=0; i <= 99; ++i){
		printf(" %d", i % 4+1);
		if ( i % 4+1 == 4){
			printf("\n");
		}
	}
	printf("\n");

	return 0;

}