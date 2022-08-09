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

void push(int data, Qu *pqu);
int pop(Qu *pqu);
void ini(Qu *pqu);
void cleanupQueue(Qu *pqu);

#endif