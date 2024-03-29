#include <stdio.h>

int stack[100];
int tos;

void push(int a)
{
	stack[tos++] = a;
}

int pop(void)
{
	return stack[--tos];
}

int main(void)
{
	push(100);
	push(200);
	push(300);
	printf("1st pop() : %d\n",pop());
	printf("2st pop() : %d\n",pop());
	printf("3st pop() : %d\n",pop());
	for(int i=0;i<10;i++){
		printf("stack[%d] : %d\n", i, stack[i]);
	}
	return 0;
}