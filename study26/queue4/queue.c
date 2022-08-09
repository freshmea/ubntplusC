#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

static void rearrange(Qu *pqu)
{
	int temp[pqu->rear];
	// for(int i=0;i<pqu->size;i++){
	// 	printf("%d, ", pqu->pArr[i]);
	// }
	// printf("\n");
	for(int i=0;i<pqu->rear;i++){
		temp[i]=pqu->pArr[i];
	}
	for(int i=pqu->rear;i<pqu->size;i++){
		pqu->pArr[i-pqu->rear]=pqu->pArr[i];
	}
	for(int i=0;i<pqu->rear;i++){
		pqu->pArr[pqu->size-pqu->rear+i]=temp[i];
	}
	// for(int i=0;i<pqu->size;i++){
	// 	printf("%d, ", pqu->pArr[i]);
	// }
	// printf("\n");
	pqu->rear = pqu->size;
	pqu->front= 1;
}

void initialize(Qu *pqu, int size)
{
	pqu->front = 0;
	pqu->rear = 0;
	pqu->size = size;
	pqu->pArr = malloc(sizeof(int)*pqu->size);
	assert(pqu->pArr);
}

void push(Qu *pqu, int data)
{
	if(pqu->rear == pqu->size){
		pqu->rear = 0;
	}

	// assert(pqu->rear != pqu->size);
	if(pqu->rear+1 == pqu->front){
		rearrange(pqu);
		pqu->size *= 2;
		pqu->pArr=realloc(pqu->pArr, sizeof(int)* pqu->size);
		fprintf(stderr, "sizeup %d\n", pqu->size);
	}
	pqu->pArr[pqu->rear++] = data;
}

int pop(Qu *pqu, int *pData)
{
	if(pqu->front == pqu->size){
		pqu->front = 0;
	}

	if(pqu->front == pqu->rear){
		fprintf(stderr, "there is no data\n");
		exit(1);
	}
	*pData = pqu->pArr[pqu->front++];
}

void cleanupQueue(Qu *pqu)
{
	free(pqu->pArr);
}