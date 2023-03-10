#include <stdio.h>


int main(void)
{
	int a;
	int *p = NULL;

	a= 100;
	p = &a;
	*p = 200;

	printf("a: %d\n", a);
	return 0;
}