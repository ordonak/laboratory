#include <iostream>

#include "linkedList.h"
using namespace std;

linkedList::linkedList(){
	head = NULL;
}

linkedList::linkedList(int d){
	head->data = d;
	head->next = NULL;
}

linkedList::~linkedList(){
	while(head->next != NULL){
		node* tempNode = head;
		head = head->next;
		delete tempNode;
	}
}

node* linkedList::giveHead(){
	node* headNode = head;
	return headNode;
}

node* linkedList::giveBottom(){
	node* newNode;
	newNode = head;
	while(newNode->next != NULL){
		newNode = newNode->next;
	}
	return newNode;
	
}

bool linkedList::isEmpty(){
	if(head == NULL)
		return true;
	else
		return false;
}

void linkedList::push_front(int d){
	node* newNode = new node;
	newNode->data = d;
	newNode->next = head;
	head = newNode;
}

void linkedList::push_back(int d){
	if(head == NULL){
		head->data = d;
		head->next = NULL;
	}
	else{
		node* newNode = new node;
		newNode->data = d;
		newNode->next = NULL;
		node* bot = giveBottom();
		bot->next = newNode;
	}
}

void linkedList::pop_front(){
	if(head != NULL){
		node* temp = head;
		head = head->next;
		delete temp;
	}
}

void linkedList::pop_back(){
	node* newNode;
	newNode = giveHead();
	while(newNode->next->next != NULL){
		newNode = newNode->next;
	}
	delete newNode->next;
	newNode->next = NULL;
}

void linkedList::print(){
	node * newNode = giveHead();
	cerr << "Printing out linkedList..." << endl;
	while(newNode != NULL){
		cerr << newNode->data << "  ";
		newNode = newNode->next;
	} 	
	cerr << endl;
}

void linkedList::reverseList(){
	node* newHead = NULL;
	node* tempNode = NULL;

	cerr << "Reversing linkedList..." << endl;
	while(head != NULL){
		tempNode = head;
		head = head->next;
		tempNode->next = newHead;
		newHead = tempNode;
	}
	head = newHead;
}




