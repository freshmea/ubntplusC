#include <iostream>
#include "list.h"
using namespace std;

int main()
{
	List list;

	cout << list << endl;
	list.insertFirst(4);

	cout << list << endl;
	list.insertFirst(3);
	cout << list << endl;
	list.insertFirst(1);
	cout << list << endl;
	list.insert(1,2);
	cout << list << endl;

	list.del(3);
	// for(int i=0;i<5;i++){
	// 	cout<< list.ptr_->data << endl;
	// 	cout<< list.ptr_->next << endl;
	// 	list.ptr_ = list.ptr_->next;
	// }
	cout << list << endl;
	return 0;
}

