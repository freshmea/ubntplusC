#include <stdio.h>
long long factorial(int n)
{
	long long result = 1;
	for(int i=1;i <= n;i++) result *= i;
	return result;	
}


int main(void)
{
	for (int i =1; i<=20; ++i){
		long long value = factorial(i);
		printf("factorial of %d = %lld\n", i, value);
	}

	return 0;
}