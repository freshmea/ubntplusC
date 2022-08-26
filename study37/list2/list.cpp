#include <cstdlib>
#include <cassert>
#include <cstdio>
#include <cstring>
#include "list.h"

std::ostream& operator<<(std::ostream& out, const List& rhs)
{
	rhs.printList(out);
	return out;
}

void List::printList(std::ostream& out) const
{
	Node *ptr = ptr_->next;
	out << "[";
	while(ptr ){
		out << ptr->data;
		out << ((ptr->next ) ? ", ": "");
		ptr = ptr->next;
	}
	out << "]";
}

List::List()
{
	ptr_ = new Node(-1, NULL);
	assert(ptr_ );
}
List::~List()
{
	Node *ptr = ptr_;
	while(ptr ){
		Node *tmp = ptr;
		ptr = ptr->next;
		delete tmp;
	}
}

void List::insertFirst(int data)
{
	// ptr_->next = createNode(data, ptr_->next);
	ptr_->next = new Node(data, ptr_->next);
}
void List::insert(int prevData, int data)
{
	Node *ptr = ptr_->next;

	while(ptr ){
		if(ptr->data == prevData)
			break;
		ptr = ptr->next;
	}

	if(ptr ){
		// ptr2->next = createNode(data, ptr2->next);
		ptr->next = new Node(data, ptr->next);
	}
}

void List::del(int data)
{
	Node *ptr1 = ptr_->next;
	Node *ptr2 = ptr_;
	while (ptr1 ){
		if(ptr1->data == data) break;
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	if (ptr1 ){
		ptr2->next = ptr1->next;
		delete ptr1;
	}
}