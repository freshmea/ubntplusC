#include <stdio.h>
#include "list.h"

void printInt(const void *pData)
{
	printf("%d", *(int *)pData);
}

void printDouble(const void *pData)
{
	printf("%f", *(double *)pData);
}

int main(void)
{
	List list;
	initList(&list, sizeof(int));
	for(int i=0;i<10;i++){
		insertFirstNode(&list, &i);	
		printList(&list, printInt);
	}
	int inputData = 1;
	int searchData = 2;
	insertNode(&list, &inputData, &searchData);	
	printList(&list, printInt);
	int inputPos = 7;
	inputData = 9;
	insertPositionNode(&list, inputPos, &inputData);
	printList(&list, printInt);
	deleteNode(&list, &searchData);			
	printList(&list, printInt);
	deletePositionNode(&list, 0);			
	printList(&list, printInt);

	List list2;
	initList(&list2, sizeof(double));
	for(int i=1;i<=10;i++){
		double j = (double)500/i;
		insertFirstNode(&list2, &j);
		printList(&list2, printDouble);
	}
	deletePositionNode(&list2, 2);
	printList(&list2, printDouble);
	double inputData2 = 55.555556;
	deleteNode(&list2, &inputData2);
	printList(&list2, printDouble);
	cleanupList(&list);
	cleanupList(&list2);
	return 0;
}

