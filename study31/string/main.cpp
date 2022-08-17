#include <iostream>
#include "string.h"
using std::cout;
using std::endl;

int main()
{
	String s1;
	// String s2("hello");
	String s2 = "hello, world";	
	String s3(s2);

	s1 = s2;
	s2 = " AIOT";//String tmp("AIOT"); s2.operaator =(tmp); tmp.~String()  그래서 소멸자가 여기서 한번 실행 됨. 
	if (s1 == s2) {
		cout << "s1 and s2 are equal." << endl;
	} else {
		cout << "s1 and s2 are not equal." << endl;
	}
	s3 = s3+s2;
	cout << "s1 : " << s1 << endl;
	cout << "s2 : " << s2 << endl;
	cout << "s3 : " << s3 << endl;

	cout << "s3 len : " << s3.size() << endl;
	return 0;
}