#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include "array.h"
#include <cassert>

template <typename T>
class SafeArray : public Array<T> {
private:
	static const int SAFE_ARRAY_SIZE;
public:
	explicit SafeArray(int size = SAFE_ARRAY_SIZE);
	SafeArray(const T *pArr, int size);

	bool operator==(const SafeArray<T>& rhs) const;

	virtual T& operator[](int index);
	virtual const T& operator[](int index) const;

};

template <typename T>
const int SafeArray<T>::SAFE_ARRAY_SIZE = 100;

template <typename T>
SafeArray<T>::SafeArray(int size) : Array<T>(size){}

template <typename T>
SafeArray<T>::SafeArray(const T *pArr, int size) : Array<T>(pArr, size){}

template <typename T>
bool SafeArray<T>::operator==(const SafeArray<T>& rhs) const
{return Array<T>::operator==( static_cast<Array<T> >(rhs));}

template <typename T>
T& SafeArray<T>::operator[](int index)
{
	assert(index >= 0 && index< Array<T>::size_);	// 나중에 다시 확인.
	return Array<T>::operator[](index);
}

template <typename T>
const T& SafeArray<T>::operator[](int index) const
{
	assert(index >= 0 && index< Array<T>::size_);
	return Array<T>::operator[](index);
}

#endif