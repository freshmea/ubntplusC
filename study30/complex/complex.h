#ifndef COMPLEX_H
#define COMPLEX_H
class Complex;
// void print(/*const*/ Complex *pc);
void print(/*const*/ Complex &rc);

class Complex{
	private:	// 내부구현.
		double re; 	//real part 실수부 .
		double im; 	//imaginary part 허수부. 
	public:		// 왜부 인터페이스. 
		Complex();						// default constructor 디폴트 생성자.
		Complex(double re);				// convert constructor 변환 생성자. 
		Complex(double re, double im);	// constructor 그냥.. 생성자. 
		~Complex();

		double real();
		double imag();

		void real(double re);
		void imag(double im);
};


#endif