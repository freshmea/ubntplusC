#ifndef STACK_H
#define STACK_H

typedef struct stack{
	char name[10];
	void *pArr;
	int eleSize;
	int size ;
	int tos;
}Stack;

void ini(Stack *ps, char *name, int eleSize);
void push(Stack *ps, const void *pData);
void pop(Stack *ps, void *pData);
void getName(Stack *ps, char *name);
void cleanupStack(Stack *ps);


#endif