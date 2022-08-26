#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include "string.h"
class Complex;
void print( Complex &rc);

class Complex{
friend std::ostream& operator<<(std::ostream& out, const Complex& rhs); //전역 함수를 프렌드로 선언.

private:
	double re_;
	double im_;
public:			
	Complex(double re = 0.0, double im = 0.0);	
	Complex& operator+=(const Complex& rhs);

	bool operator==(const Complex& rhs) const;
	bool operator!=(const Complex& rhs) const;
	bool operator>(const Complex& rhs) const;

	const Complex operator*(const Complex& rhs) const;
	const Complex operator+(const Complex& rhs) const;

	 Complex& operator++();		//prefix
	 Complex operator++(int );	//postfix
	const Complex operator-(const Complex& rhs) const;

	operator String() const;
	double real() const;
	double imag() const;

	void real(double re);
	void imag(double im);
};


#endif