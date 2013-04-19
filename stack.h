#ifndef STACK_H
#define STACK_H

#include <iostream>

struct stackNode{
	int data;
	stackNode* next;
};

class stack{
private:
	stackNode* top;
	int size;
public:
	stack();
	stack(int newData);
	~stack();
	void push(int newData);
	int pop();
	void printStack();
};

#endif
