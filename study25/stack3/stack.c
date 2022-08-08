#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void push(Stack *ps,int a)
{
	if(ps->tos == ARRAYSIZE){
		fprintf(stderr, "stack is full\n");
		exit(1);
	}
	ps->array[ps->tos++] = a;
}

int pop(Stack *ps)
{
	if (ps->tos == 0){
		fprintf(stderr, "stack is empty\n");
		exit(2);
	}
	return ps->array[--ps->tos];
}

void ini(Stack *ps)
{
	ps->tos=0;
}