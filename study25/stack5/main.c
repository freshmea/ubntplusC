#include <stdio.h>
#include "stack.h"
#define NUMBEROFSTACK 3

int main(void)
{
	//스택 이니셜라이즈.
	Stack stacks[NUMBEROFSTACK];
	char sNames[NUMBEROFSTACK][10]={"Choi", "Kim", "Hong"};
	long int datatype[NUMBEROFSTACK]={sizeof(int), sizeof(double), sizeof(char)};
	for(int i=0;i<NUMBEROFSTACK;i++){
		ini(&stacks[i], sNames[i], datatype[i]);
	}

	// 입력 받을 변수.
	int re;
	double re1;
	char re2;
	char name[10];

	//1, 2, 3번 스택 데이터 입력.
	for(int i=0;i<30;i++){
		int j = i*3;
		push(&stacks[0], &j);
	}

	//2번 스택 데이터 입력.
	for(int i=0;i<30;i++){
		double j = (double)500/(i+1);
		push(&stacks[1], &j);
	}

	//3번 스택 데이터 입력.
	for(int i=0;i<30;i++){ // 1024 까지만 늘어남. 
		char j = i+80;
		push(&stacks[2], &j);
	}

	//1, 2, 3 번 스택 데이터 출력.
	for (int i=0;i<30;i++){
		pop(&stacks[0], &re);
		getName(&stacks[0], name);
		printf("%s : %dst pop() : %d\n",name ,i+1, re);
		pop(&stacks[1], &re1);
		getName(&stacks[1], name);
		printf("%s %dst pop() : %f\n",name ,i+1 , re1);
		pop(&stacks[2], &re2);
		getName(&stacks[2], name);
		printf("%s %dst pop() : %c\n",name ,i+1 , re2);
	}

	//동적 메모리 프리.
	for(int i=0;i<NUMBEROFSTACK;i++){
		cleanupStack(&stacks[i]);
	}
	return 0;
}

