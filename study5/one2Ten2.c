#include <stdio.h>

int main(void)
{
	int i;
	i = 1;
	for(; i<= 10;){
		printf("%d\n", i);
		++i;
	}
	printf("\n");

	// int i;

	// i 변수를 for 문 안에서만 쓰겠다는 표현.
	for(int i = 1; i<= 10;++i){
		printf("%d\n", i);
	}
	printf("\n");	

}