#include <iostream>
#include "safeArray.h"
#include "invalidindex.h"
using namespace std;
int main()
{
	int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	SafeArray<int> arr1(nums+5, 5);

	try {
		for(int i =0; i < arr1.size(); ++i){
			cout << arr1[i] << " ";
		}
		cout << endl;
			arr1[5] = 6;
		cout << " is this printed??";
	} catch(InvalidIndex& e){
		cerr << e.what() << endl;
		cerr << "exception is occured. Invalid index : " << e.invalid() << endl;
		// return 1;
	} 
	cout << "After error :  is this printed??" << endl;

	return 0;
}