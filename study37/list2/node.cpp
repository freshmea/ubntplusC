#include "node.h"
#include <iostream>
using std::cout;
using std::endl;
Node::Node(int d, Node *n)
:data(d), next(n) {}

// Node* Node::getNext() const
// {
// 	return next;
// }

// int Node::getData() const
// {
// 	return data;
// }