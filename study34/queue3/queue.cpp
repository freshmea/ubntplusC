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
	if(front_ != rhs.front_ || rear_ != rhs.rear_)
		return false;
	for(int i=front_;i != rear_;i++){
		if(i == arr_.size()) i = 0;
		if(arr_[i] != rhs.arr_[i]) return false;
	}
	return true;
}

void Qu::push(int data)
{
	// assert(!full()); 		// 나중에 확인하자.
	rear_++;
	if(rear_ == arr_.size()){
		rear_ = 0;
		assert(rear_ != front_);
		arr_[arr_.size()-1] = data;
	}else {
	assert(rear_ != front_);
	arr_[rear_-1] = data;
	}
}

int Qu::pop()
{
	if(front_ == arr_.size())
		front_ = 0;
	assert(!empty());
	return arr_[front_++];
}

bool Qu::full() const
{
	if(front_+1 == arr_.size()) 
		return rear_ == 0;
	return front_+1 == rear_;
}

bool Qu::empty() const
{
	return rear_ == front_;
}