#include <stdio.h>
#include "date.h"

int main(void)
{
	Date d;
	d.year = 2022;
	d.month = 7;
	d.day = 19;

	Date today;
	today = d;
	printDate(&today);
	// printf("%ld \n", sizeof(today));


}