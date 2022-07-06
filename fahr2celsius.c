#include <stdio.h>

int main(void)
{
	int fahr;
	int celsius;
	
	fahr = 100;
	
	// celsius = 5/9*(fahr -32);
	celsius = 5.0/9.0 *(fahr -32);
	printf("fahrenheit temp : %d ---> celsius temp: %d\n", fahr, celsius);
	
	return 0;
}
