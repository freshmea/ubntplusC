#ifndef BOUNDARRAY_H
#define BOUNDARRAY_H
#include "safeArray.h"

class BoundArray : public SafeArray{
private:
	int low_;
public:
	explicit BoundArray(int start = 100);
	explicit BoundArray(int start, int end);

	bool operator==(const SafeArray& rhs) const;
	int& operator[](int index);
	const int& operator[](int index) const;

	int lower() const;
	int upper() const;
};

#endif