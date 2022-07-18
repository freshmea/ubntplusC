#include <stdio.h>

int f(void)
 {
	return 100;
 }
 
int f2(int *pResult)
 {
	*pResult = 100;
 }

int main(void)
{

	int result = f();
	printf("result : %d\n", result);

	f2(&result);
	printf("result : %d\n", result);

	return 0;
}


