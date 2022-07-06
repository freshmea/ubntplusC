#include <stdio.h>

int main(void)
{
	int celsius=0;
	//celsius = 36;
	scanf("%d", &celsius);
	double fahr;
	fahr= 9.0/5.0*celsius+32;


	printf("celsius temp : %d ---> fahrenheit temp: %.1f\n", celsius, fahr);
	
	return 0;
}
