#include "stack.h"
#include <cstdio>
#include <cassert>
#include <cstring>
#define MAXSTACK 1024
#define self (*this) 	// python style

void Stack::resize()
{
	self.size *= 2;
	// int *temp_pArr = (int *)malloc(sizeof(int)*self.size);
	int *temp_pArr = new int[self.size];
	for(int i=0;i< self.size/2 ;i++){
		temp_pArr[i] = self.pArr[i];
	}
	delete [] self.pArr;
	self.pArr = temp_pArr;

}

void Stack::push(const int data)
{
	if(self.tos >= self.size){
		assert(self.size<MAXSTACK+1);
		self.size *= 2;
		// self.pArr=(int *)realloc(self.pArr, sizeof(int)*self.size);
		// delete [] pArr;
		// self.pArr = new int[self.size];
		resize();
		printf("%s overstack, result of Adding size : %d\n", self.name, self.size);
	}
	self.pArr[self.tos++] = data;
}

void Stack::getName(char *name)
{
	strcpy(name, self.name);
}

void Stack::pop(int *pData)
{
	assert(self.tos);
	*pData = self.pArr[--self.tos];
}

Stack::Stack(char *name)
{
	strcpy(self.name, name);
	self.tos=0;
	self.size = 16;
	// self.pArr = (int *)malloc(sizeof(int)*self.size);
	self.pArr = new int[size];
	assert(self.pArr);// 조건식이 0이 아니면 진행 .
}

Stack::~Stack()
{
	// free(self.pArr);
	delete [] self.pArr;
}