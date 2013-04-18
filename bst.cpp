#include <iostream>
using namespace std;

#include "bst.h"


bst::bst(){
	root = NULL;
}

bst::bst(int newData){
	root = new bstNode;
	root->data = newData;
}
bst::~bst(){
	cleanUp(root);
}

void bst::cleanUp(bstNode* root){
	if(root->left != NULL)
		cleanUp(root->left);
	if(root->right != NULL)
		cleanUp(root->right);
	delete root;
}

bstNode* bst::getRoot(){
	if(root == NULL)
		return NULL;
	else
		return root;
}

void bst::insertNode(bstNode* curRoot, int newData){
	if(curRoot == NULL){
		bstNode* newNode = new bstNode;
		newNode->data = newData;
		curRoot = newNode;
	}
	else if(curRoot->data > newData){
		if(curRoot->left == NULL){
			bstNode* newNode = new bstNode;
			newNode->data = newData;
			curRoot->left = newNode;
		}
		else
			insertNode(curRoot->left, newData);
	}
	else{
		if(curRoot->right == NULL){
			bstNode* newNode = new bstNode;
			newNode->data = newData;
			curRoot->right = newNode;
		}
		else
			insertNode(curRoot->right, newData);
	}
}

void bst::deleteNode(bstNode* root, int toDel){
	if(root == NULL)
		return;
	else if(root->data < toDel)
		deleteNode(root->right, toDel);
	else if(root->data > toDel)
		deleteNode(root->left, toDel);
	else{
		if(root->right == NULL && root->left == NULL)
			delete root;
		else if(root->right != NULL)
			root = root->right
		else if(root->left != NULL)
			root = root->left;
		else{
			//finish this!!!! the case where there's two children!
		}

	}
	

}
bstNode* bst::search(bstNode* root, int data){
	if(root->data == data)
		return root;
	else if(root->data < data)
		return search(root->right, data);
	else if(root->data > data)
		return search(root->left, data);
	else
		return NULL;
}
void bst::preOrderTrav(bstNode* root){
	if(root == NULL)
		return;
	cerr << root->data << "   ";
	preOrderTrav(root->left);
	preOrderTrav(root->right);

}
void bst::postOrderTrav(bstNode* root){
	if(root == NULL){
		return;
	}
	postOrderTrav(root->left);
	postOrderTrav(root->right);
	cerr << root->data << "   ";
}
void bst::inOrderTrav(bstNode* root){
	if(root == NULL)
		return;
	inOrderTrav(root->left);
	cerr << root->data << "   ";
	inOrderTrav(root->right);
}
