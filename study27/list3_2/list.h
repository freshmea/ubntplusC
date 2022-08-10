#ifndef LIST_H
#define LIST_H

typedef struct node {
	int data;
	struct node *next;
}Node;

typedef struct list {
	Node *ptr;
	int eleSize;
}List;

void initList(List *pList, int eleSize);
void cleanupList(List *pList);

void insertFirstNode(List *pList, const void *pData);
void insertNode(List *pList,const int *pPrevData, const int *pData);
// void insertPositionNode(List *pList, int pos, int data);
void deleteNode(List *pList, void *pData);
// void deletePositionNode(List *pList, int pos);


void printList(const List *pList, void (*print)(const void *));

#endif