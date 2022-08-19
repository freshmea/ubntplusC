// #pragma once
#ifndef STACK_H
#define STACK_H
#include "string.h"

class Stack{
private:
	String name_;
	int *pArr_;
	int size_ ;
	int tos_;

public:
	Stack(String name);
	~Stack();

	void push(const int data);
	int pop();
	const String getName() const;
	void resize();
	Stack operator=(const Stack& rhs);
	Stack operator+(const Stack& rhs);
};

#endif