#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string st1="hello";
	string st2="me",st3;
	swap(st1,st2);

	//st2.copy(st3,5,0);
	int a=st1.find('l',0);
	cout<<st1+st2;
	return 0;

}