#include <iostream>
using namespace std;

#include "queue.h"

queue::queue(){
	size = 0;
}

queue::queue(int newData){
	queueNode* first = new queueNode;
	queueNode* last = new queueNode;
	first->data = newData;
	first->next = last;
	last = NULL;
	size++;
}

queue::~queue(){
	while(first != NULL){
		dequeue();
	}
}

void queue::enqueue(int newData){
	queueNode* newNode = new queueNode;
	newNode->data = newData;
	newNode->next = NULL;
	if(last == NULL)
		last = newNode;
	else{
		last->next = newNode;
		last = last->next;
	}
	size++;
	
}

int queue::dequeue(){
	queueNode* tempNode = new queueNode;
	tempNode = first;
	int tempData = tempNode->next->data;
	first = first->next;
	delete tempNode;

	return tempData;
}

void queue::printQueue(){
	queueNode* tempNode = first;
	while(tempNode != NULL){
		cerr << tempNode->data << "   ";
		tempNode = tempNode->next;
	}
}
