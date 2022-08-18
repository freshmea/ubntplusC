#include "rationN.h"
#include <cassert>
#include <iostream>
#include <climits>
#define self	(*this)


std::ostream& operator<<(std::ostream& out, const RationN& rhs)
{
	out << "(" << rhs.car << "/ " << rhs.ord << ")" ;
	return out;
}
RationN::RationN(int car, int ord)
{
	assert(check( (long int)self.car, (long int)self.ord));
	self.car = car;
	assert(ord );
	self.ord = ord;
}

const RationN& RationN::operator+=(const RationN& rhs)
{
	assert(check( (long int)self.car+rhs.car, (long int)self.ord+rhs.ord )); 
	self.car += rhs.car;
	self.ord += rhs.ord;
	self.optimal();
	return self;
}
const RationN& RationN::operator-=(const RationN& rhs)
{
	assert( (long int)self.car-rhs.car >INT_MIN);
	assert( (long int)self.ord-rhs.ord >INT_MIN);
	self.car -= rhs.car;
	self.ord -= rhs.ord;
	self.optimal();
	return self;
}
const RationN& RationN::operator*=(const RationN& rhs)
{
	assert((long int)self.car*rhs.car <INT_MAX);
	assert((long int)self.ord*rhs.ord <INT_MAX);
	self.car *= rhs.car;
	self.ord *= rhs.ord;
	self.optimal();
	return self;
}
const RationN& RationN::operator/=(const RationN& rhs)
{
	assert((long int)self.car*rhs.ord <INT_MAX);
	assert((long int)self.ord*rhs.car <INT_MAX);
	self.car *= rhs.ord;
	self.ord *= rhs.car;
	self.optimal();
	return self;
}
// RationN& RationN::operator=(const int& rhs) // 나중에 체크.
// {
// 	self.car = rhs;
// 	self.ord = 1;
// 	return self;
// }

const RationN& RationN::operator+=(const int& rhs)
{
	assert((long int)self.car +rhs*self.ord < INT_MAX);
	self.car = self.car + rhs*self.ord;
	return self;
}
const RationN& RationN::operator-=(const int& rhs)
{
	assert((long int)self.car -rhs*self.ord > INT_MIN);
	self.car = self.car - rhs*self.ord;
	return self;
}
const RationN& RationN::operator*=(const int& rhs)
{
	assert ((long int)self.car * rhs < INT_MAX);
	self.car *= rhs;
	self.optimal();
	return self;
}
const RationN& RationN::operator/=(const int& rhs)
{
	assert ((long int)self.ord * rhs<INT_MAX);
	self.ord *=rhs;
	self.optimal();
	return self;
}


const bool RationN::operator==(const RationN& rhs) const
{
	return ((double)self.car/self.ord == (double)rhs.car/rhs.ord);
}

const bool RationN::operator!=(const RationN& rhs) const
{
	return !self.operator==(rhs);
}

const bool RationN::operator>(const RationN& rhs) const
{
	return ((double)self.car/self.ord > (double)rhs.car/rhs.ord);
}
const bool RationN::operator<(const RationN& rhs) const
{
	return ((double)self.car/self.ord < (double)rhs.car/rhs.ord);	
}
const bool RationN::operator<=(const RationN& rhs) const
{
	return ((double)self.car/self.ord <= (double)rhs.car/rhs.ord);	
}
const bool RationN::operator>=(const RationN& rhs) const
{
	return ((double)self.car/self.ord >= (double)rhs.car/rhs.ord);	
}

const int RationN::card() const
{
	return self.car;
}
const int RationN::ordi() const
{
	return self.ord;
}

void RationN::card(int re)
{
	self.car = car;
}

void RationN::ordi(int im)
{
	self.ord = ord;
}

const RationN RationN::operator*(const RationN& rhs) const
{
	assert( (long int)self.car * rhs.car <INT_MAX ) ;
	RationN tmp(self.car * rhs.car, self.ord * rhs.ord);
	tmp.optimal();
	return tmp;
}

const RationN RationN::operator*(const int& rhs) const
{
	assert( (long int)self.car * rhs <INT_MAX );
	RationN tmp(self.car * rhs, self.ord);
	tmp.optimal();
	return tmp;
}

const RationN RationN::operator+(const RationN& rhs) const
{
	assert((long int)self.car*rhs.ord+ (long int)rhs.car * self.ord <INT_MAX);
	assert((long int)self.ord*rhs.ord<INT_MAX);
	RationN tmp(self.car * rhs.ord + rhs.car * self.ord, self.ord * rhs.ord);
	tmp.optimal();
	return tmp;
}

const RationN RationN::operator+(const int& rhs) const
{
	assert((long int)self.car + (long int)rhs * self.ord<INT_MAX);
	RationN tmp(self.car + rhs * self.ord, self.ord);
	tmp.optimal();
	return tmp;
}

const RationN RationN::operator-(const RationN& rhs) const
{
	assert((long int)self.car * rhs.ord - (long int)rhs.car * self.ord>INT_MIN);
	assert((long int)self.ord * rhs.ord<INT_MAX);
	RationN tmp(self.car * rhs.ord - rhs.car * self.ord, self.ord * rhs.ord);
	tmp.optimal();
	return tmp;
}

const RationN RationN::operator-(const int& rhs) const
{
	assert((long int)self.car- (long int)rhs *self.ord>INT_MIN);
	RationN tmp(self.car - rhs * self.ord, self.ord);
	tmp.optimal();
	return tmp;
}

const RationN RationN::operator/(const RationN& rhs) const
{
	assert((long int)self.car * rhs.ord<INT_MAX);
	assert((long int)self.ord * rhs.car<INT_MAX);
	RationN tmp(self.car * rhs.ord, self.ord * rhs.car);
	tmp.optimal();
	return tmp;
}

const RationN RationN::operator/(const int& rhs) const
{
	assert((long int)self.ord * rhs<INT_MAX);
	RationN tmp(self.car, self.ord * rhs);
	tmp.optimal();
	return tmp;
}

void RationN::optimal()
{
	bool restart = false;
	for(int i=2;i <= self.ord;i++){
		if(!(self.ord%i) && !(self.car%i)) {
			self.car /= i;
			self.ord /= i;
			restart = true;
			break;
		}
	}
	if(restart) self.optimal();
}

const bool RationN::check(long int a, long int b) const
{
	if (a>INT_MAX || a<INT_MIN) return false;
	if (b>INT_MAX || b<INT_MIN) return false;
	return true;
}

const double RationN::rPrint() const
{
	return (double)self.car/self.ord;
}