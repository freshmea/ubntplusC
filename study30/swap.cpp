#include <iostream>

void swap(int &ra, int &rb);

int main()
{
	int a = 100;
	int b = 200;

	std::cout << "a: " << a << " b:" << b << std::endl;

	swap(a, b);
	std::cout << "a: " << a << " b:" << b << std::endl;
	return 0;
}

void swap(int &ra, int &rb)
{
	int tmp = ra;
	ra = rb;
	rb = tmp;
}