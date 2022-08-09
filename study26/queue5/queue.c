#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

static void rearrange(Qu *pqu)
{	
	// printf("front is %drear is %d size is %d\n",pqu->front, pqu->rear, pqu->size);
	// for(int i=0;i<pqu->size;i++){
	// 	printf("%d, ", pqu->pArr[i]);
	// }
	// printf("\n");
	unsigned char temp[pqu->rear];
	for(int i=0;i<pqu->rear/pqu->eleSize;i++){
		for(int j=0;j<pqu->eleSize; j++)
			temp[i*pqu->eleSize+j]=pqu->pArr[i*pqu->eleSize+j];
	}
	// for(int i=0;i<pqu->rear;i++){
	// 	printf("%d, ", temp[i]);
	// }
	// printf("\n");
	for(int i=pqu->rear/pqu->eleSize;i<pqu->size/pqu->eleSize;i++){
		for(int j=0;j<pqu->eleSize; j++)
			pqu->pArr[ i * pqu->eleSize - pqu->rear+ j]=pqu->pArr[i*pqu->eleSize+j];
	}
	for(int i=0;i<pqu->rear/pqu->eleSize;i++){
		for(int j=0;j<pqu->eleSize; j++)
			pqu->pArr[pqu->size - pqu->rear+ i*pqu->eleSize+j]=temp[i*pqu->eleSize+j];
	}
	// for(int i=0;i<pqu->size;i++){
	// 	printf("%d, ", pqu->pArr[i]);
	// }
	// printf("\n");
	pqu->rear = pqu->size;
	pqu->front= pqu->eleSize;
}

void initialize(Qu *pqu, const char *name, const int eleSize)
{
	strcpy(pqu->name, name);
	pqu->eleSize = eleSize;
	pqu->front = 0;
	pqu->rear = 0;
	pqu->size = 16;
	pqu->pArr = malloc(eleSize*pqu->size);
	assert(pqu->pArr);
}

void push(Qu *pqu, const void *pData)
{
	// printf("front is %drear is %d size is %d\n",pqu->front, pqu->rear, pqu->size);
	if(pqu->rear == pqu->size){
		pqu->rear = 0;
	}
	if((pqu->rear)+(pqu->eleSize) == pqu->front){
		rearrange(pqu);
		pqu->rear = pqu->size;
		pqu->size *= 2;
		pqu->pArr = realloc(pqu->pArr, pqu->eleSize * pqu->size);
		fprintf(stderr, "sizeup %d\n", pqu->size);
	}
	memcpy(pqu->pArr + pqu->rear * pqu->eleSize, pData, pqu->eleSize );
	pqu->rear += pqu->eleSize;
}

int pop(Qu *pqu, void *pData)
{
	if(pqu->front == pqu->size){
		pqu->front = 0;
	}
	if(pqu->front == pqu->rear){
		fprintf(stderr, "there is no data\n");
		exit(1);
	}
	memcpy(pData, pqu->pArr + pqu->front * pqu->eleSize, pqu->eleSize);
	pqu->front += pqu->eleSize;
}

void getName(Qu *pqu, char *name)
{
	strcpy(name, pqu->name);
}


void cleanupQueue(Qu *pqu)
{
	free(pqu->pArr);
}