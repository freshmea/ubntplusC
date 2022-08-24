#ifndef BOUNDARRAY_H
#define BOUNDARRAY_H
#include "safeArray.h"

template <typename T>
class BoundArray : public SafeArray<T>{
private:
	int low_;
public:
	explicit BoundArray(int upper = Array<T>::getDefaultSize());
	explicit BoundArray(int lower, int upper);

	bool operator==(const BoundArray<T>& rhs) const;
	T& operator[](int index);
	const T& operator[](int index) const;

	int lower() const;
	
	int upper() const;
};

template <typename T>
BoundArray<T>::BoundArray(int upper)
: SafeArray<T>(upper), low_(0)
{
	for(int i=0;i<upper;++i){
		(*this)[i] = i;
	}
}

template <typename T>
BoundArray<T>::BoundArray(int low, int upper)
: SafeArray<T>(upper-low), low_(low)
{
	for(int i=low; i<upper;++i){
		(*this)[i] = i;
	}
}

template <typename T>
bool BoundArray<T>::operator==(const BoundArray<T>& rhs) const
{
	return (low_ == rhs.low_ && SafeArray<T>::operator==((SafeArray<T>)rhs));
}

template <typename T>
T& BoundArray<T>::operator[](int index)
{
	return SafeArray<T>::operator[](index - low_);
}

template <typename T>
const T& BoundArray<T>::operator[](int index) const
{
	return SafeArray<T>::operator[](index - low_);
}

template <typename T>
int BoundArray<T>::lower() const
{
	return low_;
}

template <typename T>
int BoundArray<T>::upper() const
{
	return low_ + Array<T>::size_;
}

#endif