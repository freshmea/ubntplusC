#include <stdio.h>

int main(void)
{
	int fahr;
	int celsius;
	int celsius1;
	int celsius2;
	int temp;

	fahr = 100;
	fahr = fahr*1000;

	celsius = 5*(fahr -32000)/9;
	celsius1 = celsius/1000;
	celsius2 = (celsius-celsius/1000*1000+5)/10;


	printf("fahrenheit temp : %d ---> celsius temp: %d.%d\n", fahr/1000, celsius1, celsius2);
	
	return 0;
}
