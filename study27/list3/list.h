#ifndef LIST_H
#define LIST_H

typedef struct node {
	int data;
	struct node *next;
}Node;

typedef struct list {
	Node *ptr;
}List;

void initList(List *pList);
void cleanupList(List *pList);

void insertFirstNode(List *pList, int data);
void insertNode(List *pList, int prevData, int data);
void insertPositionNode(List *pList, int pos, int data);
void deleteNode(List *pList, int data);
void deletePositionNode(List *pList, int pos);


void printList(const List *pList);

#endif