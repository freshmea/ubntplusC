#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include "array.h"
class SafeArray : public Array {
private:
	// 추가 할게 없음.
public:
	// SafeArray();
	// SafeArray(int size = Array::ARRAYSIZE);	//private 접근이라 안됨.
	explicit SafeArray(int size = Array::getDefaultSize());	//private 접근이라 안됨.
	SafeArray(const int *pArr, int size);
	// SafeArray(const SafeArray& );
	// ~SafeArray();
	// SafeArray& operator=(const SafeArray& rhs);

	bool operator==(const SafeArray& rhs) const;

	int& operator[](int index);
	const int& operator[](int index) const;
};

#endif