#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	for (int i =1 ; i <= 30; ++i){
		
		printf("%ld\n", time(NULL));
		int dice = rand()%6+1;

		printf("%d\n", dice);
	}
}