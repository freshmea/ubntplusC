#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void ini(Qu *pqu)
{
	pqu->front = 0;
	pqu->rear = 0;
	pqu->size = 100;
	pqu->temp_up_size = 100;
	pqu->loop = pqu->temp_up_size;
	pqu->pArr = (int *)malloc(sizeof(int)*pqu->size);
	assert(pqu->pArr);
}

void push(int data, Qu *pqu)
{
	++pqu->rear;
	if(pqu->rear == pqu->size){
		pqu->rear = 0;
	}
	if(pqu->rear == pqu->front){
		pqu->temp_up_size = pqu->rear;
		pqu->loop = pqu->size;
		pqu->rear = pqu->size;
		pqu->size *= 2;
		int *temp=realloc(pqu->pArr, sizeof(int)* pqu->size);
		fprintf(stderr, "sizeup %d\n", pqu->size);
	}
	pqu->pArr[pqu->rear-1] = data;
}

int pop(Qu *pqu)
{
	
	if(pqu->front == pqu->loop){
		pqu->front = 0;
		pqu->loop = pqu->size;
	}
	if(pqu->front == pqu->size){
		pqu->front = 0;
	}
	if(pqu->front == pqu->temp_up_size){
		pqu->front = pqu->size/2;
		pqu->temp_up_size = pqu->size;
	}
	if(pqu->front == pqu->rear){
		fprintf(stderr, "there is no data\n");
		exit(1);
	}
	return pqu->pArr[pqu->front++];
}

void cleanupQueue(Qu *pqu)
{
	free(pqu->pArr);
}