#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#define MAXSTACK 1024

// static 전역 함수. 
static void resize(Stack *ps)
{
	ps->size *= 2;
	int *temp_pArr = (int *)malloc(sizeof(int)*ps->size);
	assert(temp_pArr);
	for(int i=0;i< ps->size/2 ;i++){
		temp_pArr[i] = ps->pArr[i];
	}
	free(ps->pArr);
	ps->pArr = temp_pArr;

}

void push(Stack *ps,const int data)
{
	if(ps->tos >= ps->size){
		assert(ps->size<MAXSTACK+1);
		ps->size *= 2;
		ps->pArr=(int *)realloc(ps->pArr, sizeof(int)*ps->size);
		// resize(ps);
		printf("%s overstack, result of Adding size : %d\n", ps->name, ps->size);
	}
	ps->pArr[ps->tos++] = data;
}

void getName(Stack *ps, char *name)
{
	strcpy(name, ps->name);
}

void pop(Stack *ps, int *pData)
{
	assert(ps->tos);
	*pData = ps->pArr[--ps->tos];
}

void ini(Stack *ps, char *name)
{
	strcpy(ps->name, name);
	ps->tos=0;
	ps->size = 16;
	ps->pArr = (int *)malloc(sizeof(int)*ps->size);
	assert(ps->pArr);// 조건식이 0이 아니면 진행 .
}

void cleanupStack(Stack *ps)
{
	free(ps->pArr);
}