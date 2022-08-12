// #pragma once
#ifndef STACK_H
#define STACK_H

class Stack{
	private:
		char name[10];
		int *pArr;
		int size ;
		int tos;

	public:
		Stack(char *name);
		~Stack();

		void push(int data);
		void pop(int *pData);
		void getName(char *name);
		void resize();
};

#endif