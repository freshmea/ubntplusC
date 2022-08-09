#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

void initialize(Qu *pqu, const char *name, const int eleSize)
{
	strcpy(pqu->name, name);
	pqu->eleSize = eleSize;
	pqu->front = 0;
	pqu->rear = 0;
	pqu->size = 10;
	pqu->temp_up_size = 10;
	pqu->loop = pqu->temp_up_size;
	pqu->pArr = malloc(eleSize*pqu->size);
	assert(pqu->pArr);
}

void push(Qu *pqu, const void *pData)
{
	if(pqu->rear == pqu->size){
		pqu->rear = 0;
	}
	if(pqu->rear+1 == pqu->front){
		pqu->temp_up_size = pqu->rear;
		pqu->loop = pqu->size;
		pqu->rear = pqu->size;
		pqu->size *= 2;
		pqu->pArr = realloc(pqu->pArr, pqu->eleSize * pqu->size);
		// resize(pqu);
		fprintf(stderr, "sizeup %d\n", pqu->size);
	}
	memcpy((unsigned char *)pqu->pArr + pqu->rear++ * pqu->eleSize, pData, pqu->eleSize );
}

int pop(Qu *pqu, void *pData)
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
	memcpy(pData, (unsigned char *)pqu->pArr + pqu->front++ * pqu->eleSize, pqu->eleSize);
}

void getName(Qu *pqu, char *name)
{
	strcpy(name, pqu->name);
}


void cleanupQueue(Qu *pqu)
{
	free(pqu->pArr);
}