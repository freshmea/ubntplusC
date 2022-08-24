#ifndef STACK_H
#define STACK_H
#include <cassert>
#include "array.h"

template <typename T>
class Stack {
private:
	static const int STACK_SIZE;
	Array<T> arr_;
	int tos_;

public:
	explicit Stack(int size = STACK_SIZE);
	bool operator==(const Stack<T>& rhs) const;
	// !=

	bool full() const;
	bool empty() const;
	void push(const T& data);
	const T& pop();
};

template <typename T>
const int Stack<T>::STACK_SIZE = 100;

template <typename T>
Stack<T>::Stack(int size)
: arr_(size), tos_(0)
{

}

template <typename T>
bool Stack<T>::operator==(const Stack<T>& rhs) const
{
	if(tos_ != rhs.tos_)
		return false;
	return arr_ == rhs.arr_;
}

template <typename T>
bool Stack<T>::full() const
{
	return tos_ == arr_.size();
}

template <typename T>
bool Stack<T>::empty() const
{
	return tos_ == 0;
}

template <typename T>
void Stack<T>::push( const T& data)
{
	assert(!full());
	arr_[tos_] = data;
	++tos_;
}

template <typename T>
const T& Stack<T>::pop()
{
	assert(!empty());
	--tos_;
	return arr_[tos_];
}
#endif