#include <cstdio>
#include <iostream>
#include "stack.h"
#define NUMBEROFSTACK 3
using std::cout;
using std::endl;

int main()
{
	string sNames[NUMBEROFSTACK]={"Choi", "KIm", "Hong"};
	Stack *stacks[NUMBEROFSTACK];
	for(int i=0;i<NUMBEROFSTACK;i++){
		stacks[i]=new Stack(sNames[i]);
	}
	cout << stacks[0]->getName() << endl;
	cout << stacks[1]->getName() << endl;
	cout << stacks[2]->getName() << endl;
	cout << stacks[0]->gettos() << ", " << stacks[1]->gettos()<< ", " << stacks[2]->gettos() << endl;
	for(int i=0;i<NUMBEROFSTACK;i++){
		for(int j=0;j<10;j++) {
			stacks[i]->push(j);
			cout << stacks[0]->gettos() << ", " << stacks[1]->gettos()<< ", " << stacks[2]->gettos() << endl;
		}

	}

		cout << stacks[0]->gettos() << ", " << stacks[1]->gettos()<< ", " << stacks[2]->gettos() << endl;
	// *stacks[0] = *stacks[1]+*stacks[2];
		cout << stacks[0]->gettos() << ", " << stacks[1]->gettos()<< ", " << stacks[2]->gettos() << endl;

	for (int j=0;j<10;j++){
			for(int i=0;i<NUMBEROFSTACK;i++){
			cout << stacks[i]->getName() << " : " << j+1 << "st pop() : " << stacks[i]->pop() << endl;
			cout << stacks[0]->gettos() << ", " << stacks[1]->gettos()<< ", " << stacks[2]->gettos() << endl;
		}
	}
	for(int i=0;i<NUMBEROFSTACK;i++){
		delete stacks[i];
	}
	return 0;
}


