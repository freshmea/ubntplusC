#include <cstdio>
#include <iostream>
#include "stack.h"
#define NUMBEROFSTACK 3

int main()
{
	//스택 이니셜라이즈.
	char sNames[NUMBEROFSTACK][10]={"Choi", "Kim", "Hong"};
	// for(int i=0;i<NUMBEROFSTACK;i++){
	// 	Stack stacks[i](sNames[i]);
	// }
	Stack stacks0(sNames[0]);
	Stack stacks1(sNames[1]);
	Stack stacks2(sNames[2]);

	// for(int i = 0 ; i<NUMBEROFSTACK;i++)
	// 	Stack stacks[i](sNames[i]); 이렇게 선언 하면 안됨.

	// stack0.tos = 0;  private 이기 때문에 컴파일 에러.
	// 입력 받을 변수.
	int re;
	char name[10];

	//1번 스택 데이터 입력.
	for(int i=0;i<30;i++){
		stacks0.push(i);
	}

	//2번 스택 데이터 입력.
	for(int i=0;i<30;i++){
		stacks1.push(29-i);
	}

	//3번 스택 데이터 입력.
	for(int i=0;i<1024;i++){ // 1024 까지만 늘어남. 
		stacks2.push(i*2+5 );
	}

	//1, 2, 3 번 스택 데이터 출력.
	for (int i=0;i<30;i++){
		stacks0.pop(&re);
		stacks0.getName(name);
		std::cout << name << " : " << i+1 << "st pop() : " << re << std::endl;
		stacks1.pop(&re);
		stacks1.getName(name);
		std::cout << name << " : " << i+1 << "st pop() : " << re << std::endl;
		stacks2.pop(&re);
		stacks2.getName(name);
		std::cout << name << " : " << i+1 << "st pop() : " << re << std::endl;
	}

	//동적 메모리 프리.
	// for(int i=0;i<NUMBEROFSTACK;i++){
	// 	stacks[i].cleanupStack();
	// }
	return 0;
}

