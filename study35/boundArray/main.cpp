#include <iostream>
#include <cstdlib>
#include <ctime>
#include "boundArray.h"
using namespace std;
int main()
{
	srand(time(NULL));
	BoundArray arr1;		// [0, 100)
	BoundArray arr2(10);	// [0, 10)
	BoundArray arr3(5,10);	// [5, 10) 5, 6, 7, 8, 9

	for(int i= arr3.lower(); i < arr3.upper(); ++i){
		arr3[i] = rand() % 10;
	}

	BoundArray arr4 = arr3;

	arr1 = arr3;

	arr1 == arr3;
	cout << "lower : " << arr1.lower() << ", upper : " << arr1.upper()<< endl;
	for(int i = arr1.lower();i< arr1.upper(); ++i){
		cout << "value : " << arr1[i] << endl;
	}
	cout << "lower : " << arr2.lower() << ", upper : " << arr2.upper()<< endl;
	for(int i = arr2.lower();i< arr2.upper(); ++i){
		cout << "value : " << arr2[i] << endl;
	}

	return 0;
}