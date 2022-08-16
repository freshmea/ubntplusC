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

RationN::~RationN()
{

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

void RationN::rMultiply(RationN *pr1)
{
	self.car = self.car * pr1->car;
	self.ord = self.ord * pr1->ord;
	self.optimal();
}

void RationN::rPlus(RationN *pr1)
{
	self.car = self.car * pr1->ord + pr1->car * self.ord;
	self.ord = self.ord * pr1->ord;
	self.optimal();
}

void RationN::rMinus(RationN *pr1)
{
	self.car = self.car * pr1->ord - pr1->car * self.ord;
	self.ord = self.ord * pr1->ord;
	self.optimal();
}

void RationN::rDevide(RationN *pr1)
{
	self.car = self.car * pr1->ord;
	self.ord = self.ord * pr1->car;
	self.optimal();
}

void RationN::optimal()
{
	for(int i=2;i < self.ord;i++){
		if(!(self.ord%i) && !(self.car%i)) {
			self.car /= i;
			self.ord /= i;
		}
	}
}

double RationN::print()
{
	return (double)self.car/self.ord;
}