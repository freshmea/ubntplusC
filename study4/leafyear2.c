#include <stdio.h>

int main(void)
{
	while(1){
		int year;
		printf("input year : ");
		scanf("%d", &year);

		if (year % 4 ==0 && year % 100 != year %400 ==0){
			printf("%d is a leap year.\n", year);
		} else {
			printf("%d is a ordinary.\n", year);
		}
	}
}