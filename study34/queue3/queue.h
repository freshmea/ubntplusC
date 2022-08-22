#ifndef QUEUE_H
#define QUEUE_H
#include "array.h"

class Qu{
	private:
		Array arr_;
		int front_;
		int rear_;

		static const int QUEUE_SIZE;
	public:
		Qu(int size = QUEUE_SIZE);
		bool operator==(const Qu& rhs) const;

		// void rearrange();
		// void resize();
		void push(int data);
		int pop();
		bool full() const;
		bool empty() const;
};

#endif