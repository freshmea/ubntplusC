#include <stdio.h>
#include "list.h"

int main(void)
{
	List list;
	initList(&list);

	for(int i=0;i<10;i++){
		insertFirstNode(&list, i);		// [4]
		printList(&list);
	}
	insertNode(&list, 1, 2);		// [1, 2, 3 ,4]
	printList(&list);
	insertPositionNode(&list,7, 9);
	printList(&list);
	deleteNode(&list, 3);			// [1, 2, 4]
	printList(&list);



	cleanupList(&list);
	return 0;
}

