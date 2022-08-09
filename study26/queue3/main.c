#include <stdio.h>
#include "queue.h"

int main(void)
{
	Qu qu1;
	Qu qu2;
	ini(&qu1);
	ini(&qu2);
	for(int i=0;i< 101;i++){
		push(i, &qu1);
		push(i, &qu1);
		printf("1st pop(): %d, front %d, rear %d\n", pop(&qu1), qu1.front, qu1.rear);
	}

	return 0;
}

