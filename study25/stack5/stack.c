#include "stack.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define MAXSTACK 1024

// static 전역 함수. 
// static void resize(Stack *ps)
// {
// 	ps->size *= 2;
// 	int *temp_pArr = (int *)malloc(sizeof(int)*ps->size);
// 	assert(temp_pArr);
// 	for(int i=0;i< ps->size/2 ;i++){
// 		temp_pArr[i] = ps->pArr[i];
// 	}
// 	free(ps->pArr);
// 	ps->pArr = temp_pArr;

// }

void push(Stack *ps, const void *pData)
{
	if(ps->tos >= ps->size){
		assert(ps->size < MAXSTACK+1);
		ps->size *= 2;
		ps->pArr=realloc(ps->pArr, ps->eleSize*ps->size);
		// resize(ps); //realloc 대신 쓸 수 있음. 
		printf("%s overstack, result of Adding size : %d\n", ps->name, ps->size);
	}
	// ps->pArr[ps->tos++] = data;
	// memcpy(&ps->pArr[ps->tos++], pData, ps->eleSize); // pArr 가 보이드 보인터 여서 참조가 안됨. 
	memcpy((unsigned char *)ps->pArr + ps->tos++ * ps->eleSize, pData, ps->eleSize );
}

void getName(Stack *ps, char *name)
{
	strcpy(name, ps->name);
}

void pop(Stack *ps, void *pData)
{
	assert(ps->tos >= 0);
	// *pData = ps->pArr[--ps->tos];
	memcpy(pData, (unsigned char *)ps->pArr + --ps->tos * ps->eleSize, ps->eleSize);
}

void ini(Stack *ps, char *name, int eleSize)
{
	strcpy(ps->name, name);
	ps->tos=0;
	ps->size = 16;
	ps->eleSize = eleSize;
	ps->pArr = malloc(eleSize*ps->size);
	assert(ps->pArr);// 조건식이 0이 아니면 진행 .
}

void cleanupStack(Stack *ps)
{
	free(ps->pArr);
}