#ifndef ARRAY_H
#define ARRAY_H
#include <cassert>
#define self	(*this)

template <typename T>
class Array{
private:
	T *pArr_;
	static const int ARRAY_SIZE;
protected:
	int size_;
public:

	static int getDefaultSize();
	explicit Array(int size = ARRAY_SIZE);
	Array(const T *pArr, int size);
	Array(const Array<T>& rhs);
	virtual ~Array();

	Array<T>& operator=(const Array<T>& rhs);

	bool operator==(const Array<T>& rhs) const;
	bool operator!=(const Array<T>& rhs) const;

	virtual T& operator[](int idx);
	virtual const T& operator[](int idx) const;

	int size() const;
};

template <typename T>
const int Array<T>::ARRAY_SIZE = 100;

template <typename T>
int Array<T>::getDefaultSize()
{return Array<T>::ARRAY_SIZE;}

template <typename T>
Array<T>::Array(int size): pArr_(new T [size]), size_(size)
{assert(pArr_ );}

template <typename T>
Array<T>::Array(const T *pArr, int size) : pArr_(new T[size]), size_(size)
{
	assert(pArr_ );
	for(int i=0;i<size; ++i)
		pArr_[i] = pArr[i];
}

template <typename T>
Array<T>::Array(const Array<T>& rhs) : pArr_(new T [rhs.size_]), size_(rhs.size_)
{
	assert(pArr_ );
	for(int i=0;i<size_; ++i)
		pArr_[i] = rhs.pArr_[i];
}

template <typename T>
Array<T>::~Array() {delete [] pArr_;}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& rhs)
{
	if(this != &rhs){
		delete [] self.pArr_;
		pArr_ = new T[rhs.size_];
		assert(pArr_ );
		size_ = rhs.size_;
		for(int i=0;i<size_; ++i)
			pArr_[i] = rhs.pArr_[i];
	}
	return self;
}

template <typename T>
bool Array<T>::operator==(const Array<T>& rhs) const
{
	if (size_ != rhs.size_)
		return false;
	int i;
	for(i=0;i<size_; ++i){
		if(pArr_[i] != rhs.pArr_[i]) break;
	}
	return i == size_;
}

template <typename T>
bool Array<T>::operator!=(const Array<T>& rhs) const
{return !operator==(rhs);}

template <typename T>
T& Array<T>::operator[](int idx)
{return pArr_[idx];}

template <typename T>
const T& Array<T>::operator[](int idx) const
{return pArr_[idx];}

template <typename T>
int Array<T>::size() const
{return size_;}

#endif