#ifndef QUEUE_H
#define QUEUE_H
#include "array.h"
#include <cassert>

template <typename T>
class Qu{
	private:
		Array<T> arr_;
		int front_;
		int rear_;

		static const int QUEUE_SIZE;
	public:
		Qu(int size = QUEUE_SIZE);
		bool operator==(const Qu& rhs) const;

		// void rearrange();
		// void resize();
		void push(const T& data);
		const T& pop();
		bool full() const;
		bool empty() const;
};


template <typename T>
const int Qu<T>::QUEUE_SIZE= 100;

template <typename T>
Qu<T>::Qu(int size)
: arr_(size), front_(0), rear_(0){}

template <typename T>
bool Qu<T>::operator==(const Qu<T>& rhs) const
{
	if(front_ != rhs.front_ || rear_ != rhs.rear_)
		return false;
	for(int i=front_;i != rear_;i++){
		if(i == arr_.size()) i = 0;
		if(arr_[i] != rhs.arr_[i]) return false;
	}
	return true;
}

template <typename T>
void Qu<T>::push(const T& data)
{
	assert(!full()); 		// 나중에 확인하자.
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

template <typename T>
const T& Qu<T>::pop()
{
	if(front_ == arr_.size())
		front_ = 0;
	assert(!empty());
	return arr_[front_++];
}

template <typename T>
bool Qu<T>::full() const
{
	if(rear_+1 == arr_.size()) 
		return rear_ == 0;
	return rear_+1 == front_;
}

template <typename T>
bool Qu<T>::empty() const
{return rear_ == front_;}

#endif