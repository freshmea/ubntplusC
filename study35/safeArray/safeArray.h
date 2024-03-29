#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include "array.h"

extern const int SAFE_ARRAY_SIZE;

class SafeArray : public Array {
private:
	static const int SAFE_ARRAY_SIZE;
public:
	explicit SafeArray(int size = SAFE_ARRAY_SIZE);
	SafeArray(const int *pArr, int size);

	//SafeArray(const SafeArray& rhs);
	//~SafeArray();
	// SafeArray& operator=(const SafeArray& rhs);

	bool operator==(const SafeArray& rhs) const;

	int& operator[](int index);
	const int& operator[](int index) const;

};

#endif