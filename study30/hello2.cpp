#include <iostream>
// using std::cout;
// using std::endl;

int main()
{
	// cout << "hello, world" << endl;

	operator<<(std::cout, "hello, world").operator<<(std::endl);
	std::cout << "hello, world\n";
	// std::cout.operator<<("hello, world\n"); 	//주소값을 출력.
	operator<<(std::cout, "hello, world\n");	//문자열이 출력. 전역함수. 

	std::cout << std::endl;
	std::cout.operator<<(std::endl);		// 문자열 출력. 멤버함수
	// operator<<(std::cout, std::endl);

	// a + b ;

	// print(std::cout, "hellow,world");
	// operator<<(std::cout, "hello, world");

	// std::cout << a;
	// std::cout.operator<<(a); 	// 멤버함수 에서 찾기 우선임.
	// operator<<(std::cout, a); 	// 전역함수 에서 찾기 

	return 0;
}