#include <iostream>
#include "string.h"
using std::cout;
using std::endl;

int main()
{
	String s1;
	String s2 = "hello";	
	String s3 = s2;
	cout << "String s1;\nString s2 = ""hello"";\nString s3 = s2;\n" << endl;
	cout << "s1 string : "<< s1 << endl;
	cout << "s2 string : "<< s2 << endl;
	cout << "s3 string : "<< s3 << endl;

	s1 = s2;
	cout << "s1 = s2;" << endl;
	cout << "s1 string : "<< s1 << endl;

	String s4 = "world";
	cout << "String s4 = ""world"";" << endl;
	cout << "s4 string : "<< s4 << endl;
	s3 = s4;
	cout << "s3 = s4;" << endl;
	cout << "s4 string : "<< s4 << endl;
	cout << "s3 string : "<< s3 << endl;
	String s5 = s1;
	s1= s4 +String(", ")+ s3;
	cout << "String s5 = s1;" << endl;
	cout << "s1= s1 +String("", "")+ s3;" << endl;
	cout << "s1 string : "<< s1 << endl;
	cout << "s3 string : "<< s3 << endl;
	cout << "s4 string : "<< s5 << endl;
	return 0;
}