#include <stdio.h>
#include "stack.h"
#define NUMBEROFSTACK 3

int main(void)
{
	Stack stacks[NUMBEROFSTACK];
	for(int i=0;i<NUMBEROFSTACK;i++){
		ini(&stacks[i]);
	}
	int re;

	for(int i=0;i<30;i++){
		push(&stacks[1], i);
	}

	for (int i=0;i<30;i++){
		pop(&stacks[1], &re);
		printf("s%d %dst pop() : %d\n",1 ,i+1, re);
	}

	for(int i=0;i<30;i++){
		push(&stacks[2], 29-i);
	}

	for (int i=0;i<30;i++){
		pop(&stacks[2], &re);
		printf("s%d %dst pop() : %d\n",2 ,i+1 , re);
	}

	for(int i=0;i<NUMBEROFSTACK;i++){
		cleanupStack(&stacks[i]);
	}
	return 0;
}

