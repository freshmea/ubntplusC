#include <stdio.h>

int gcd(int a, int b)
{
	int r;
	while (r ){
		if( b> a){
			r = b % a;
			b = a;
			a = r;
		} else {
		r = a % b;
		a = b;
		b = r;
		}
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