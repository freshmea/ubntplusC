#include <iostream>
#include "complex.h"

int main()
{
	Complex c1;				//(0.0, 0.0i) 초기(디폴트)  생성자
	Complex c2(3.0);		//(3.0, 0.0i) 변환 생성자
	Complex c3(3.0, 4.0);	//(3.0, 4.0i) 생성자
	Complex c4 = c3;		// 복사 생성자.

	// c1.real(c3.real());
	// c1.imag(c3.imag());
	c1 = c3;
	if(c1 == c3){
		std::cout << " c1 and c3 are equal." << std::endl;
	} else {
		std::cout << "c1 and c3 are not equal." << std::endl;
	}

	// if(c1.real() == c3.real() && c1.imag() == c3.imag()){
	// 	std::cout << " c1 and c3 are equal." << std::endl;
	// } else {
	// 	std::cout << "c1 and c3 are not equal." << std::endl;
	// }

	std::cout << "c1 : (" << c1.real() << ", " << c1.imag() << "i)" << std::endl;
	std::cout << "c2 : (" << c2.real() << ", " << c2.imag() << "i)" << std::endl;
	std::cout << "c3 : (" << c3.real() << ", " << c3.imag() << "i)" << std::endl;
	std::cout << "c4 : (" << c4.real() << ", " << c4.imag() << "i)" << std::endl;
		
	print(c1);
	return 0;
}