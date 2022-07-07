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
	// 나머지 구하는 오퍼레이터 사용
	celsius2 = (celsius%1000+5)/10;


	printf("fahrenheit temp : %d ---> celsius temp: %d.%d\n", fahr/1000, celsius1, celsius2);
	
	return 0;
}
