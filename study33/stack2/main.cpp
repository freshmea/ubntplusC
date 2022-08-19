#include <cstdio>
#include <iostream>
#include "stack.h"
#define NUMBEROFSTACK 2
using std::cout;
using std::endl;

int main()
{
	char sNames[NUMBEROFSTACK][10]={"Choi"};
	Stack *stacks[NUMBEROFSTACK];
	for(int i=0;i<NUMBEROFSTACK;i++){
		stacks[i]=new Stack(sNames[i]);
	}

	int re;
	String name;

	for(int i=0;i<NUMBEROFSTACK;i++){
		 for(int j=0;j<5;j++){
			stacks[i]->push(j);
			cout << "adding stacks[" << i << "] Number : " << j << endl;
		 }
	}

	*stacks[0] = *stacks[0]+*stacks[1];
	for(int i=0;i<NUMBEROFSTACK;i++){
		for (int j=0;j<5;j++){
			std::cout << stacks[i]->getName() << " : " << j+1 << "st pop() : " << stacks[i]->pop() << std::endl;
		}
	}
	for(int i=0;i<NUMBEROFSTACK;i++){
		delete stacks[i];
	}
	return 0;
}

