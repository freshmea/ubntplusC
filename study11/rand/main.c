#include <stdio.h>
#include <time.h>
#include "rand.h" // 큰 따옴표는 같은 디렉토리 안에 있는 헤더를 찾는다. 

int main(void)
{

	my_srand( time(NULL));
	for(int i = 1; i <= 10; ++i){
		int num = my_rand();

		printf("%d\n", num);
	}
	return 0;
}

