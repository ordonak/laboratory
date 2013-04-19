#include <iostream>
using namespace std;

#include "stack.h"

stack::stack(){
	top = NULL;
	size = 0;
}

stack::stack(int newData){
	top = new stackNode;
	top->data = newData;
	size = 1;
}

stack::~stack(){
	while(top != NULL){
		pop();
	}
}

void stack::push(int newData){
	stackNode* newNode = new stackNode;
	newNode->data = newData;
	newNode->next = top;
	top = newNode;
	size++;
}

int stack::pop(){
	stackNode* tempNode = new stackNode;

	int tempD = top->data;
	top = top->next;
	delete tempNode;
	size--;

	return tempD;
}

void stack::printStack(){
	stackNode* tempNode = top;
	while(tempNode != NULL){
		cerr << tempNode->data << "   ";
		tempNode = tempNode->next;
	}
}
