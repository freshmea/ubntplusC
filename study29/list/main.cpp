#include <cstdio>
#include <iostream>
#include "list.h"

void printInt(const void *pData)
{
	printf("%d", *(int *)pData);
}

void printDouble(const void *pData)
{
	printf("%f", *(double *)pData);
}

void printChar(const void *pData)
{
	printf("%c", *(char *)pData);
}

int main(void)
{
	List list1(sizeof(int));

	for(int i=0;i<10;i++){

		list1.insertFirstNode(&i);	
		list1.printList(printInt);
	}
	int inputData = 1;
	int searchData = 2;
	list1.insertNode(&inputData, &searchData);	
	list1.printList(printInt);
	int inputPos = 7;
	inputData = 9;
	list1.insertPositionNode(inputPos, &inputData);
	list1.printList(printInt);
	list1.deleteNode(&searchData);			
	list1.printList(printInt);
	list1.deletePositionNode(0);			
	list1.printList(printInt);

	List list2(sizeof(double));
	for(int i=1;i<=10;i++){
		double j = (double)500/i;
		list2.insertFirstNode(&j);
		list2.printList(printDouble);
	}
	list2.deletePositionNode(2);
	list2.printList(printDouble);
	double inputData2 = 100.1;
	list2.deleteNode(&inputData2);
	list2.printList(printDouble);

	List list3(sizeof(char));
	for(int i=1;i<=10;i++){
		char j = 'a'+i;
		list3.insertFirstNode(&j);
		list3.printList(printChar);
	}
	list3.deletePositionNode(2);
	list3.printList(printChar);
	char inputData3 = 'g';
	list3.deleteNode(&inputData3);
	list3.printList(printChar);

	return 0;
	return 0;
}

