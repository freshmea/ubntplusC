#include <iostream>
#include "complex.h"
#define self	(*this)

std::ostream& operator<<(std::ostream& out, const Complex& rhs)
{
	out << "(" << rhs.re <<", "<< rhs.im <<"i)" ;
	return out;
}
void print(/*const*/ Complex &rc)
{
	std::cout << "(" << rc.real() << ", " << rc.imag() << "i)" << std::endl;
}

Complex::Complex(double re, double im)
{
	self.re = re;
	self.im = im;
}

Complex& Complex::operator+=(const Complex& rhs)
{
	self.re += rhs.re;
	self.im += rhs.im;
	return self;
}

bool Complex::operator==(const Complex &rhs) const
{
	return (self.re == self.re && self.im == rhs.im);
}

bool Complex::operator!=(const Complex &rhs) const
{
	return self.re != rhs.re || self.im != rhs.im;
	// return !self.operator==(rhs);
}

bool Complex::operator>(const Complex &rhs) const
{
	return self.re * self.re + self.im * self.im > rhs.re * rhs.re + rhs.im * rhs.im;
}
// Complex Complex::operator*(const Complex& rhs);
// Complex Complex::operator*(const int &rhs);
const Complex Complex::operator+(const Complex& rhs) const
{
	Complex tmp(self.re+rhs.re, self.im+rhs.im);
	return tmp;
}

Complex& Complex::operator++()
{
	self.re += 1.0;
	return self;
}

Complex Complex::operator++(int )
{
	Complex result(self);
	self.re += 1.0;
	return result;
}
// Complex Complex::operator+(const int& rhs);
const Complex Complex::operator-(const Complex& rhs) const
{
	Complex tmp(self.re-rhs.re, self.im-rhs.im);
	return tmp;
}
// Complex Complex::operator-(const int& rhs);
// Complex Complex::operator/(const Complex& rhs);
// Complex Complex::operator/(const int& rhs);

double Complex::real() const
{
	return self.re;
}
double Complex::imag() const
{
	return self.im;
}

void Complex::real(double re)
{
	self.re = re;
}
void Complex::imag(double im)
{
	self.im = im;
}