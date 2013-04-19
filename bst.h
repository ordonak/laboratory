#ifndef BST_H
#define BST_H

#include <iostream>

struct bstNode{
	int data;
	bstNode* left;
	bstNode* right;
};

class bst{
private:
	bstNode* root;
public:
	bst();
	bst(int newData);
	~bst();
	void cleanUp(bstNode* root);
	bstNode* getRoot();
	void insertNode(bstNode* curRoot, int newData);
	void deleteNode(bstNode* root, int toDel);
	bstNode* findMin(bstNode* root);
	bstNode* search(bstNode* root, int data);
	void preOrderTrav(bstNode* root);
	void postOrderTrav(bstNode* root);
	void inOrderTrav(bstNode* root);
};

#endif
