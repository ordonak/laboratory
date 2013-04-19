#include <iostream>

using namespace std; 

#include "driver.h"
#include "linkedList.h"
#include "bst.h"
#include "stack.h"
#include "queue.h"

driver::driver(){
	cerr << "Driver has been created." << endl;
}

void driver::driverMenu(){
	int choice;
	cerr << "What would the user like to do?" << endl;
	cerr << "-------------------------------" << endl;
	cerr << "1. Test Linked List " << endl;
	cerr << "2. Test BST" << endl;
	cerr << "3. Test Stack" << endl;
	cerr << "4. Quit" << endl;
	cerr << "Choice? ";
	cin >> choice;

	switch(choice)	
	{
		case LL:
			linkedListRun();
			break;
		case BST:
			bstRun();
			break;
		case STK:
			stackRun();
			break;
		case QUIT: 
			return;
	}

}

void driver::linkedListRun(){
	linkedList testList;
	testList.push_front(1);
	testList.push_front(2);
	testList.push_front(3);
	testList.push_front(4);
	testList.push_front(5);
	testList.print();
	testList.reverseList();
	testList.print();
}

void driver::bstRun(){
	bst testTree(3);
	bstNode* root = testTree.getRoot();
	testTree.insertNode(root,5);
	testTree.insertNode(root,1);
	testTree.insertNode(root,2);
	testTree.insertNode(root,4);
	cerr << endl;
	testTree.inOrderTrav(root);
	testTree.deleteNode(root,5);
	cerr << endl;
	testTree.inOrderTrav(root);
}

void driver::stackRun(){
	stack stack(5);
	stack.push(4);
	stack.push(3);
	stack.push(2);
	stack.push(1);
	cerr << endl;
	stack.printStack();
	cerr << endl;
	stack.pop();
	stack.printStack();
}

void driver::queueRun(){

}
