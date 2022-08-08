// #pragma once
#ifndef STACK_H
#define STACK_H
#define ARRAYSIZE 100

typedef struct stack{
	int array[ARRAYSIZE];
	int tos;
}Stack;

void push(Stack *ps, int a);
int pop(Stack *ps);
void ini(Stack *ps);

#endif