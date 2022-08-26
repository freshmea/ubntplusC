#include "rationN.h"
#include "string.h"
#include <cassert>
#include <iostream>
#include <climits>


std::ostream& operator<<(std::ostream& out, const RationN& rhs)
{
	out << "(" << rhs.car_ << "/ " << rhs.ord_ << ")" ;
	return out;
}
RationN::RationN(int car, int ord)
{
	assert(check( (long int)car_, (long int)ord_));
	car_ = car;
	assert(ord );
	ord_ = ord;
}

const RationN& RationN::operator+=(const RationN& rhs)
{
	assert(check( (long int)car_+rhs.car_, (long int)ord_+rhs.ord_ )); 
	car_ += rhs.car_;
	ord_ += rhs.ord_;
	optimal();
	return *this;
}
const RationN& RationN::operator-=(const RationN& rhs)
{
	assert(check( (long int)car_-rhs.car_, (long int)ord_-rhs.ord_));
	car_ -= rhs.car_;
	ord_ -= rhs.ord_;
	optimal();
	return *this;
}
const RationN& RationN::operator*=(const RationN& rhs)
{
	assert(check((long int)car_*rhs.car_, (long int)ord_*rhs.ord_));
	car_ *= rhs.car_;
	ord_ *= rhs.ord_;
	optimal();
	return *this;
}
const RationN& RationN::operator/=(const RationN& rhs)
{
	assert(check((long int)car_*rhs.ord_, (long int)ord_*rhs.car_));
	car_ *= rhs.ord_;
	ord_ *= rhs.car_;
	optimal();
	return *this;
}

const RationN& RationN::operator+=(const int& rhs)
{
	assert(check ((long int)car_ +rhs*ord_ ));
	car_ = car_ + rhs*ord_;
	return *this;
}
const RationN& RationN::operator-=(const int& rhs)
{
	assert(check((long int)car_ - (long int)rhs*ord_ ));
	car_ = car_ - rhs*ord_;
	return *this;
}
const RationN& RationN::operator*=(const int& rhs)
{
	assert (check((long int)car_ * rhs));
	car_ *= rhs;
	optimal();
	return *this;
}
const RationN& RationN::operator/=(const int& rhs)
{
	assert (check((long int)ord_ * rhs));
	ord_ *=rhs;
	optimal();
	return *this;
}


const bool RationN::operator==(const RationN& rhs) const
{
	return ((double)car_/ord_ == (double)rhs.car_/rhs.ord_);
}

const bool RationN::operator!=(const RationN& rhs) const
{
	return !operator==(rhs);
}

const bool RationN::operator>(const RationN& rhs) const
{
	return ((double)car_/ord_ > (double)rhs.car_/rhs.ord_);
}
const bool RationN::operator<(const RationN& rhs) const
{
	return ((double)car_/ord_ < (double)rhs.car_/rhs.ord_);	
}
const bool RationN::operator<=(const RationN& rhs) const
{
	return ((double)car_/ord_ <= (double)rhs.car_/rhs.ord_);	
}
const bool RationN::operator>=(const RationN& rhs) const
{
	return ((double)car_/ord_ >= (double)rhs.car_/rhs.ord_);	
}

RationN::operator String() const
{
	char buf[100];
	sprintf(buf, "%d/%d", car_, ord_);
	String result(buf);

	return result;
}

const int RationN::card() const
{
	return car_;
}
const int RationN::ordi() const
{
	return ord_;
}

void RationN::card(int car)
{
	car_ = car;
}

void RationN::ordi(int ord)
{
	ord_ = ord;
}

const RationN RationN::operator*(const RationN& rhs) const
{
	assert(check((long int)car_ * rhs.car_) );
	RationN tmp(car_ * rhs.car_, ord_ * rhs.ord_);
	tmp.optimal();
	return tmp;
}

const RationN RationN::operator*(const int& rhs) const
{
	assert( check((long int)car_ * rhs));
	RationN tmp(car_ * rhs, ord_);
	tmp.optimal();
	return tmp;
}

const RationN RationN::operator+(const RationN& rhs) const
{
	assert(check((long int)car_*rhs.ord_+ (long int)rhs.car_ * ord_, (long int)ord_*rhs.ord_));
	RationN tmp(car_ * rhs.ord_ + rhs.car_ * ord_, ord_ * rhs.ord_);
	tmp.optimal();
	return tmp;
}

const RationN RationN::operator+(const int& rhs) const
{
	assert(check((long int)car_ + (long int)rhs * ord_));
	RationN tmp(car_ + rhs * ord_, ord_);
	tmp.optimal();
	return tmp;
}

const RationN RationN::operator-(const RationN& rhs) const
{
	assert(check((long int)car_ * rhs.ord_ - (long int)rhs.car_ * ord_, (long int)ord_ * rhs.ord_));
	RationN tmp(car_ * rhs.ord_ - rhs.car_ * ord_, ord_ * rhs.ord_);
	tmp.optimal();
	return tmp;
}

const RationN RationN::operator-(const int& rhs) const
{
	assert(check((long int)car_- (long int)rhs *ord_));
	RationN tmp(car_ - rhs * ord_, ord_);
	tmp.optimal();
	return tmp;
}

const RationN RationN::operator/(const RationN& rhs) const
{
	assert(check((long int)car_ * rhs.ord_, (long int)ord_ * rhs.car_));
	RationN tmp(car_ * rhs.ord_, ord_ * rhs.car_);
	tmp.optimal();
	return tmp;
}

const RationN RationN::operator/(const int& rhs) const
{
	assert(check((long int)ord_ * rhs));
	RationN tmp(car_, ord_ * rhs);
	tmp.optimal();
	return tmp;
}

void RationN::optimal()
{
	// 유클리드 호재법.
	int r;
	int a = ord_;
	int b = car_;
	if ( b > a){
		int tmp = a;
		a = b;
		b = tmp;
	}
	r = a % b;
	while (r ){
		a = b;
		b = r;

		r = a % b;
	}
	ord_ = ord_/ b;
	car_ = car_/b;
}

const bool RationN::check(long int a, long int b) const
{
	if (a>INT_MAX || a<INT_MIN) return false;
	if (b>INT_MAX || b<INT_MIN) return false;
	return true;
}

const double RationN::rPrint() const
{
	return (double)car_/ord_;
}