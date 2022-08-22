#ifndef STACK_H
#define STACK_H

class Stack {
private:
	static const int STACK_SIZE;
	int *pArr_;
	int size_;
	int tos_;

public:
	explicit Stack(int size = STACK_SIZE);
	Stack(const Stack& rhs);
	~Stack();
	
	Stack& operator=(const Stack& rhs);

	bool operator==(const Stack& rhs) const;
	// !=

	bool full() const;
	bool empty() const;
	void push(int data);
	int pop();
};
#endif