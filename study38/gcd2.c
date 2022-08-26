#include <stdio.h>

int gcd(int a, int b)
{
	if ( b > a){
		int tmp = a;
		a = b;
		b = tmp;
	}
	int r;
	r = a % b;
	while (r ){
		a = b;
		b = r;

		r = a % b;
	}
	return b;
}

int main(void)
{
	int a, b;
	a = scanf("%d %d", &a, &b);

	int result = gcd(a, b);

	printf("G.C.D : %d\n", result);

	return 0;
}