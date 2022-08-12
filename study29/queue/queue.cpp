#include "queue.h"
#include <cstdio>
#include <cstdlib>
#include <cassert>
#define self (*this) 	// python style


void Qu::resize()
{
	self.size *= 2;
	int *temp_pArr = new int[self.size];
	assert(temp_pArr);
	for(int i=0;i< self.size/2 ;i++){
		temp_pArr[i] = self.pArr[i];
	}
	delete [] self.pArr;
	self.pArr = temp_pArr;

}

void Qu::rearrange()
{
	int temp[self.rear];
	for(int i=0;i<self.rear;i++){
		temp[i]=self.pArr[i];
	}
	for(int i=self.rear;i<self.size;i++){
		self.pArr[i-self.rear]=self.pArr[i];
	}
	for(int i=0;i<self.rear;i++){
		self.pArr[self.size-self.rear+i]=temp[i];
	}
	self.rear = self.size;
	self.front= 1;
}

Qu::Qu(int size)
{
	self.front = 0;
	self.rear = 0;
	self.size = size;
	self.pArr = new int[size];
}

void Qu::push(int data)
{
	if(self.rear == self.size){
		self.rear = 0;
	}
	if(self.rear+1 == self.front){
		rearrange();
		self.size *= 2;
		resize();
		fprintf(stderr, "sizeup %d\n", self.size);
	}
	self.pArr[self.rear++] = data;
}

void Qu::pop(int *pData)
{
	if(self.front == self.size){
		self.front = 0;
	}

	if(self.front == self.rear){
		fprintf(stderr, "there is no data\n");
		exit(1);
	}
	*pData = self.pArr[self.front++];
}

Qu::~Qu()
{
	delete [] pArr;
}