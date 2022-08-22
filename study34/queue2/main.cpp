#include <iostream>
#include "queue.h"
using namespace std;

int main(void)
{

	Qu qu1;
	Qu qu2(30);	//Queue q2 = 10 이 되는것을 막으려고 explicit 묵시적 형변환을 막음.
	Qu qu3 = qu2;
	int ga;
	qu1 = qu2;

	for(int i=1;i<= 29;i++){
		qu1.push(i);
	}

	for(int i=1;i<= 29;i++){
		qu2.push(i);
	}

	if (qu1 == qu2) cout << " same";
	else cout << "false";

	for(int i=1;i<= 5;i++){
		cout << qu1.pop() << endl;;
	}	

	for(int i=1;i<= 5;i++){
		qu1.push(i);
	}

	// qu1.full();

	while(!qu1.empty())
		cout << qu1.pop() ;
	cout << endl;

	return 0;
}

