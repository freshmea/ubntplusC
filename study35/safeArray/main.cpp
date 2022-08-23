#include <iostream>
#include "safeArray.h"
using namespace std;
int main()
{
	int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	SafeArray arr1(nums+5, 5);

	for(int i =0; i < arr1.size(); ++i){
		cout << arr1[i] << " ";
	}
	cout << endl;

	Array *pArr = &arr1;	//부모 클래스의 포인터나 레퍼런스는 자식 타입을 가리킬 수 있따. 

	// (*pArr )[6] = 1;
	(*pArr ).operator[](6) = 1;		//(*pArr ).SafeArray::operator[](6) = 1;
	(*pArr ).Array::operator[](6) = 1;

	Array *pArr2 = new SafeArray;

	delete pArr2;	// 소멸자는 버츄얼로 만들어주어야 한다. 안그러면 부모 소멸자가 호출됨. 
	// arr1[6] = 2;
	return 0;
}