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
		// Complex(Complex c);				// 복사 생성자1.  성능이 안 좋음. infinity copy constructor call!!
		// Complex(const Complex *pc);		// 복사 생성자2.  선언시 모양이 해깔림.
		Complex(const Complex &rhs);		// 복사 생성자3.  const T reference 
		~Complex();

		// void operator=(Complex c);			// 복사 생성자가 호출, 소멸자도 호출, 무한 반복...  되서 쓰면 안됨. 
		// void operator=(const Complex *pc);		// 모양이 해깔림. c1 = &c3; ???
		void operator=(const Complex &rhs);		// 이것이 좋다. 
		bool operator==(const Complex &rhs);

		double real();
		double imag();

		void real(double re);
		void imag(double im);
};


#endif