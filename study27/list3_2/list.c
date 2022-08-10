#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "list.h"

// static Node *createNodere(Node *ptr,const int *pData, int eleSize)
// {
// 	Node *ptr = malloc(sizeof(Node)+eleSize);
// 	assert(ptr );
// 	memcpy(ptr+1, pData, pList->eleSize);
// 	ptr->next = ptr;
// 	return ptr;
// }


// static Node *createNode(Node *ptr,const int *data)
// {
// 	Node *tmp = malloc(sizeof(Node));
// 	assert(tmp );
// 	tmp->data = *data;
// 	tmp->next = ptr->next;
// 	ptr->next = tmp;
// 	return ptr;
// }

// static Node* moveNode(Node *ptr,const int *pos)
// {
// 	for(int i=0;i<*pos;i++){
// 		if(!ptr ) break;
// 		ptr = ptr->next;
// 	}
// 	return ptr;
// }

// static Node* findNode(Node *ptr,const int *prevData)
// {
// 	while(ptr )
// 	{
// 		if (ptr->data == *prevData) break;
// 		ptr = ptr->next;
// 	}
// 	return ptr;
// }

// static Node* findFFNode(Node *ptr,const int *prevData)
// {
// 	while(ptr )
// 	{
// 		if (ptr->next->data == *prevData) break;
// 		ptr = ptr->next;
// 	}
// 	return ptr;
// }

// static void linkingNode(Node *ptr, Node *ptr2)
// {
// 	Node *tmp = ptr ;
// 	ptr2->next = ptr->next;
// 	free(tmp);
// }

void initList(List *pList, int eleSize)
{
	pList->ptr = malloc(sizeof(Node));
	assert(pList->ptr);
	pList->ptr->next = NULL;
	pList->eleSize = eleSize;

	// int gabage = -1;
	// pList->ptr = createNodere(NULL, &gabage);
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

void insertFirstNode(List *pList, const void *pData)
{
	// if(pList->ptr ) pList->ptr->next = createNodere(pList->ptr->next, pData, pList->eleSize);
	Node *ptr = malloc(sizeof(Node)+ pList->eleSize);
	assert(ptr );
	//ptr->data =
	memcpy(ptr+1, pData, pList->eleSize);
	ptr->next = pList->ptr->next;
	pList->ptr->next = ptr;


}

void insertNode(List *pList,const int *pPrevData, const int *pData)
{
	Node *ptr = pList->ptr->next;
	while(ptr )
	{
		if (memcmp(ptr+1, pPrevData, pList->eleSize) == 0) break;
		ptr = ptr->next;
	}
	if(ptr ){
		Node *tmp = malloc(sizeof(Node)+pList->eleSize);
		assert(tmp );
		memcpy(tmp+1, pData, pList->eleSize);
		tmp->next = ptr->next;
		ptr->next = tmp;
	}
	// ptr = findNode(ptr, &prevData);
	// if(ptr ) ptr->next = createNodere(ptr->next, &data);
}

// void insertPositionNode(List *pList, int pos, int data)
// {
// 	Node *ptr = pList->ptr;
// 	ptr = moveNode(ptr, &pos);
// 	if(ptr ) ptr->next = createNodere(ptr->next, &data);
// }

void deleteNode(List *pList, void *pData)
{
	Node *ptr = pList->ptr->next;
	Node *ptr2 = pList->ptr;
	while(ptr ){
		if(memcmp(ptr+1, pData, pList->eleSize) == 0 ) break;
		ptr = ptr->next;
		ptr2 = ptr2->next;
	}
	if(ptr ){
		Node *tmp = ptr;
		ptr2->next = ptr->next;
		free(tmp);
	}
	// ptr = findNode(ptr, &data);
	// ptr2 = findFFNode(ptr2, &data);
	// if(ptr ) linkingNode(ptr, ptr2);
}

// void deletePositionNode(List *pList, int pos)
// {
// 	Node *ptr = pList->ptr->next;
// 	Node *ptr2 = pList->ptr;
// 	ptr = moveNode(ptr, &pos);
// 	ptr2 = moveNode(ptr2, &pos);
// 	if(ptr ) linkingNode(ptr, ptr2);
// }

void printList(const List *pList, void (*print)(const void *pData))
{
	Node *ptr = pList->ptr->next;

	printf("[");
	while(ptr ){
		//printf("%d", ptr->data);
		print(ptr + 1);
		printf( (ptr->next) ? ", " : "");
		ptr = ptr->next;

	}
	printf("]\n");

}