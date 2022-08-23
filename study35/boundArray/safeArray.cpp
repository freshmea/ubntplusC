#include <cassert>
#include "safeArray.h"


SafeArray::SafeArray(int size) : Array(size){}
SafeArray::SafeArray(const int *pArr, int size) : Array(pArr, size){}
bool SafeArray::operator==(const SafeArray& rhs) const
{
	return Array::operator==((Array)rhs);
}

int& SafeArray::operator[](int index)
{
	assert(index >= 0 && index< size_);	
	return Array::operator[](index);
}
const int& SafeArray::operator[](int index) const
{
	assert(index >= 0 && index< size_);
	return Array::operator[](index);
}
