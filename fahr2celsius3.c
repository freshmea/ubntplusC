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
	celsius2 = celsius-celsius1*1000;


	temp = celsius2-celsius2/10*10;
	temp = temp/5;
	celsius2 = celsius2/10+temp;


	printf("fahrenheit temp : %d ---> celsius temp: %d.%d\n", fahr/1000, celsius1, celsius2);
	
	return 0;
}
