#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "list.h"


void initList(List *pList)
{
	pList->ptr = malloc(sizeof(Node));
	assert(pList->ptr);

	//pList -> ptr-> data = ??
	pList->ptr->next = NULL;
}

void cleanupList(List *pList)
{
	Node *ptr = pList->ptr;
	while(ptr ){
		Node *tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
}


void insertFirstNode(List *pList, int data)
{
	Node *ptr = malloc(sizeof(Node));
	assert(ptr );
	ptr->data = data;
	ptr->next = pList->ptr->next;
	pList->ptr->next = ptr;
}

void insertNode(List *pList, int prevData, int data)
{
	Node *ptr = pList->ptr->next;
	while(ptr )
	{
		if (ptr->data == prevData) break;
		ptr = ptr->next;
	}

	if(ptr ){
		Node *tmp = malloc(sizeof(Node));
		assert(tmp );
		tmp->data = data;
		tmp->next = ptr->next;
		ptr->next = tmp;
	}
}

void insertPositionNode(List *pList, int pos, int data)
{
	Node *ptr = pList->ptr;

	for(int i=0;i<pos;i++){
		if(!ptr ) break;
		ptr = ptr->next;
	}

	if(ptr ){
		Node *tmp = malloc(sizeof(Node));
		assert(tmp );
		tmp->data = data;
		tmp->next = ptr->next;
		ptr->next = tmp;
	}
}

void deleteNode(List *pList, int data)
{
	Node *ptr = pList->ptr->next;
	Node *ptr2 = pList->ptr;
	while(ptr ){
		if(ptr->data == data) break;
		ptr = ptr->next;
		ptr2 = ptr2->next;
	}
	if(ptr ){
		Node *tmp = ptr ;
		ptr2->next = ptr->next;
		free(tmp);
	}
}

void printList(const List *pList)
{
	Node *ptr = pList->ptr->next;

	printf("[");
	while(ptr ){
		printf("%d", ptr->data);
		printf( (ptr->next) ? ", " : "");
		ptr = ptr->next;

	}
	printf("]\n");

}