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
	List list, list2;
	initList(&list, sizeof(int));
	initList(&list2, sizeof(double));

	for(int i=0;i<10;i++){
		insertFirstNode(&list, &i);		// [4]
		printList(&list, printInt);
	}

	for(int i=1;i<=10;i++){
		double j = (double)500/i;
		insertFirstNode(&list2, &j);		// [4]
		printList(&list2, printDouble);
	}


	printList(&list2, printDouble);

	cleanupList(&list);
	return 0;
}

