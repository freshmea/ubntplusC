#ifndef STACK_H
#define STACK_H
#define ARRAYSIZE 100

typedef struct queue{
	int queue[ARRAYSIZE];
	int front;
	int rear;
}Qu;

void push(Qu *pqu, int data);
int pop(Qu *pqu);
void initQueue(Qu *pqu);

#endif