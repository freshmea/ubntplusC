#ifndef LIST_H
#define LIST_H

class Node {
	private:
		Node *next;
	friend class List;
};

class List {
	private:
		Node *ptr;
		int eleSize;
		Node * createNodere(Node *ptr,const void *data, int eleSize);
		Node * createNode(Node *ptr,const void *data, int eleSize);
		Node * moveNode(Node *ptr, const int *pos);
		Node * findNode(Node *ptr,const void *prevData, int eleSize);
		Node * findFFNode(Node *ptr,const void *prevData, int eleSize);
		void linkingNode(Node *ptr, Node *ptr2);
		void listGetData(Node *ptr, void *a,int eleSize);

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