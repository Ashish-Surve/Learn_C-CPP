#include"AVL_TREE.h"
#include<malloc.h>
int Height(AVL_TREE * root)
{
	if (root == NULL)
		return 0;
	else
		return root->Height;
}

int Max(int lnodeHeight, int rnodeHeight)
{
	return (lnodeHeight > rnodeHeight) ? lnodeHeight : rnodeHeight;
}

AVL_TREE* AllocateNewNodeMemory(int val)
{
	AVL_TREE *newNode = (AVL_TREE*)malloc(sizeof(AVL_TREE));
	newNode->data = val;
	newNode->Height = 1;
	newNode->lChild = newNode->rChild = NULL;

	return newNode;
}

AVL_TREE* InsertNewNodeMemory(AVL_TREE*node, int val)
{
	if (node == NULL)
	{
		return AllocateNewNodeMemory(val);
	}

	if(node->data > val)
	{
		node->lChild = InsertNewNodeMemory(node->lChild, val);
	}
	else if (node->data < val)
	{
		node->rChild=InsertNewNodeMemory(node->rChild, val);
	}
	else
	{
		return node;
	}
	//update height of ancestor node
	node->Height = 1 + Max(Height(node->lChild), Height(node->rChild));

	//get the balance factor of ancestor node to check whether this node become unbalanced

	int bal_factor = getBalance(node);

	// Left Subtree Left Child Case (LL Rotation)
	if (bal_factor > 1  && node->lChild->data> val)
	{
		return rightRotate(node);
	}

	// Right Subtree Right Child Case (RR Rotation)
 if (bal_factor < -1 && node->rChild->data < val)
	{
		return leftRotate(node);
	}

	// Left Subtree Right Child Case (LR Rotation)
 if (bal_factor > 1 && node->lChild->data < val)
	{
		node->lChild = leftRotate(node->lChild);
		return rightRotate(node);
	}

	// Right Subtree Left Child Case (RL Rotation)
	else if (bal_factor < -1 && node->rChild->data > val)
	{
		node->rChild = rightRotate(node->rChild);
		return leftRotate(node);
	}

 return node;
}

AVL_TREE* leftRotate(AVL_TREE* node)
{
	AVL_TREE* temp1 = node->rChild;
	AVL_TREE* temp2 = temp1->lChild;

	//perform rotation
	temp1->lChild = node;
	node->rChild = temp2;

	//update height
	node->Height = 1 + Max(Height(node->lChild), Height(node->rChild));
	temp1->Height = 1 + Max(Height(temp1->lChild), Height(temp1->rChild));

	return temp1;
}

AVL_TREE* rightRotate(AVL_TREE* node)
{
	AVL_TREE* temp1 = node->lChild;
	AVL_TREE* temp2 = temp1->rChild;

	//perform rotation
	temp1->rChild = node;
	node->lChild = temp2;

	//update height
	node->Height = 1 + Max(Height(node->lChild), Height(node->rChild));
	temp1->Height = 1 + Max(Height(temp1->lChild), Height(temp1->rChild));

	return temp1;

}

int getBalance(AVL_TREE* node)
{
	if (node == NULL)
	{
		return 0;
	}

	return (Height(node->lChild) - Height(node->rChild));
}

AVL_TREE * DeleteNodeMemory(AVL_TREE*root, int val)
{

}

void PreorderTransversal(AVL_TREE* root)
{
	if (root == NULL)
		return;
	printf("%d -> ", root->data);
	PreorderTransversal(root->lChild);
	PreorderTransversal(root->rChild);
	
}

void InorderTransversal(AVL_TREE * root)
{
		if (root == NULL)
			return;
		
		InorderTransversal(root->lChild);
		printf("%d -> ", root->data);
		InorderTransversal(root->rChild);
}
