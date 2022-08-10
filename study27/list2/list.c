#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "list.h"

const void createNode(Node *ptr,const int *data)
{
	Node *tmp = malloc(sizeof(Node));
	assert(tmp );
	tmp->data = *data;
	tmp->next = ptr->next;
	ptr->next = tmp;
}

Node* moveNode(Node *ptr,const int *pos)
{
	for(int i=0;i<*pos;i++){
		if(!ptr ) break;
		ptr = ptr->next;
	}
	return ptr;
}

Node* findNode(Node *ptr,const int *prevData)
{
	while(ptr )
	{
		if (ptr->data == *prevData) break;
		return ptr->next;
	}
}

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
	if(pList->ptr ) createNode(pList->ptr, &data);
}

void insertNode(List *pList, int prevData, int data)
{
	Node *ptr = pList->ptr->next;
	ptr = findNode(ptr, &prevData);
	if(ptr ) createNode(ptr, &data);
}

void insertPositionNode(List *pList, int pos, int data)
{
	Node *ptr = pList->ptr;
	ptr = moveNode(ptr, &pos);

	if(ptr ) createNode(ptr, &data);
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