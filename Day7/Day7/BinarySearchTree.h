#pragma once
#include"Stack.h"
typedef struct BinarySearchTree
{
	int data;
	struct BinarySearchTree *left, *right;
}BST,*PBST,**PPBST;

PBST CreateNode();
void AddNewNode(PPBST root);

void PreOrderTraversal(PBST root);
void PostOrderTraversal(PBST root);
void InOrderTraversal(PBST root);

PBST DeleteNode(PBST root,int x);


