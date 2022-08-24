#include <iostream>
#include "queue.h"
using namespace std;

int main(void)
{

	Qu<int> qu1;
	Qu<int> qu2(30);
	Qu<int> qu3 = qu2;
	int ga;
	qu1 = qu2;

	for(int i=1;i<= 29;i++){
		qu1.push(i);
	}

	for(int i=1;i<= 5;i++){
		cout << qu1.pop() << endl;;
	}	

	for(int i=1;i<= 5;i++){
		qu1.push(i);
	}

	// qu1.full();

	while(!qu1.empty())
		cout << qu1.pop() << " ";
	cout << endl;

	return 0;
}

