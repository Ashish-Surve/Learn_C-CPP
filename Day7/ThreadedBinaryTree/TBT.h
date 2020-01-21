#pragma once
#pragma once
#include<stdio.h>
#include<stdbool.h>

typedef struct ThreadedBinaryTree
{
	int data;
	struct ThreadedBinaryTree *left, *right;
	bool lflag, rflag;
}TBT, *PTBT, **PPTBT;


PTBT CreateNode(int);
PTBT InsertNode(PTBT, int);
void PreOrderTraversal(PTBT root);
void PostOrderTraversal(PTBT root);
void InOrderTraversal(PTBT root);

PTBT DeleteNode(PTBT root, int x);

