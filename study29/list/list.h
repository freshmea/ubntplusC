#ifndef LIST_H
#define LIST_H

class Node {
	public:
		Node *next;
};

class List {
	private:
		Node *ptr;
		int eleSize;

	public:
		List(int eleSize);
		~List();

		void insertFirstNode(void *data);
		void insertNode(void *prevData, void *data);
		void insertPositionNode(int pos, void *data);
		void deleteNode(void *data);
		void deletePositionNode(int pos);
		void printList(void (*print)(const void *));
};

#endif