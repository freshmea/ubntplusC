#include "safeArray.h"
#include <cassert>

SafeArray::SafeArray(int size)
: Array(size)
{

}

SafeArray::SafeArray(const int *pArr, int size)
:Array(pArr, size)
{

}
/*
SafeArray::SafeArray(const SafeArray& rhs)
: Array( (Array)rhs)		//타입 캐스팅을 하면 자식과 관련된 정보는 슬라이싱 된다. 
{

}

SafeArray::~SafeArray()
{

}

SafeArray& SafeArray::operator=(const SafeArray& rhs)
{
	return this->Array::operator=((Array)rhs);
	// return (Array)(*this) = (Array)rhs;
}
*/			// 컴파일러에서 자동으로 만들어지는 코드 .


// bool SafeArray::operator==(const SafeArray& rhs) const
// {
// 	return this->Array::operator==( (Array)rhs);
// }			// 부모 클래스와 같으므로 생략 해도 똑같이 작동. 

int& SafeArray::operator[](int index)
{
	assert(index >= 0 && index</*this->Array::*/size());
	return this->Array::operator[](index);
}

const int& SafeArray::operator[](int index) const
{
	assert(index >= 0 && index</*this->Array::*/size());
	return this->Array::operator[](index);
}