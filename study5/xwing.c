#include <stdio.h>

int main(void)
{
	for(int i = 1;i <= 5; ++i){
		for(int j = 1; j <= 5 ; ++j){
			//평범한 if else 문 
			// if (i +j == 6 || i == j ){
			// 	printf("*");
			// } else {
			// 	printf(" ");
			// }

			//조건식 연산자.
			printf( (i +j == 6 || i == j ) ? "*" : " ");
		}
	printf("\n");
	}
	return 0;
}