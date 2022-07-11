#include <stdio.h>

int main(void)
{
	int num;
	printf("input num: ");
	scanf("%d", &num);

	// int isOdd;
	// isOdd = (num % 2 == 1);
	// printf("num : %d \t isOdd : %d\n", num, isOdd);

	//삼항 연산자 
	printf("%d is a %s\n", num, 
		(num%2 /*!= 0 조건식에서 한칸을 뛰우면 이 식이 생략 된 것이다. */) ? "odd" : "even");
	return 0;
}