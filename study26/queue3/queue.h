#ifndef STACK_H
#define STACK_H
#define ARRAYSIZE 100

typedef struct queue{
	int queue[ARRAYSIZE];
	int front;
	int rear;
}Qu;

void push(int data, Qu *pqu);
int pop(Qu *pqu);
void ini(Qu *pqu);

#endif