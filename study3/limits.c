#include<stdio.h>
#include<limits.h>

int main(void)
{
	printf("CHAR_BIT: %d\n", CHAR_BIT);
	printf("SCHAR_MIN : %d\tSCHAR_MAX : %d\n", CHAR_MIN, CHAR_MAX);
	printf("INT_MIN : %d\tINT_MAX : %d\n", INT_MIN, INT_MAX);
	printf("LONG_MIN : %ld\tLONG_MAX : %ld\n", LONG_MIN, LONG_MAX);
	
	return 0;
}