#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
	Stack<int> s1;
	Stack<int> s2(11);
	Stack<int> s3 = s2;

	s1 = s2;

	s1 == s2;

	for(int i=1; i<= 10 && !s1.full(); i++){
		s1.push(i*100);
	}
	s1.push(123);
	s1.full();

	while(!s1.empty()){
		cout << s1.pop() << endl;
	}

	return 0;
}
