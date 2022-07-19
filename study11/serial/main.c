#include <stdio.h>
#include "serial.h"

int main(void)
{
	for (int i =1; i <= 10; ++i){
		int num = getSerialNumber();

		printf("HYUNDAI_MOTOR_%010d\n", num);
	}
}