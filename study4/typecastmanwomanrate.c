#include <stdio.h>

int main()
{
	int man, woman;
	double manrate, womanrate;

	printf("남자의 수는 :");
	scanf("%d", &man);
	printf("여자의 수는 :");
	scanf("%d", &woman);
	// manrate = man / sum*100;
	// womanrate = woman / sum*100;
	manrate = (double)man / (man + woman)*100;
	womanrate = (double)woman / (man + woman)*100;
	
	printf("남자의 수는 %d명이고 여자의 수는  %d명입니다.\n"
	 "총 수는 명\n남자의 비율은 %.2f%%\n여자의 비율은 %.2f%%\n", 
	 man, woman, manrate, womanrate);

	return 0;
}