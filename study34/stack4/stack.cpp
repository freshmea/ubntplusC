#include <cassert>
#include "stack.h"

const int Stack::STACK_SIZE = 100;

Stack::Stack(int size)
: arr_(size), tos_(0)
{

}

bool Stack::operator==(const Stack& rhs) const
{
	if(tos_ != rhs.tos_)
		return false;
	return arr_ == rhs.arr_;
}

bool Stack::full() const
{
	return tos_ == arr_.size();
}

bool Stack::empty() const
{
	return tos_ == 0;
}

void Stack::push( int data)
{
	assert(!full());
	arr_[tos_] = data;
	++tos_;
}

int Stack::pop()
{
	assert(!empty());
	--tos_;
	return arr_[tos_];
}