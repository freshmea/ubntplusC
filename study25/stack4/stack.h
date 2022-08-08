// #pragma once
#ifndef STACK_H
#define STACK_H

typedef struct stack{
	int *pArr;
	int size ;
	int tos;
}Stack;

void ini(Stack *ps);

void push(Stack *ps, int data);
void pop(Stack *ps, int *pData);
void cleanupStack(Stack *ps);


#endif