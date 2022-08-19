#include <stack>
#include <iostream>
using namespace std;
int main()
{
	stack<int> *s[3];
	for(int i=0;i<3;i++)
		s[i] = new stack<int>;
	for(int j=0;j<3;j++){
		for(int i=0; i<100;i++) 
			s[j]->push(i);
	}
	for(int i=0;i<3;i++) cout << " The " << i+1 << " stack size : "<< s[i]->size() << endl;
	for(int i=0; i<100;i++) {
		for(int j=0;j<3;j++){
			cout << s[j]->top() << endl;
			s[j]->pop();
		}
	}
	cout << "될까 안될까" << endl;
	for(auto i : s) cout << i << endl;
}
