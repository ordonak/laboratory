#ifndef NODE_H
#define NODE_H

#include <iostream>

class node{
private:
	int data;
	node* next;
public:
	node(int d);
	void setData(int d);
	int getData();
	node* getNext();
	void setNext(int d);
};



#endif
