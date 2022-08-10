#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "list.h"
static Node *createNodere(Node *ptr,const int *data)
{
	Node *tmp = malloc(sizeof(Node));
	assert(tmp );
	tmp->data = *data;
	tmp->next = ptr;
	return tmp;
}


static Node *createNode(Node *ptr,const int *data)
{
	Node *tmp = malloc(sizeof(Node));
	assert(tmp );
	tmp->data = *data;
	tmp->next = ptr->next;
	ptr->next = tmp;
	return ptr;
}

static Node* moveNode(Node *ptr,const int *pos)
{
	for(int i=0;i<*pos;i++){
		if(!ptr ) break;
		ptr = ptr->next;
	}
	return ptr;
}

static Node* findNode(Node *ptr,const int *prevData)
{
	while(ptr )
	{
		if (ptr->data == *prevData) break;
		ptr = ptr->next;
	}
	return ptr;
}

static Node* findFFNode(Node *ptr,const int *prevData)
{
	while(ptr )
	{
		if (ptr->next->data == *prevData) break;
		ptr = ptr->next;
	}
	return ptr;
}

static void linkingNode(Node *ptr, Node *ptr2)
{
	Node *tmp = ptr ;
	ptr2->next = ptr->next;
	free(tmp);
}

void initList(List *pList)
{
	// pList->ptr = malloc(sizeof(Node));
	// assert(pList->ptr);
	// pList->ptr->next = NULL;
	int gabage = -1;
	pList->ptr = createNodere(NULL, &gabage);
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
	// if(pList->ptr ) pList->ptr = createNode(pList->ptr, &data);
	if(pList->ptr ) pList->ptr->next = createNodere(pList->ptr->next, &data);
}

void insertNode(List *pList, int prevData, int data)
{
	Node *ptr = pList->ptr->next;
	ptr = findNode(ptr, &prevData);
	if(ptr ) ptr->next = createNodere(ptr->next, &data);
}

void insertPositionNode(List *pList, int pos, int data)
{
	Node *ptr = pList->ptr;
	ptr = moveNode(ptr, &pos);
	if(ptr ) ptr->next = createNodere(ptr->next, &data);
}

void deleteNode(List *pList, int data)
{
	Node *ptr = pList->ptr->next;
	Node *ptr2 = pList->ptr;
	ptr = findNode(ptr, &data);
	ptr2 = findFFNode(ptr2, &data);
	if(ptr ) linkingNode(ptr, ptr2);
}

void deletePositionNode(List *pList, int pos)
{
	Node *ptr = pList->ptr->next;
	Node *ptr2 = pList->ptr;
	ptr = moveNode(ptr, &pos);
	ptr2 = moveNode(ptr2, &pos);
	if(ptr ) linkingNode(ptr, ptr2);
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