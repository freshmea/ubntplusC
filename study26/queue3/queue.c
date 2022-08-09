#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

void initQueue(Qu *pqu)
{
	pqu->front = 0;
	pqu->rear = 0;
}

void push(Qu *pqu,int data)
{
	if(pqu->rear == ARRAYSIZE){
		pqu->rear = 0;
	}
	if(pqu->rear+1 == pqu->front){
		fprintf(stderr, "stack is full\n");
		exit(1);
	}
	pqu->queue[pqu->rear++] = data;
}

int pop(Qu *pqu)
{
	if(pqu->front == ARRAYSIZE){
		pqu->front = 0;
	}
	if(pqu->front == pqu->rear){
		fprintf(stderr, "there is no data\n");
		exit(1);
	}
	return pqu->queue[pqu->front++];
}