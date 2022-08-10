#include <stdio.h>
#include "list.h"

int main(void)
{
	List list;
	initList(&list, sizeof(int));
	for(int i=0;i<10;i++){
		insertFirstNode(&list, &i);	
		printList(&list);
	}
	int inputData = 1;
	int searchData = 2;
	insertNode(&list, &inputData, &searchData);	
	printList(&list);
	int inputPos = 7;
	inputData = 9;
	insertPositionNode(&list, inputPos, &inputData);
	printList(&list);
	inputPos = 3;
	deleteNode(&list, &searchData);			
	printList(&list);
	// deletePositionNode(&list, 0);			
	// printList(&list);

	List list2;
	initList(&list2, sizeof(double));
	for(int i=1;i<=10;i++){
		double j = (double)500/i;
		insertFirstNode(&list2, &j);
		printList(&list2);
	}
	printFList(&list2);

	cleanupList(&list);
	return 0;
}

