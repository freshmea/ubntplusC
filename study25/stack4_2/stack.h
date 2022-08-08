// #pragma once
#ifndef STACK_H
#define STACK_H

typedef struct stack{
	char name[10];
	int *pArr;
	int size ;
	int tos;
}Stack;

void ini(Stack *ps, char *name);

void push(Stack *ps, int data);
void pop(Stack *ps, int *pData);
void getName(Stack *ps, char *name);
void cleanupStack(Stack *ps);


#endif