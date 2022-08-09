#ifndef STACK_H
#define STACK_H

typedef struct queue{
	int *pArr;
	int front;
	int rear;
	int size;
	int loop;
	int temp_up_size;
}Qu;

void push(Qu *pqu, int data);
int pop(Qu *pqu, int *pData);
void initialize(Qu *pqu, int size);
void cleanupQueue(Qu *pqu);

#endif