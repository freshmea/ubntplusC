#include <stdio.h>


int main(void)
{
	int a = 0x12345678;
	// int *p;
	// p = &a;
	char *p;
	p = (char *)&a;
	// 결과값이 78 이 나와서 리틀엔디안이다. 
	printf("*p : 0x%x\n", *p);

	return 0;
}