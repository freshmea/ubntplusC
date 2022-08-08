#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void push(Stack *ps,int data)
{
	if(ps->tos == ps->size){
		ps->size = ps->size+10;
		ps->pArr=(int *)realloc(ps->pArr, sizeof(int)*ps->size);
		printf("Adding size %d\n", ps->size);
	}
	ps->pArr[ps->tos++] = data;
}

void pop(Stack *ps, int *pData)
{
	assert(ps->tos);
	*pData = ps->pArr[--ps->tos];
}

void ini(Stack *ps)
{
	ps->tos=0;
	ps->size = 10;
	ps->pArr = (int *)malloc(sizeof(int)*ps->size);
	assert(ps->pArr);// 조건식이 0이 아니면 진행 .
}

void cleanupStack(Stack *ps)
{
	free(ps->pArr);
}