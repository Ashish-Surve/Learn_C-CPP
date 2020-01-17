#include"BinarySearchTree.h"
#include<malloc.h>
#include<stdio.h>
#include<stdlib.h>


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

PBST DeleteNode(PBST root,int x)
{

	if (root == NULL)
	{
		return root;
	}


	if (root->data > x)
	{
		root->left = DeleteNode(root->left,x);
	}
	else if (root->data < x)
	{
		root->right = DeleteNode(root->right,x);
	}
	else
	{
		if (root->left == NULL)
		{
			PBST t = root->right;
			free(root);
			return t;
		}
		else if (root->right == NULL)
		{
			PBST t = root->left;
			free(root);
			return t;
		}
	
			PBST temp = root->right;

			while(temp && temp->left != NULL)
			{
				temp = temp->left;
			}
			root->data = temp->data;
			root->right = DeleteNode(root->right, temp->data);
	}
	return root;
}
