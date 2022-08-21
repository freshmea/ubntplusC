#include <vector>
#include <string>
#include <iostream>
//#include <algorith>
#include <stack>

using namespace std;

int main()
{
	stack<int> st;
	st.push(1);
	cout<< st.top();
	st.push(2);
	cout<< st.top();
		st.push(1);
	cout<< st.top();
	return 0;
}