#include <iostream>
#include "complex.h"
#define self	(*this)

void print(/*const*/ Complex &rc)
{
	std::cout << "(" << rc.real() << ", " << rc.imag() << "i)" << std::endl;
}

Complex::Complex()
{
	self.re = 0.0;
	self.im = 0.0;
}

Complex::Complex(double re)
{
	self.re = re;
	self.im = 0.0;
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

void Complex::operator=(const Complex &rhs)
{
	self.re = rhs.re;
	self.im = rhs.im;
}

bool Complex::operator==(const Complex &rhs)
{
	return (self.re == self.re && self.im == rhs.im);

}

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