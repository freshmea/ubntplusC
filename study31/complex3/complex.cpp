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

Complex::Complex(const Complex &rhs)	//right-hand side (rhs)
{
	self.re = rhs.re;
	self.im = rhs.im;
}

Complex::~Complex()
{

}

Complex& Complex::operator=(const Complex& rhs)
{
	self.re = rhs.re;
	self.im = rhs.im;
	return self;
}

bool Complex::operator==(const Complex &rhs)
{
	return (self.re == self.re && self.im == rhs.im);
}

bool Complex::operator!=(const Complex &rhs)
{
	return self.re != rhs.re || self.im != rhs.im;
	// return !self.operator==(rhs);
}

bool Complex::operator>(const Complex &rhs)
{
	return self.re * self.re + self.im * self.im > rhs.re * rhs.re + rhs.im * rhs.im;
}
// Complex Complex::operator*(const Complex& rhs);
// Complex Complex::operator*(const int &rhs);
const Complex Complex::operator+(const Complex& rhs)
{
	Complex tmp(self.re+rhs.re, self.im+rhs.im);
	return tmp;
}
// Complex Complex::operator+(const int& rhs);
const Complex Complex::operator-(const Complex& rhs)
{
	Complex tmp(self.re-rhs.re, self.im-rhs.im);
	return tmp;
}
// Complex Complex::operator-(const int& rhs);
// Complex Complex::operator/(const Complex& rhs);
// Complex Complex::operator/(const int& rhs);

double Complex::real()
{
	return self.re;
}
double Complex::imag()
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