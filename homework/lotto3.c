// 로또 번호 6개가 자동으로 만들어지게.  1~45 번 까지의 숫자 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int balls[45];
	// 셔플을 해서 꺼낸다.
	srand(time(NULL));
	for(int i=0;i< 45;++i){
		balls[i]=i+1;
	}

	for(int i=1; i <= 1000000;++i){
		int index = rand() % 45;
		int index2 = rand() % 45;

		int tmp = balls[index];
		balls[index] = balls[index2];
		balls[index2] = tmp;
	}

	printf("num : [" );
	for (int i=0;i<7;++i){
		printf("%d, ", balls[i]);
		// printf("%d", balls[i]);
		// printf((i<6) ? ", " : "");
	}
	printf("\b\b]\n");
	
	return 0;
}