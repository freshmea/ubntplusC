#include "queue.h"
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
: arr_(size), front_(0), rear_(0)
{

}

bool Qu::operator==(const Qu& rhs) const
{
	if(front_ != rhs.front_)
		return false;
	if(rear_ != rhs.rear_)
		return false;
	return arr_ == rhs.arr_;
}

void Qu::push(int data)
{
	assert(!full());
	rear_++;
	if(rear_ == size_){
		rear_ = 0;
		assert(rear_ != front_);
		arr_[size_-1] = data;
	}else {
	assert(rear_ != front_);
	arr_[rear_-1] = data;
	}
}

int Qu::pop()
{
	if(front_ == size_)
		front_ = 0;
	assert(front_ != rear_);
	return arr_[front_++];
}

bool Qu::full() const
{
	if(front_+1 == size_ ) return rear_ != 0;
	return front_+1 != rear_;
}

bool Qu::empty() const
{
	return rear_ == front_;
}