#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
class Complex;
void print(/*const*/ Complex &rc);

class Complex{
friend std::ostream& operator<<(std::ostream& out, const Complex& rhs); //전역 함수를 프렌드로 선언.

	private:
		double re;
		double im;
	public:			
		Complex(double re = 0.0, double im = 0.0);	// default argument
		Complex(const Complex& rhs);
		~Complex();

		Complex& operator=(const Complex &rhs);	
		// +=, -=, *=, /=

		bool operator==(const Complex &rhs);
		bool operator!=(const Complex &rhs);
		bool operator>(const Complex &rhs);
		// <, >=, <=

		const Complex operator*(const Complex& rhs);
		// Complex operator*(const int &rhs);
		const Complex operator+(const Complex& rhs);
		// Complex operator+(const int& rhs);
		const Complex operator-(const Complex& rhs);
		// Complex operator-(const int& rhs);
		// Complex operator/(const Complex& rhs);
		// Complex operator/(const int& rhs);
		// *, /
		// & X

		// ++, -- X

		double real();
		double imag();

		void real(double re);
		void imag(double im);
};


#endif