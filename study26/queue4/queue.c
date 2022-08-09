#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void initialize(Qu *pqu, int size)
{
	pqu->front = 0;
	pqu->rear = 0;
	pqu->size = size;
	pqu->temp_up_size = 10;
	pqu->loop = pqu->temp_up_size;
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
		pqu->temp_up_size = pqu->rear;
		pqu->loop = pqu->size;
		pqu->rear = pqu->size;
		pqu->size *= 2;
		pqu->pArr=realloc(pqu->pArr, sizeof(int)* pqu->size);
		fprintf(stderr, "sizeup %d\n", pqu->size);
	}
	pqu->pArr[pqu->rear++] = data;
}

int pop(Qu *pqu, int *pData)
{
	
	if(pqu->front == pqu->loop && (pqu->loop != pqu->size)){
		pqu->front = 0;
		pqu->loop = pqu->size;
	}
	if(pqu->front == pqu->size){
		pqu->front = 0;
	}

	printf("%d, %d, %d, %d \n",pqu->front+1, pqu->temp_up_size,pqu->loop, pqu->size );

	if((pqu->front == pqu->temp_up_size) && (pqu->loop == pqu->size)){
		pqu->front = pqu->size/2;
		pqu->temp_up_size = pqu->size;
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