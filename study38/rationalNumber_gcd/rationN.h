#ifndef RATIONN_H
#define RATIONN_H
#include <ostream>
#include "string.h"

class RationN{
friend std::ostream& operator<<(std::ostream& out,const RationN& rhs);
private:
	int car_; 	//up number cardinal number
	int ord_; 	//down number ordinal number
public:
	// 복사 생성자 소멸자 없앰. 대입 연산자 없앰.
	RationN(int car = 0, int ord = 1);

	const RationN& operator+=(const RationN& rhs);
	const RationN& operator-=(const RationN& rhs);
	const RationN& operator*=(const RationN& rhs);
	const RationN& operator/=(const RationN& rhs);
	const RationN& operator+=(const int& rhs);
	const RationN& operator-=(const int& rhs);
	const RationN& operator*=(const int& rhs);
	const RationN& operator/=(const int& rhs);

	const bool operator==(const RationN& rhs) const;
	const bool operator!=(const RationN& rhs) const;
	const bool operator>(const RationN& rhs) const;
	const bool operator<(const RationN& rhs) const;
	const bool operator<=(const RationN& rhs) const;
	const bool operator>=(const RationN& rhs) const;
	
	const RationN operator*(const RationN& rhs) const;
	const RationN operator*(const int& rhs) const;
	const RationN operator+(const RationN& rhs) const;
	const RationN operator+(const int& rhs) const;
	const RationN operator-(const RationN& rhs) const;
	const RationN operator-(const int& rhs) const;
	const RationN operator/(const RationN& rhs) const;
	const RationN operator/(const int& rhs) const;
	const int card() const;
	const int ordi() const;

	operator String() const;

	void card(int car);
	void ordi(int ord);
	void optimal();
	const bool check(long int a, long int b = 0) const;
	const double rPrint() const;
};

#endif