#ifndef ARRAY_H
#define ARRAY_H
#include <ostream>

class Array{
// friend std::ostream& operator<<(std::ostream& out,const Array& rhs);
private:
	int *pArr_;
	int size_;
	static const int ARRAY_SIZE;

public:

	static int getDefaultSize();
	explicit Array(int size = ARRAY_SIZE);
	Array(const int *pArr, int size);
	Array(const Array& rhs);
	~Array();

	Array& operator=(const Array& rhs);

	bool operator==(const Array& rhs) const;
	bool operator!=(const Array& rhs) const;

	int& operator[](int idx);
	const int& operator[](int idx) const;

	int size() const;
};

#endif