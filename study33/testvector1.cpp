#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> a;

	for(int i=0; i<3;i++)
		a.push_back(3-i);

	for(int i=0; i<a.size();i++)
		cout << a[i] << " ";
	cout << endl;

	cout << a.front();
	cout << a.back();
	cout << *(a.begin()+3);
	cout << *a.end();

	// for(vector<int>::iterator i= a.begin();i != a.end();i++)
	// 	cout << *i << " "; 
	cout << " 이거 된다.";
	for(auto i : a)
		cout << i << " ";

	cout << a.capacity();
	auto pos=find(a.begin(),a.end(), 6);
	sort(a.begin(),a.end());
	// a.erase(a.begin()+5, a.begin()+6);
	a.erase(pos,pos+1);
	for(auto i : a)
		cout << i << " ";
	// 이중 백터. 

	do{
		for(auto i : a)
			cout << i << " ";
		cout << endl;
	}(next_permutation(a.begin(), a.end()));
	return 0;

}