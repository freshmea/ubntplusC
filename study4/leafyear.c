#include <stdio.h>

int main(void)
{
	int year;
	printf("input year : ");
	scanf("%d", &year);

	int isLeap;
	isLeap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ;
	//isLeap =  year % 400 == 0 || year % 4 == 0 && year % 100 != 0  ;
	//소컷 서킷으로 10번 라인이좋다. 앞에서 계산 했을 때 빠름.
	printf("%d is a leap year : %d\n", year, isLeap);
}