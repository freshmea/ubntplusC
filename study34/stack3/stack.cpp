#include <cassert>
#include "stack.h"

const int Stack::STACK_SIZE = 100;

Stack::Stack(int size)
: pArr_(new int[size]), size_(size), tos_(0)
{
	assert(pArr_);
}

Stack::Stack(const Stack& rhs)
: pArr_(new int(rhs.size_)), size_(rhs.size_), tos_(rhs.tos_)
{
	assert(pArr_ );
	for(int i=0;i<rhs.tos_;++i){
		pArr_[i] = rhs.pArr_[i];
	}
}

Stack::~Stack()
{
	delete [] pArr_;
}

Stack& Stack::operator=(const Stack& rhs)
{
	if(this != &rhs){
		delete[] pArr_;
		pArr_ = new int[rhs.size_];
		assert(pArr_ );

		for(int i=0;i<rhs.tos_;++i){
			pArr_[i] = rhs.pArr_[i];
		}
		size_ = rhs.size_;
		tos_ = rhs.tos_;
	}
	return *this;
}

bool Stack::operator==(const Stack& rhs) const
{
	if(size_ != rhs.size_ || tos_ != rhs.tos_)
		return false;

	int i;
	for(i=0;i<rhs.tos_; ++i){
		if(pArr_[i] != rhs.pArr_[i]) break;
	}
	return (i == rhs.tos_);
}

bool Stack::full() const
{
	return tos_ == size_;
}

bool Stack::empty() const
{
	return tos_ == 0;
}

void Stack::push( int data)
{
	assert(!full());

	pArr_[tos_] = data;
	++tos_;
}

int Stack::pop()
{
	assert(!empty());
	--tos_;
	return pArr_[tos_];
}