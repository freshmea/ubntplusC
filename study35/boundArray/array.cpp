#include "array.h"
#include <cassert>
#define self	(*this)


const int Array::ARRAY_SIZE = 100;

int Array::getDefaultSize()
{
	return Array::ARRAY_SIZE;
}

Array::Array(int size)
: pArr_(new int [size]), size_(size)
{
	assert(pArr_ );
}

Array::Array(const int *pArr, int size)
: pArr_(new int[size]), size_(size)
{
	assert(pArr_ );
	for(int i=0;i<size; ++i)
		pArr_[i] = pArr[i];
}


Array::Array(const Array& rhs)
: pArr_(new int [rhs.size_]), size_(rhs.size_)
{
	assert(pArr_ );

	for(int i=0;i<size_; ++i)
		pArr_[i] = rhs.pArr_[i];
}

Array::~Array()
{
	delete [] pArr_;
}

Array& Array::operator=(const Array& rhs)
{
	if(this != &rhs){
		delete [] self.pArr_;
		pArr_ = new int[rhs.size_];
		assert(pArr_ );
		size_ = rhs.size_;

		for(int i=0;i<size_; ++i)
			pArr_[i] = rhs.pArr_[i];
	}
	return self;
}

bool Array::operator==(const Array& rhs) const
{
	if (size_ != rhs.size_)
		return false;
	int i;
	for(i=0;i<size_; ++i){
		if(pArr_[i] != rhs.pArr_[i]) break;
	}
	return i == size_;
}

bool Array::operator!=(const Array& rhs) const
{
	return !operator==(rhs);
}

int& Array::operator[](int idx)
{
	return pArr_[idx];
}

const int& Array::operator[](int idx) const
{
	return pArr_[idx];
}

int Array::size() const
{
	return size_;
}