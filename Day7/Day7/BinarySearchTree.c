#include"BinarySearchTree.h"
#include<malloc.h>
#include<stdio.h>
#include<stdlib.h>
#include "..\ThreadedBinaryTree\TBT.h"


PBST CreateNode()
{
	PBST x=(PBST)malloc(sizeof(BST));
	x->left = NULL;
	x->right = NULL;
	printf("Enter data of Root Node: ");
	scanf_s("%d", &(x->data));
	return x;
}



void AddNewNode(PPBST root)
{

	if (root == NULL)
	{
		*root=CreateNode(root);
	}
	PBST head= *root;
	PBST x = (PBST)malloc(sizeof(BST));
	x->left = NULL;
	x->right = NULL;
	printf("Enter data of Node: ");
	scanf_s("%d", &x->data);
	PBST temp = NULL;
	while (head != NULL)
	{
		temp = head;
		if (x->data > head->data)
		{
			head = head->right;
		}
		else
		{
			head = head->left;
		}
	}
		
	if (x->data > temp->data)
	{
		temp->right = x;
	}
	else
	{
		temp->left = x;
	}

}

void PreOrderTraversal(PBST root)
{
	struct Stack* st = createStack(20);

	if (root == NULL)
	{
		return;
	}
		push(st, root);
		
	while (!isEmpty(st))
	{
		PBST tt = pop(st);
		printf("%d ->", tt->data);

		if (tt->right)
		{
			push(st, tt->right);
		}
		if (tt->left)
		{
			push(st, tt->left);
		}
	}

	

}

void PostOrderTraversal(PBST root)
{
}

void InOrderTraversal(PBST root)
{
	if (root == NULL)
		return;
	InOrderTraversal(root->left);
	printf("%d -> ", root->data);
	InOrderTraversal(root->right);
}

PBST DeleteNode(PBST curr,int x)
{

	if (curr == NULL)
	{
		return curr;
	}


	if (curr->data > x)
	{
		curr->left = DeleteNode(curr->left,x);
	}
	else if (curr->data < x)
	{
		curr->right = DeleteNode(curr->right,x);
	}
	else
	{
		if (curr->left == NULL)
		{
			PBST t = curr->right;
			free(curr);
			return t;
		}
		else if (curr->right == NULL)
		{
			PBST t = curr->left;
			free(curr);
			return t;
		}
	
			PBST temp = curr->right;

			while(temp && temp->left != NULL)
			{
				temp = temp->left;
			}
			curr->data = temp->data;
			curr->right = DeleteNode(curr->right, temp->data);
	}
	return curr;
}
