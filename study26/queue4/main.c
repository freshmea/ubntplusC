#include <stdio.h>
#include "queue.h"

int main(void)
{
	Qu qu1;
	Qu qu2;
	initialize(&qu1, 10);
	initialize(&qu2, 100);

	int re;
	for(int i=0;i< 101;i++){
		push(&qu1, i);
		push(&qu1, i);
		pop(&qu1, &re);
		printf("1st pop(): %d, front %d, rear %d\n", re, qu1.front, qu1.rear);
	}

	return 0;
}

