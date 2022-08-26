#ifndef LIST_H
#define LIST_H
#include <ostream>
#include "node.h"


class List {
friend std::ostream& operator<<(std::ostream& out,const List& rhs);
private:
	Node *ptr_;
	List(const List& list);
	List& operator=(const List& rhs);

	void printList(std::ostream& out) const;	// 간접 접근. 
public:

	List();
	~List();

	void insertFirst(int data);
	void insert(int prevData, int data);
	void del(int data);
};

#endif