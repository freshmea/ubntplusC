#ifndef STACK_H
#define STACK_H

typedef struct queue{
	char name[10];
	void *pArr;
	int eleSize;
	int front;
	int rear;
	int size;
	int loop;
	int temp_up_size;
}Qu;

void initialize(Qu *pqu, const char *name, const int eleSize);
void cleanupQueue(Qu *pqu);

void push(Qu *pqu, const void *pData);
int pop(Qu *pqu, void *pData);
void getName(Qu *pqu,char *name);

#endif