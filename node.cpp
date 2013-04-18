#include <iostream>

#include "node.h"

using namespace std;

//Node functions
node::node(int d){
	data = d;
	next = NULL;
}

void node::setData(int d){
	data = d;
}

int node::getData(){
	return data;
}

node* node::getNext(){
	return next;
}

void node::setNext(int d){
	node* newNode = new node(d);
	next = newNode;
}


