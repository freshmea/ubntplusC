#include <stdio.h>

int main(void)
{
	int i =100;
	double d = 3.14;

	void *p;

	p = &i;
	*(int *)p = 200;
	// *p = 200; 보이드 포인터는 역참조가 안된다. 

	p = &d;
	*(double *)p = 2.718;
	printf("i : %d\t d: %f\n", i, d);
	return 0;
}