// #pragma once
#ifndef STACK_H
#define STACK_H
#include <string>
using namespace std;
class Stack{
private:
	string name_;
	int *pArr_;
	int size_ ;
	int tos_;

public:
	Stack(const string name);
	~Stack();

	void push(const int data);
	int pop();
	const string getName() const;
	int gettos() const;
	// void resize();
	Stack operator=(const Stack& rhs);
	// const Stack operator+(const Stack& rhs) const ;
};

#endif