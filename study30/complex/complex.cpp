#include "complex.h"
#define self	(*this)
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

Complex::~Complex()
{

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