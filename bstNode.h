#ifndef BSTNODE_H
#define BSTNODE_H

#include <iostream>

class bstNode{
private:
	int data;
	bstNode* left;
	bstNode* right;
public:
	bstNode(int d);
	void setData(int d);
	int getData();
	void setLeft(bstNode* newLeft);
	void setRight(bstNode* newRight);
	bstNode* getRight();
	bstNode* getLeft();
};

#endif
