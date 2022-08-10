#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "list.h"

static Node *createNodere(Node *ptr,const void *data, int eleSize)
{
	Node *tmp = malloc(sizeof(Node)+eleSize);
	assert(tmp );
	memcpy((unsigned char*)tmp+sizeof(Node), data, eleSize );
	tmp->next = ptr;
	return tmp;
}


// static Node *createNode(Node *ptr,const int *data)
// {
// 	Node *tmp = malloc(sizeof(Node));
// 	assert(tmp );
// 	tmp->data = *data;
// 	tmp->next = ptr->next;
// 	ptr->next = tmp;
// 	return ptr;
// }

static Node* moveNode(Node *ptr, const int *pos)
{
	for(int i=0;i<*pos;i++){
		if(!ptr ) break;
		ptr = ptr->next;
	}
	return ptr;
}

static Node* findNode(Node *ptr,const void *prevData, int eleSize)
{
	while(ptr )
	{
		if (memcmp((unsigned char*)ptr+sizeof(Node), prevData, eleSize)) break;
		ptr = ptr->next;
	}
	return ptr;
}

static Node* findFFNode(Node *ptr,const void *prevData, int eleSize)
{
	while(ptr )
	{
		if (memcmp((unsigned char*)ptr+sizeof(Node), prevData, eleSize)) break;
		ptr = ptr->next;
	}
	return ptr;
}

static void linkingNode(Node *ptr, Node *ptr2)
{
	Node *tmp = ptr;
	ptr2->next = ptr->next;
	free(tmp);
}

static void listGetData(Node *ptr, void *a,int eleSize)
{
	memcpy(a,(unsigned char*)ptr+sizeof(Node), eleSize);
}




void initList(List *pList, int eleSize)
{
	// pList->ptr = malloc(sizeof(Node));
	// assert(pList->ptr);
	// pList->ptr->next = NULL;
	int gabage = -1;
	pList->eleSize = eleSize;
	pList->ptr = createNodere(NULL, &gabage, pList->eleSize);
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

void insertFirstNode(List *pList, void *data)
{
	// if(pList->ptr ) pList->ptr = createNode(pList->ptr, &data);
	if(pList->ptr ) pList->ptr->next = createNodere(pList->ptr->next, data, pList->eleSize);
}

void insertNode(List *pList, void *prevData, void *data)
{
	Node *ptr = pList->ptr->next;
	ptr = findNode(ptr, prevData, pList->eleSize);
	if(ptr ) ptr->next = createNodere(ptr->next, data, pList->eleSize);
}

void insertPositionNode(List *pList, int pos, void *data)
{
	Node *ptr = pList->ptr;
	ptr = moveNode(ptr, &pos);
	if(ptr ) ptr->next = createNodere(ptr->next, data, pList->eleSize);
}

void deleteNode(List *pList, void *data)
{
	Node *ptr = pList->ptr->next;
	Node *ptr2 = pList->ptr;
	ptr = findNode(ptr, data, pList->eleSize);
	ptr2 = findFFNode(ptr2, data, pList->eleSize);
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
		void *a = malloc(pList->eleSize);
		listGetData(ptr, a, pList->eleSize);
		printf("%d", *(int *)a);
		printf( (ptr->next) ? ", " : "");
		ptr = ptr->next;

	}
	printf("]\n");

}

void printFList(const List *pList)
{
	Node *ptr = pList->ptr->next;

	printf("[");
	while(ptr ){
		void *a = malloc(pList->eleSize);
		listGetData(ptr, a, pList->eleSize);
		printf("%f", *(double *)a);
		printf( (ptr->next) ? ", " : "");
		ptr = ptr->next;

	}
	printf("]\n");

}

