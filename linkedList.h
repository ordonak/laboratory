#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>

struct node{
  int data;
  node* next;
};

class linkedList{
private: 
	node* head;
public:
	linkedList();
	linkedList(int d);
	~linkedList();
	node* giveHead();
	node* giveBottom();
	bool isEmpty();
	void push_front(int d);
	void push_back(int d);
	void pop_front();
	void pop_back();
	void print();
	void reverseList();

};

#endif
