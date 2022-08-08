#include <stdio.h>
#include "stack.h"

int main(void)
{
	Stack stacks[10];
	ini(&stacks[0]);
	ini(&stacks[1]);
	ini(&stacks[2]);

	push(&stacks[1], 100);
	push(&stacks[1], 200);
	push(&stacks[1], 300);

	printf("s1 1st pop() : %d\n",pop(&stacks[1]));
	printf("s1 2st pop() : %d\n",pop(&stacks[1]));
	printf("s1 3st pop() : %d\n",pop(&stacks[1]));

	// printf("s1 4st pop() : %d\n",pop(&stacks[1])); stack overflow

	push(&stacks[2], 900);
	push(&stacks[2], 800);
	push(&stacks[2], 700);

	printf("s1 1st pop() : %d\n",pop(&stacks[2]));
	printf("s1 2st pop() : %d\n",pop(&stacks[2]));
	printf("s1 3st pop() : %d\n",pop(&stacks[2]));

	// printf("s1 4st pop() : %d\n",pop(&stacks[2])); stack overflow



	return 0;
}

