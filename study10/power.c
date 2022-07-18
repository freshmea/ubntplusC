#include <stdio.h>
long long power(int base, int exponent)
{
	long long result = 1;
	for(int i=0;i<exponent;i++) result *= base;
	return result;	
}


int main(void)
{
	for (int i =1; i<=62; ++i){
		long long value = power(2,i);
		printf("2 power of %d = %lld\n", i , value);
	}

	return 0;
}