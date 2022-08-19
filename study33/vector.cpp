#include <vector>
#include <iostream>
using namespace std;
int main()
{
	vector<int> v1;
	vector<int> v2 = {1, 2, 3};
	vector<int> v3[10];
	vector<int> v4[];
	vector<int> v5[] = {{ 1, 2}, {3, 4}}; // int형 백터 배열 생성(행은 가변이지만 열은 고정)
	vector<vector<int>> v6;               // 2차원 백터 생성(행과 열 모두 가변)
	vector<int> v7(5);                    // 5개의 원소를 0으로 초기화
	vector<int> v8(5, 3);                 // 5개의 원소를 3으로 초기화
	vector<int> v9(v);                   // 벡터 v를 복사하여 벡터v2 생성
}