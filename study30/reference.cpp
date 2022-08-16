#include <iostream>

int main()
{
	int a= 100;
	int &r = a;			// aliasing. 별칭을 붙이는 것이다. 

	r = 200;

	std::cout << "a: " << a << std::endl;
	return 0;
}