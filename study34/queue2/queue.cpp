#include "queue.h"
#include <cstdio>
#include <cstdlib>
#include <cassert>
#define self (*this) 	// python style

const int Qu::QUEUE_SIZE= 100;

// void Qu::resize()
// {
// 	self.size *= 2;
// 	int *temp_pArr = new int[self.size];
// 	assert(temp_pArr);
// 	for(int i=0;i< self.size/2 ;i++){
// 		temp_pArr[i] = self.pArr[i];
// 	}
// 	delete [] self.pArr;
// 	self.pArr = temp_pArr;

// }

// void Qu::rearrange()
// {
// 	int temp[self.rear];
// 	for(int i=0;i<self.rear;i++){
// 		temp[i]=self.pArr[i];
// 	}
// 	for(int i=self.rear;i<self.size;i++){
// 		self.pArr[i-self.rear]=self.pArr[i];
// 	}
// 	for(int i=0;i<self.rear;i++){
// 		self.pArr[self.size-self.rear+i]=temp[i];
// 	}
// 	self.rear = self.size;
// 	self.front= 1;
// }

Qu::Qu(int size)
: pArr_(new int[size]), front_(0), rear_(0), size_(size)
{
	assert(pArr_ );
}

Qu::Qu(const Qu& rhs)
:pArr_(new int[rhs.size_]), front_(rhs.front_), rear_(rhs.rear_), size_(rhs.size_)
{
	assert( pArr_);
	// for(int i=0;i<size_;i++){    모든 버퍼를 다 비교.
	// 	pArr_[i] = rhs.pArr_[i];
	// }
	// for(int i = front_;i<rear_;i++)   원형큐가 아닐 때 비교. 
	// 	pArr_[i] = rhs.pArr_[i];
	for(int i=front_;i != rear_;i++){	// 원형큐일때 비교. 
		if(i == size_) i = 0;
		pArr_[i] == rhs.pArr_[i];
	}
}

Qu& Qu::operator=(const Qu& rhs)
{
	if(this != &rhs){
		delete []pArr_;
		pArr_ = new int[rhs.size_];
		for(int i=front_;i != rear_;i++){
			if(i == size_) i = 0;
			pArr_[i] == rhs.pArr_[i];
		}
		front_ = rhs.front_;
		rear_ = rhs.rear_;
		size_ = rhs.size_;
	}
	return *this;
}

bool Qu::operator==(const Qu& rhs) const
{
	if(front_ != rhs.front_ || rear_ != rhs.rear_)
		return false;
	for(int i=front_;i != rear_;i++){
		if(i == size_) i = 0;
		if(pArr_[i] != rhs.pArr_[i]) return false;
	}
	return true;
}

void Qu::push(int data)
{
	rear_++;
	if(rear_ == size_){
		rear_ = 0;
		assert(rear_ != front_);
		pArr_[size_-1] = data;
	}else {
	assert(rear_ != front_);
	pArr_[rear_-1] = data;
	}
}

int Qu::pop()
{
	if(front_ == size_)
		front_ = 0;
	assert(front_ != rear_);
	return pArr_[front_++];
}

Qu::~Qu()
{
	delete [] pArr_;
}

bool Qu::full() const
{
	if(front_+1 == size_ ) return rear_ == 0;
	return front_+1 == rear_;
}

bool Qu::empty() const
{
	return rear_ == front_;
}