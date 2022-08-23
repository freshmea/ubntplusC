#include "safeArray.h"

BoundArray(int low)
: SafeArray(low), low_(0)
{
	for(int i=0;i<low;++i){
		(*this)[i] = i;
	}
}
BoundArray(int low, int upper)
: SafeArray(upper-low), low_(low)
{
	for(int i=low; i<upper-low;++i){
		(*this)[i] = low+i;
	}
}

bool BoundArray::operator==(const BoundArray& rhs) const;
{
	if (low_ != rhs.low_) return false;
	return SafeArray::operator==((SafeArray)rhs);
}

int& BoundArray::operator[](int index)
{
	return SafeArray::operator[](index);
}

const int& BoundArray::operator[](int index) const
{
	return SafeArray::operator[](index);
}

int BoundArray::lower() const
{
	return low_;
}

int BoundArray::upper() const
{
	return size();
}