#include <iostream>
#include "array.h"
using std::cout;
using std::endl;

int main()
{
	Array arr1;
	Array arr2(10);
	int nums[] = {1, 2, 3, 4, 5};
	Array arr3(nums, 5);
	const Array arr4 = arr3;
	// arr4[0] = 10; // arr4.operator[](0)
	
	arr2 = arr3;
	if (arr2 == arr3){
		cout << "arr2 and arr3 are equal." << endl;
	} else {
		cout << "arr2 and arr3 are not equal." << endl;
	}

	for (int i = 0; i< arr3.size();++i){
		cout << arr3[i]<< " " << endl;		//arr3.operator[](i);
	}
	return 0;
}