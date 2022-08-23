#ifndef BOUNDARRAY_H
#define BOUNDARRAY_H
#include "safeArray.h"

class BoundArray : public SafeArray{
private:
	int low_;
public:
	explicit BoundArray(int upper = getDefaultSize());
	explicit BoundArray(int lower, int upper);

	bool operator==(const BoundArray& rhs) const;
	int& operator[](int index);
	const int& operator[](int index) const;

	int lower() const;
	int upper() const;
};

#endif