#include <cstdlib>
#include <cassert>
#include <cstdio>
#include <cstring>
#include "list.h"

Node * List::createNodere(Node *ptr,const void *data, int eleSize)
{
	Node *tmp = new Node[sizeof(Node)+eleSize];
	assert(tmp );
	memcpy(tmp+1, data, eleSize );
	tmp->next = ptr;
	return tmp;
}


Node * List::createNode(Node *ptr,const void *data, int eleSize)
{
	Node *tmp = new Node[sizeof(Node)+eleSize];
	assert(tmp );
	memcpy(tmp+1, data, eleSize );
	tmp->next = ptr->next;
	ptr->next = tmp;
	return ptr;
}

Node * List::moveNode(Node *ptr, const int *pos)
{
	for(int i=0;i<*pos;i++){
		if(!ptr ) break;
		ptr = ptr->next;
	}
	return ptr;
}

Node * List::findNode(Node *ptr,const void *prevData, int eleSize)
{
	while(ptr )
	{
		if (memcmp(ptr+1, prevData, eleSize) == 0) break;
		ptr = ptr->next;
	}
	return ptr;
}

Node * List::findFFNode(Node *ptr,const void *prevData, int eleSize)
{
	if(ptr ){
		while(ptr->next )
		{
			if (memcmp(ptr->next+1, prevData, eleSize) == 0) break;
			ptr = ptr->next;
		}
	}
	return ptr;
}

void List::linkingNode(Node *ptr, Node *ptr2)
{
	Node *tmp = ptr;
	ptr2->next = ptr->next;
	free(tmp);
}

void List::listGetData(Node *ptr, void *a,int eleSize)
{
	memcpy(a,ptr+1, eleSize);
}




List::List(int eleSize)
{
	int gabage = -1;
	this->eleSize = eleSize;
	this->ptr = createNodere(NULL, &gabage, this->eleSize);
}

List::~List()
{
	Node *ptr = this->ptr;
	while(ptr ){
		Node *tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
}

void List::insertFirstNode(void *data)
{
	this->ptr->next = createNodere(this->ptr->next, data, this->eleSize);
}

void List::insertNode(void *prevData, void *data)
{
	Node *ptr = this->ptr->next;
	ptr = findNode(ptr, prevData, this->eleSize);
	if(ptr ) ptr->next = createNodere(ptr->next, data, this->eleSize);
}

void List::insertPositionNode(int pos, void *data)
{
	Node *ptr = this->ptr;
	ptr = moveNode(ptr, &pos);
	if(ptr ) ptr->next = createNodere(ptr->next, data, this->eleSize);
}

void List::deleteNode(void *data)
{
	Node *ptr = this->ptr->next;
	Node *ptr2 = this->ptr;
	ptr = findNode(ptr, data, this->eleSize);
	ptr2 = findFFNode(ptr2, data, this->eleSize);
	if(ptr && ptr2) linkingNode(ptr, ptr2);
}

void List::deletePositionNode(int pos)
{
	Node *ptr = this->ptr->next;
	Node *ptr2 = this->ptr;
	ptr = moveNode(ptr, &pos);
	ptr2 = moveNode(ptr2, &pos);
	if(ptr && ptr2) linkingNode(ptr, ptr2);
}

void List::printList(void (*print)(const void *pData))
{
	Node *ptr = this->ptr->next;

	printf("[");
	while(ptr ){
		print((ptr + 1));
		printf( (ptr->next) ? ", " : "");
		ptr = ptr->next;

	}
	printf("]\n");
}