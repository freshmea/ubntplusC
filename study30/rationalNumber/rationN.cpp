#include "rationN.h"
#include <cassert>
#include <iostream>
#define self	(*this)

RationN::RationN()
{
	self.car = 0;
	self.ord = 1;
}

RationN::RationN(int car)
{
	self.car = car;
	self.ord = 1;
}

RationN::RationN(int car, int ord)
{
	self.car = car;
	assert(ord );
	self.ord = ord;
}

RationN::RationN(const RationN& rhs)
{
	self.car = rhs.car;
	self.ord = rhs.ord;
}

RationN::~RationN()
{

}

void RationN::operator=(const RationN& rhs)
{
	self.car = rhs.car;
	self.ord = rhs.ord;
}

bool RationN::operator==(const RationN& rhs)
{
	return ((double)self.car/self.ord == (double)rhs.car/rhs.ord);
}

int RationN::card()
{
	return self.car;
}
int RationN::ordi()
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

RationN RationN::operator*(const RationN& rhs)
{
	RationN tmp;
	tmp.car = self.car * rhs.car;
	tmp.ord = self.ord * rhs.ord;
	tmp.optimal();
	return tmp;
}

RationN RationN::operator*(const int& rhs)
{
	RationN tmp;
	tmp.car = self.car * rhs;
	tmp.ord = self.ord;
	tmp.optimal();
	return tmp;
}

RationN RationN::operator+(const RationN &rhs)
{
	RationN tmp;
	tmp.car = self.car * rhs.ord + rhs.car * self.ord;
	tmp.ord = self.ord * rhs.ord;
	tmp.optimal();
	return tmp;
}

RationN RationN::operator+(const int& rhs)
{
	RationN tmp;
	tmp.car = self.car + rhs * self.ord;
	tmp.ord = self.ord ;
	tmp.optimal();
	return tmp;
}

RationN RationN::operator-(const RationN& rhs)
{
	RationN tmp;
	tmp.car = self.car * rhs.ord - rhs.car * self.ord;
	tmp.ord = self.ord * rhs.ord;
	tmp.optimal();
	return tmp;
}

RationN RationN::operator-(const int& rhs)
{
	RationN tmp;
	tmp.car = self.car - rhs * self.ord;
	tmp.ord = self.ord ;
	tmp.optimal();
	return tmp;
}

RationN RationN::operator/(const RationN& rhs)
{
	RationN tmp;
	tmp.car = self.car * rhs.ord;
	tmp.ord = self.ord * rhs.car;
	tmp.optimal();
	return tmp;
}

RationN RationN::operator/(const int& rhs)
{
	RationN tmp;
	tmp.car = self.car;
	tmp.ord = self.ord * rhs;
	tmp.optimal();
	return tmp;
}

void RationN::optimal()
{
	for(int i=2;i <= self.ord;i++){
		if(!(self.ord%i) && !(self.car%i)) {
			self.car /= i;
			self.ord /= i;
		}
	}
}

double RationN::rPrint()
{
	return (double)self.car/self.ord;
}