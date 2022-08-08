#include <stdio.h>
#include "stack.h"
#define NUMBEROFSTACK 3

int main(void)
{
	//스택 이니셜라이즈.
	Stack stacks[NUMBEROFSTACK];
	char sNames[NUMBEROFSTACK][10]={"Choi", "Kim", "Hong"};
	for(int i=0;i<NUMBEROFSTACK;i++){
		ini(&stacks[i], sNames[i]);
	}

	// 입력 받을 변수.
	int re;
	char name[10];

	//1번 스택 데이터 입력.
	for(int i=0;i<30;i++){
		push(&stacks[0], i);
	}

	//2번 스택 데이터 입력.
	for(int i=0;i<30;i++){
		push(&stacks[1], 29-i);
	}

	//3번 스택 데이터 입력.
	for(int i=0;i<1024;i++){ // 1024 까지만 늘어남. 
		push(&stacks[2], i*2+5 );
	}

	//1, 2, 3 번 스택 데이터 출력.
	for (int i=0;i<30;i++){
		pop(&stacks[0], &re);
		getName(&stacks[0], name);
		printf("%s : %dst pop() : %d\n",name ,i+1, re);
		pop(&stacks[1], &re);
		getName(&stacks[1], name);
		printf("%s %dst pop() : %d\n",name ,i+1 , re);
		pop(&stacks[2], &re);
		getName(&stacks[2], name);
		printf("%s %dst pop() : %d\n",name ,i+1 , re);
	}

	//동적 메모리 프리.
	for(int i=0;i<NUMBEROFSTACK;i++){
		cleanupStack(&stacks[i]);
	}
	return 0;
}

