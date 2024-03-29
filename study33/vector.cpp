#include <vector>
#include <iostream>
using namespace std;
void printvector(vector<int>& v1)
{
	for( int i=0;i<v1.size();i++)
		cout << i+1<< " 번째 원소" <<v1[i] << endl;
	cout <<endl;
}

int main()
{
	vector<int> v1;
	vector<int> v2 = {1, 2, 3};			  // g++ 11 에서만 사용됨. 
	vector<int> v3[10];					// https://www.acmicpc.net/blog/view/24 여기서 따라함.  input.txt 도 만들어주어야 됨.
	vector<int> v5[] = {{ 1, 2}, {3, 4}}; // int형 백터 배열 생성(행은 가변이지만 열은 고정)
	vector<vector<int>> v6;               // 2차원 백터 생성(행과 열 모두 가변) 윈도우에서는 안됨
	vector<int> v7(5);                    // 5개의 원소를 0으로 초기화
	vector<int> v8(5, 3);                 // 5개의 원소를 3으로 초기화
	vector<int> v9(v1);                   // 벡터 v를 복사하여 벡터v2 생성

	v1.push_back(10);

	vector<int>::iterator it = v1.begin();
	// auto it = v1.begin();

	cout << " insert " << endl;
	it = v1.insert(it, 2);
	printvector(v1);
	it = v1.insert(it, 2, 4);
	printvector(v1);
	it = v1.insert(it+1, 2, 3);
	printvector(v1);
	cout << " insert2 " << endl;
	v1.insert(v1.begin(), 1, 30);
	printvector(v1);
	cout << *v1.begin() << endl;

	v1.pop_back();
	printvector(v1);

	v1.pop_back();
	v1.pop_back();
	printvector(v1);

	v1.erase(v1.begin(), v1.begin()+1);
	printvector(v1);

	for( vector<int>::iterator i = v1.begin(); i !=v1.end(); ++i)
		cout << *i << " ";

	cout << v1[0] << endl;

	cout << v1.at(0) << endl;

	cout << (v1<v2) << endl;
	printvector(v1);
	printvector(v2);
	return 0;
}