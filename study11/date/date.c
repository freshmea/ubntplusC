#include <stdio.h>
#include "date.h"

// void printDate(struct date d)
// {
// 	printf("(%d/%d/%d)\n", d.year, d.month, d.day);
// }

void printDate(const Date *pd)
{
	// printf("(%d/%d/%d)\n", (*pd).year, (*pd).month, (*pd).day);
	printf("(%d/%d/%d)\n", pd -> year, pd -> month, pd -> day);
	// printf("%ld \n", sizeof(*pd));
}