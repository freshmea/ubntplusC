#ifndef NODE_H
#define NODE_H

class Node {
friend class List;
private:
	int data;
	Node *next;

	Node(int d, Node *n);
public:

	// Node *getNext() const;
	// int getData() const;
};

#endif