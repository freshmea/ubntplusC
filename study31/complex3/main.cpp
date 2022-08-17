#include <iostream>
#include "complex.h"
using std::cout;
using std::endl;

int main()
{
	Complex c1;				
	Complex c2(3.0);		
	Complex c3(3.0, 4.0);	
	Complex c4 = c3;		

	c1 = c3;
	c1 = c2 = c3;		// daisy chain. 
	if(c1 == c3){
		cout << " c1 and c3 are equal." << endl;
	} else {
		cout << "c1 and c3 are not equal." << endl;
	}
	// c4 = c1 + c2;		//c4.operator=(c1.operator+(c2));
	c4.operator=(c1.operator+(c2));
	cout << "c1- c2 : " << (c1 - c2) << endl;		// 자료의 출력 
	cout << "c1 != c2 : "<< (c1 != c2) << endl;
	cout << "c1 > c2 : "<< (c1 > c2) << endl;
	cout << "c1 : " << c1 << endl;
	cout << "c2 : " << c2 << endl;
	cout << "c3 : " << c3 << endl;
	cout << "c4 : " << c4 << endl;
	// c4 = c1+c2+c2;			// const 선언 때문에 안됨.
	
	cout << c1; // cout.operator<<(c1) or operator <<(cout, c1);
	// 전역 함수로 연산자 를 오버로드 해야됨. 다른 라이브러리에 멤버함수를 추가 할 수는 없음.
	print(c1);
	return 0;
}