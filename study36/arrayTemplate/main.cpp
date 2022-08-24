#include <iostream>
#include "array.h"
#include "complex.h"
using namespace std;
int main()
{
	int num1[] = {1, 2, 3, 4, 5};
	Array<int> arr1(num1, 5);

	for(int i=0; i< arr1.size(); ++i){
		cout << arr1[i] << endl;
	}

	double num2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	Array<double> arr2(num2, 5);

	for(int i=0; i < arr2.size(); ++i){
		cout << arr2[i] << endl;
	}

	Complex nums3[] = {Complex(), Complex(3.0), Complex(3.0, 4.0)};
	Array<Complex> arr3(nums3, 3);

	for(int i=0; i < arr3.size(); ++i){
		cout << arr3[i] << endl;
	}

	return 0;
}