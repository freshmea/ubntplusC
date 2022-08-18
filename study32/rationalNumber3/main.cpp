#include <iostream>
#include "rationN.h"
using std::cout;
using std::endl;

int main()
{
	RationN r1(2, 3);			
	RationN r2 = 3;
	RationN r3(3, 4);
	RationN r4(r1);
	RationN r5;
	RationN r6(3, 9);


	for(int i=1;i<10;i++){
		if(i%2) r1 *= i ;
		else r1 /= i;
	}
	cout << " number ex. r1" << endl;
	cout << "r1 : " << r1 << endl;

	for(int i=3;i<15;i++){
		if(i%2) r2 = r2 * i;
		else r2 /= i;
	}
	cout << " number ex. r2" << endl;
	cout << "r2 : " << r2 << endl;

	r5 += r4 += r2;
	if(r1 == r4){
		cout << "r1 and r4 are equal." << endl;
	} else {
		cout << "r1 and r4 are not equal." << endl;
	}

	if(r2 > r3){
		cout << "r2 is bigger than r3." << endl;
	} else {
		cout << "r3 is bigger than r2." << endl;
	}

	cout << "r2 : " << r2 << endl;
	cout << "r3 : " << r3 << endl;
	r1=r1*r2;
	cout << "r1 = r1*r2"<< endl;
	cout << "r1 : " << r1 << endl;
	r3=(r3+r2-r1)/r2;
	cout << "r3=(r3+r2-r1)/r2"<< endl;
	cout << "r3 : " << r3 << endl;
	r3= r3 * 6;
	cout << "r3=r3 * 6"<< endl;
	cout << "r3 : " << r3 << endl;
	r3 += 6;
	cout << "r3=r3 + 6"<< endl;
	cout << "r3 : " << r3 << endl;
	r3= r3 - 3;
	cout << "r3=r3 - 3"<< endl;
	cout << "r3 : " << r3 << endl;
	cout << "r1 : " << r1.rPrint() << endl;
	cout << "r2 : " << r2.rPrint() << endl;
	cout << "r3 : " << r3.rPrint() << endl;
	cout << "r6 : " << r6 << endl;
	RationN ra1=(2,3);

	ra1 = r3+ra1*3;			// 각 연산자의 연산 순서는 계승됨. 
	cout << "ra1 : " <<ra1.rPrint() << endl;	

	return 0;
}