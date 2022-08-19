#include "stack.h"
#include <cstdio>
#include <cassert>
#include <cstring>
#include <iostream>
#include "string.h"
#define MAXSTACK 1024
#define self (*this) 	// python style


Stack::Stack(String name)
:tos_(0), size_(16), pArr_(new int[size_]), name_(name)
{
	assert(self.pArr_);
}

Stack::~Stack()
{
	delete [] pArr_;
}

void Stack::resize()
{
	size_ *= 2;
	int *temp_pArr = new int[size_];
	for(int i=0;i< size_/2 ;i++){
		temp_pArr[i] = pArr_[i];
	}
	delete [] pArr_;
	pArr_ = temp_pArr;

}

void Stack::push(const int data)
{
	if(tos_ >= size_){
		assert(size_<MAXSTACK+1);
		resize();
		std::cout << name_ << "overstack, result of Adding size : " << size_ << std::endl;
	}
	pArr_[tos_++] = data;
	std::cout << tos_ << std::endl;
}

Stack Stack::operator=(const Stack& rhs)
{
	name_ = rhs.name_;
	for(int i=0;i<rhs.size_;i++)
		pArr_[i] = rhs.pArr_[i];
	tos_  = rhs.tos_;
	size_ = rhs.size_;
	return self;
}

Stack Stack::operator+(const Stack& rhs)
{
	Stack temp("plus");
	temp.size_ = size_+ rhs.size_;
	temp.tos_ = tos_ + rhs.tos_;
	temp.name_ = name_ + rhs.name_;
	for(int i=0;i<tos_;i++){
		temp.push(pArr_[i]);
	}
	for(int i=0;i<rhs.tos_;i++){
		temp.push(rhs.pArr_[i]);
	}
	return temp;
}

const String Stack::getName() const 
{
	return name_;
}

int Stack::pop()
{
	assert(tos_);
	return pArr_[--tos_];
}
