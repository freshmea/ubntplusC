#include <cstring>
#include <cassert>
#include <iostream>
#include "string.h"
#define self	(*this)

std::ostream& operator<<(std::ostream& out, const String& rhs)
{
	out << rhs.str ;
	return out;
}

String::String()
{
	self.len = 0;
	self.str = new char[1];
	assert(self.str );
	self.str[0] = '\0';
}

String::String(const char *str)
{
	self.len = strlen(str);
	self.str = new char[self.len+1];
	assert(self.str );
	strcpy(self.str, str);

}

String::String(const String& rhs)
{
	self.len = strlen(rhs.str);
	self.str = new char[rhs.len+1];
	assert(self.str );
	strcpy(self.str, rhs.str);
}

String::~String()
{
	std::cout << "Destructor excution!" << (*this).<< std::endl;
	delete [] self.str;
}

const char *String::c_str()
{
	return self.str;
}

int String::size()
{
	return self.len;
}

bool String::operator==(const String& rhs)
{
	return strcmp(self.str, rhs.str) == 0;
}

String& String::operator=(const String& rhs)
{
	if( this != &rhs){
		delete [] self.str;
		self.str = new char[rhs.len+1];
		assert(self.str);
		strcpy(self.str, rhs.str);

		self.len = rhs.len;
	}
	return self;
}

const String String::operator+(const String& rhs)
{
	char *buf = new char[self.len + rhs.len+1];
	assert(buf );
	strcpy(buf, self.str);
	strcat(buf, rhs.str);

	String result(buf);
	delete [] buf;
	return result;
}

// RationN::RationN(int car, int ord)
// {
// 	assert((long int)self.car <INT_MAX);
// 	assert((long int)self.ord <INT_MAX);
// 	self.car = car;
// 	assert(ord );
// 	self.ord = ord;
// }

// RationN::RationN(const RationN& rhs)
// {
// 	self.car = rhs.car;
// 	self.ord = rhs.ord;
// }

// RationN::~RationN()
// {

// }

// RationN& RationN::operator=(const RationN& rhs)
// {
// 	self.car = rhs.car;
// 	self.ord = rhs.ord;
// 	self.optimal();
// 	return self;
// }

// RationN& RationN::operator+=(const RationN& rhs)
// {
// 	assert( (long int)self.car+rhs.car <INT_MAX );
// 	assert( (long int)self.ord+rhs.ord <INT_MAX );
// 	self.car += rhs.car;
// 	self.ord += rhs.ord;
// 	self.optimal();
// 	return self;
// }
// RationN& RationN::operator-=(const RationN& rhs)
// {
// 	assert( (long int)self.car-rhs.car >INT_MIN);
// 	assert( (long int)self.ord-rhs.ord >INT_MIN);
// 	self.car -= rhs.car;
// 	self.ord -= rhs.ord;
// 	self.optimal();
// 	return self;
// }
// RationN& RationN::operator*=(const RationN& rhs)
// {
// 	assert((long int)self.car*rhs.car <INT_MAX);
// 	assert((long int)self.ord*rhs.ord <INT_MAX);
// 	self.car *= rhs.car;
// 	self.ord *= rhs.ord;
// 	self.optimal();
// 	return self;
// }
// RationN& RationN::operator/=(const RationN& rhs)
// {
// 	assert((long int)self.car*rhs.ord <INT_MAX);
// 	assert((long int)self.ord*rhs.car <INT_MAX);
// 	self.car *= rhs.ord;
// 	self.ord *= rhs.car;
// 	self.optimal();
// 	return self;
// }
// RationN& RationN::operator=(const int& rhs)
// {
// 	self.car = rhs;
// 	self.ord = 1;
// 	return self;
// }
// RationN& RationN::operator+=(const int& rhs)
// {
// 	assert((long int)self.car +rhs*self.ord < INT_MAX);
// 	self.car = self.car + rhs*self.ord;
// 	return self;
// }
// RationN& RationN::operator-=(const int& rhs)
// {
// 	assert((long int)self.car -rhs*self.ord > INT_MIN);
// 	self.car = self.car - rhs*self.ord;
// 	return self;
// }
// RationN& RationN::operator*=(const int& rhs)
// {
// 	assert ((long int)self.car * rhs < INT_MAX);
// 	self.car *= rhs;
// 	self.optimal();
// 	return self;
// }
// RationN& RationN::operator/=(const int& rhs)
// {
// 	assert ((long int)self.ord * rhs<INT_MAX);
// 	self.ord *=rhs;
// 	self.optimal();
// 	return self;
// }


