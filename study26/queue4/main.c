#include <stdio.h>
#include "queue.h"

int main(void)
{
	Qu qu1;
	Qu qu2;
	initialize(&qu1, 8);
	initialize(&qu2, 30);

	int re;
	for(int i=0;i< 20;i++){
		push(&qu1, i);
		push(&qu1, i);
		push(&qu1, i);
		pop(&qu1, &re);
		printf("1st pop(): %d\n", re);
		pop(&qu1, &re);
		printf("1st pop(): %d\n", re);
	}

	for(int i=0;i< 50;i++){
		push(&qu2, i);
		push(&qu2, i);
		pop(&qu2, &re);
		printf("2st pop(): %d\n", re);
	}

	return 0;
}

