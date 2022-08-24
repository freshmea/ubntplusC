#ifndef STACK_H
#define STACK_H
#include "array.h"


class Stack {
private:
	static const int STACK_SIZE;

	Array arr_;
	int tos_;

public:
	explicit Stack(int size = STACK_SIZE);
	bool operator==(const Stack& rhs) const;
	// !=

	bool full() const;
	bool empty() const;
	void push(int data);
	int pop();
};
#endif