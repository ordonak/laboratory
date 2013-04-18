#include <iostream>

#include "bstNode.h"

using namespace std;
//BSTnode functions
bstNode::bstNode(int d){
	data = d;
	left = NULL;
	right = NULL;
}

void bstNode::setData(int d){
	data = d;
}

int bstNode::getData(){
	return data;
}

void bstNode::setLeft(bstNode* newLeft){
	left = newLeft;
}

void bstNode::setRight(bstNode* newRight){
	right = newRight;
}

bstNode* bstNode::getRight(){
	return right;
}

bstNode* bstNode::getLeft(){
	return left;
}
