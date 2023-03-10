#include <stdio.h>

int getSerialNumber(void);
int count = 0;
int main(void)
{
	for (int i =1; i <= 10; ++i){
		int num = getSerialNumber();

		printf("HYUNDAI_MOTOR_%010d\n", num);
	}
}

int getSerialNumber(void)
{
	int result = count;
	++count;
	return result;
}