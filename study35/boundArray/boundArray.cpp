#include "boundArray.h"

BoundArray::BoundArray(int upper)
: SafeArray(upper), low_(0)
{
	for(int i=0;i<upper;++i){
		// this->Array::pArr_[i] = i;
		// this->SafeArray::operator[](i) = i;
		(*this)[i] = i;
	}
}
BoundArray::BoundArray(int low, int upper)
: SafeArray(upper-low), low_(low)
{
	for(int i=low; i<upper;++i){
		// this->Array::pArr_[i] = i;
		(*this)[i] = i;
	}
}

bool BoundArray::operator==(const BoundArray& rhs) const
{
	// if (low_ != rhs.low_) return false;
	// return SafeArray::operator==((SafeArray)rhs);
	return (low_ == rhs.low_ && SafeArray::operator==(static_cast<SafeArray>(rhs)));
}

int& BoundArray::operator[](int index)
{
	return SafeArray::operator[](index - low_);
}

const int& BoundArray::operator[](int index) const
{
	return SafeArray::operator[](index - low_);
}

int BoundArray::lower() const
{
	return low_;
}

int BoundArray::upper() const
{
	return low_ + size_;
}