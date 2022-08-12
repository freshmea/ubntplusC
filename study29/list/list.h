#ifndef LIST_H
#define LIST_H

typedef struct node {
	struct node *next;
}Node;

typedef struct list {
	Node *ptr;
	int eleSize;
}List;

void initList(List *pList, int eleSize);
void cleanupList(List *pList);

void insertFirstNode(List *pList, void *data);
void insertNode(List *pList, void *prevData, void *data);
void insertPositionNode(List *pList, int pos, void *data);
void deleteNode(List *pList, void *data);
void deletePositionNode(List *pList, int pos);


void printList(const List *pList, void (*print)(const void *));

#endif