// bool RationN::operator==(const RationN& rhs)
// {
// 	return ((double)self.car/self.ord == (double)rhs.car/rhs.ord);
// }

// bool RationN::operator!=(const RationN& rhs)
// {
// 	return !self.operator==(rhs);
// }

// bool RationN::operator>(const RationN& rhs)
// {
// 	return ((double)self.car/self.ord > (double)rhs.car/rhs.ord);
// }
// bool RationN::operator<(const RationN& rhs)
// {
// 	return ((double)self.car/self.ord < (double)rhs.car/rhs.ord);	
// }
// bool RationN::operator<=(const RationN& rhs)
// {
// 	return ((double)self.car/self.ord <= (double)rhs.car/rhs.ord);	
// }
// bool RationN::operator>=(const RationN& rhs)
// {
// 	return ((double)self.car/self.ord >= (double)rhs.car/rhs.ord);	
// }

// int RationN::card()
// {
// 	return self.car;
// }
// int RationN::ordi()
// {
// 	return self.ord;
// }

// void RationN::card(int re)
// {
// 	self.car = car;
// }

// void RationN::ordi(int im)
// {
// 	self.ord = ord;
// }

// RationN RationN::operator*(const RationN& rhs)
// {
// 	assert( (long int)self.car * rhs.car <INT_MAX ) ;
// 	RationN tmp(self.car * rhs.car, self.ord * rhs.ord);
// 	tmp.optimal();
// 	return tmp;
// }

// RationN RationN::operator*(const int& rhs)
// {
// 	assert( (long int)self.car * rhs <INT_MAX );
// 	RationN tmp(self.car * rhs, self.ord);
// 	tmp.optimal();
// 	return tmp;
// }

// RationN RationN::operator+(const RationN& rhs)
// {
// 	assert((long int)self.car*rhs.ord+ (long int)rhs.car * self.ord <INT_MAX);
// 	assert((long int)self.ord*rhs.ord<INT_MAX);
// 	RationN tmp(self.car * rhs.ord + rhs.car * self.ord, self.ord * rhs.ord);
// 	tmp.optimal();
// 	return tmp;
// }

// RationN RationN::operator+(const int& rhs)
// {
// 	assert((long int)self.car + rhs * self.ord<INT_MAX);
// 	RationN tmp(self.car + rhs * self.ord, self.ord);
// 	tmp.optimal();
// 	return tmp;
// }

// RationN RationN::operator-(const RationN& rhs)
// {
// 	RationN tmp(self.car * rhs.ord - rhs.car * self.ord, self.ord * rhs.ord);
// 	tmp.optimal();
// 	return tmp;
// }

// RationN RationN::operator-(const int& rhs)
// {
// 	RationN tmp(self.car - rhs * self.ord, self.ord);
// 	tmp.optimal();
// 	return tmp;
// }

// RationN RationN::operator/(const RationN& rhs)
// {
// 	RationN tmp(self.car * rhs.ord, self.ord * rhs.car);
// 	tmp.optimal();
// 	return tmp;
// }

// RationN RationN::operator/(const int& rhs)
// {
// 	RationN tmp(self.car, self.ord * rhs);
// 	tmp.optimal();
// 	return tmp;
// }

// void RationN::optimal()
// {
// 	bool restart = false;
// 	for(int i=2;i <= self.ord;i++){
// 		if(!(self.ord%i) && !(self.car%i)) {
// 			self.car /= i;
// 			self.ord /= i;
// 			restart = true;
// 			break;
// 		}
// 	}
// 	if(restart) self.optimal();
// }

// double RationN::rPrint()
// {
// 	return (double)self.car/self.ord;
// }