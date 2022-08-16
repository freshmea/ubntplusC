#include <iostream>
#include "rationN.h"

int main()
{
	RationN r1(2, 3);				// (0.0, 0.0i)
	RationN r2 = 3;		// 7번 라인과 같음. 
	RationN r3(3, 4);	// (3/4)
	RationN r4(r1);

	r4 = r2;
	if(r1 == r4){
		std::cout << " r1 and r4 are equal." << std::endl;
	} else {
		std::cout << "r1 and r4 are not equal." << std::endl;
	}

	
	// r1.optimal();
	std::cout << "r1 : ( " << r1.card() << "/ " << r1.ordi() << ")" << std::endl;
	std::cout << "r2 : ( " << r2.card() << "/ " << r2.ordi() << ")" << std::endl;
	std::cout << "r3 : ( " << r3.card() << "/ " << r3.ordi() << ")" << std::endl;
	r1=r1*r2;
	std::cout << "r1 = r1*r2"<< std::endl;
	std::cout << "r1 : ( " << r1.card() << "/ " << r1.ordi() << ")" << std::endl;
	// r3=r3+r2;
	// std::cout << "r3=r3+r2"<< std::endl;
	// std::cout << "r3 : ( " << r3.card() << "/ " << r3.ordi() << ")" << std::endl;
	// r3=r3-r1;
	// std::cout << "r3=r3-r1"<< std::endl;
	// std::cout << "r3 : ( " << r3.card() << "/ " << r3.ordi() << ")" << std::endl;
	// r3=r3/r2;
	// std::cout << "r3=r3/r2"<< std::endl;
	// std::cout << "r3 : ( " << r3.card() << "/ " << r3.ordi() << ")" << std::endl;
	r3=(r3+r2-r1)/r2;
	std::cout << "r3=(r3+r2-r1)/r2"<< std::endl;
	std::cout << "r3 : ( " << r3.card() << "/ " << r3.ordi() << ")" << std::endl;
	r3= r3 * 6;
	std::cout << "r3=r3 * 6"<< std::endl;
	std::cout << "r3 : ( " << r3.card() << "/ " << r3.ordi() << ")" << std::endl;
	r3= r3 + 6;
	std::cout << "r3=r3 + 6"<< std::endl;
	std::cout << "r3 : ( " << r3.card() << "/ " << r3.ordi() << ")" << std::endl;
	r3= r3 - 3;
	std::cout << "r3=r3 - 3"<< std::endl;
	std::cout << "r3 : ( " << r3.card() << "/ " << r3.ordi() << ")" << std::endl;
	std::cout << "r1 : " <<r1.rPrint() << std::endl;
	std::cout << "r2 : " <<r2.rPrint() << std::endl;
	std::cout << "r3 : " <<r3.rPrint() << std::endl;

	return 0;
}