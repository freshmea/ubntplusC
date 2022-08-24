#include <cassert>
#include "safeArray.h"

const int SafeArray::SAFE_ARRAY_SIZE = 100;

SafeArray::SafeArray(int size) : Array(size){}
SafeArray::SafeArray(const int *pArr, int size) : Array(pArr, size){}

// SafeArray::SafeArray(const SafeArray& rhs) 
// : Array((Array)rhs){memberwise copy} // 자동으로 생성됨.
// SafeArry& SafeArray::operator=(const SafeArray& rhs)
// {
// 	this->Array::operator=((Array)rhs);
// 	// memberwise copy
// 	return *this;
// }									// 자동으로 생성됨.

bool SafeArray::operator==(const SafeArray& rhs) const
{
	return Array::operator==( static_cast<Array>(rhs));
}

int& SafeArray::operator[](int index)
{
	assert(index >= 0 && index< size());
	return Array::operator[](index);
}
const int& SafeArray::operator[](int index) const
{
	assert(index >= 0 && index< size());
	return Array::operator[](index);
}
