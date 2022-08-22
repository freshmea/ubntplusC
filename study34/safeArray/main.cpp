#include <iostream>
#include "array.h"
#include "safeArray.h"

using std::cout;
using std::endl;

int main()
{
	int nums[] = {1, 2, 3, 4, 5};
	Array arr1(nums, 5);
	for(int i=0; i< arr1.size(); ++i){
		cout << arr1[i] << endl;
	}

	// arr1[5] = 6;	// can't stop !!

	SafeArray arr2(nums, 5);
	for(int i=0; i< arr2.size(); ++i){		//arr2.size() == arr2.Array::size(), arr2.SafeArray::???()
		cout << arr2[i] << endl;
	}

	if ( arr1 == arr2 ) cout << " same";
	else cout << "different";

	// arr2[5] = 6;	// !! stop
	return 0;
}