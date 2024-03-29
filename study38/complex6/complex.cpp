#include <iostream>
#include "complex.h"

std::ostream& operator<<(std::ostream& out, const Complex& rhs)
{
	out << "(" << rhs.re_ <<", "<< rhs.im_ <<"i)" ;
	return out;
}
void print(/*const*/ Complex &rc)
{
	std::cout << "(" << rc.real() << ", " << rc.imag() << "i)" << std::endl;
}

Complex::Complex(double re, double im)
{
	re_ = re;
	im_ = im;
}

Complex& Complex::operator+=(const Complex& rhs)
{
	re_ += rhs.re_;
	im_ += rhs.im_;
	return *this;
}

bool Complex::operator==(const Complex &rhs) const
{
	return (re_ == re_ && im_ == rhs.im_);
}

bool Complex::operator!=(const Complex &rhs) const
{
	return re_ != rhs.re_ || im_ != rhs.im_;

}

bool Complex::operator>(const Complex &rhs) const
{
	return re_ * re_ + im_ * im_ > rhs.re_ * rhs.re_ + rhs.im_ * rhs.im_;
}

const Complex Complex::operator+(const Complex& rhs) const
{
	Complex tmp(re_+ rhs.re_, im_+ rhs.im_);
	return tmp;
}

Complex& Complex::operator++()
{
	re_ += 1.0;
	return *this;
}

Complex Complex::operator++(int )
{
	Complex result(*this);
	re_ += 1.0;
	return result;
}
const Complex Complex::operator-(const Complex& rhs) const
{
	Complex tmp(re_- rhs.re_, im_- rhs.im_);
	return tmp;
}

Complex::operator String() const
{
	char buf[100];
	sprintf(buf, "(%.2f, %.2fi)", re_, im_);

	String result(buf);

	return result;
}

double Complex::real() const
{
	return re_;
}
double Complex::imag() const
{
	return im_;
}

void Complex::real(double re)
{
	re_ = re;
}

void Complex::imag(double im)
{
	im_ = im;
}