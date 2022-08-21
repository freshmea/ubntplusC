#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void printvector(vector<string>& v1)
{
	int cnt = 1;
	for( auto i : v1){
		cout << cnt << " 번째 원소" << i << endl;
		++cnt;
	}
	cout << endl;
}

int main()
{
	vector<string> v;

	v.push_back("hi there!");
	v.push_back("ShowMe");
	v.push_back("TigerJK");
	v.push_back("Dok2");
	v.push_back("GAEKO");
	v.push_back("ZICO");

	cout << v.front() << endl;
	cout << *(v.begin()+1) << endl;

	cout << " for 문 범위 지정자 사용" << endl;
	vector<string>::iterator a = v.begin();
	for(vector<string>::iterator i = v.begin();i != v.end();i++)
		cout << *i << endl;
	cout << " for 문 범위 지정자 사용 간단하게" << endl;
	for(auto i : v)
		cout << i << endl;
	cout << "배열처럼 사용" << endl;
	for(int i=0; i<v.size(); i++)
	{
		cout << v[i] << endl;
		cout << v.at(i) << endl; // 인덱스 초과를 체크해 줌.
	}
	cout << " 이게 출력이 될까 안 될까"<< endl;

	auto pos = find(v.begin(), v.end(), "Dok2");
	cout << *pos << endl;
	printvector(v);
	sort(v.begin(), v.end());
	printvector(v);
}