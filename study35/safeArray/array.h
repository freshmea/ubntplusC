#ifndef ARRAY_H
#define ARRAY_H
// #define ARRAYSIZE 100  		// 컴파일전에 코드가 바뀜. 
#include <ostream>

// const int ARRAY_SIZE = 100;    3번 라인과 6번 라인의 차이. 컴파일시에 타입이 체크가 됨. 
// extern const int ARRAY_SIZE;  	// array.cpp 에 선언된 전역변수를 가지고 옴. 

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