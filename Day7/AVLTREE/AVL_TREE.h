#pragma once
#include<stdio.h>
typedef struct AVL_TREE
{
	int data;
	struct AVL_TREE *lChild, *rChild;
	int Height;
}AVL_TREE;

int Height(AVL_TREE* root);

int Max(int lnodeHeight, int rnodeHeight);

AVL_TREE* AllocateNewNodeMemory(int val);

AVL_TREE* InsertNewNodeMemory(AVL_TREE*root, int val);

void PreorderTransversal(AVL_TREE* root);

void InorderTransversal(AVL_TREE* root);

int getBalance(AVL_TREE* node);

AVL_TREE* leftRotate(AVL_TREE* node);

AVL_TREE* rightRotate(AVL_TREE* node);

AVL_TREE* deleteNode(AVL_TREE* node,int x);