#include <stdio.h>
#define and	&&
#define or ||

int main(void)
{
	int num;
	printf("input num : ");
	scanf("%d", &num);

	// if (num < 0){
	// 	num= -num;
	// }
	
	// printf("abs value : %d\n", num);

	//삼항 연산자 적용.
	int result;
	result = (num >= 0) ? num : -num;
	
	printf("absolute value : %d\n", result);
	return 0;

}