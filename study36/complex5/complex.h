#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#define self	(*this)

class Complex;
void print(/*const*/ Complex &rc);

class Complex{
friend std::ostream& operator<<(std::ostream& out, const Complex& rhs); //전역 함수를 프렌드로 선언.

private:
	double re;
	double im;
public:			
	Complex(double re = 0.0, double im = 0.0);	// default argument
	// +=, -=, *=, /=
	Complex& operator+=(const Complex& rhs);

	bool operator==(const Complex& rhs) const;
	bool operator!=(const Complex& rhs) const;
	bool operator>(const Complex& rhs) const;
	// <, >=, <=

	const Complex operator*(const Complex& rhs) const;
	// Complex operator*(const int &rhs);
	const Complex operator+(const Complex& rhs) const;

	 Complex& operator++();		//prefix
	 Complex operator++(int );	//postfix
	// Complex operator+(const int& rhs);
	const Complex operator-(const Complex& rhs) const;

	double real() const;
	double imag() const;

	void real(double re);
	void imag(double im);
};
#ifdef INLINE
#include "complex.inl"
#endif

#endif