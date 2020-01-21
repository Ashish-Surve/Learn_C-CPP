#include"TBT.h"

PTBT CreateNode(int value)
{
	PTBT NewNode = (PTBT)malloc(sizeof(TBT));
	if (NewNode)
	{
		NewNode->data = value;
		NewNode->left = NewNode->right = NULL;
		NewNode->lflag = NewNode->rflag = true;
	}
	else
	{
		printf("Memory Error");
	}
	return NewNode;
}

PTBT InsertNode(PTBT root, int value)
{
	if ( NULL == root )
	{
		return CreateNode(value);
	}
	else
	{
		PTBT curr = root;
		PTBT parent = NULL;

		while (NULL != curr)
		{
			if (curr->data == value)
			{
				printf("Duplicate Value\n");
			}
			
			parent = curr;
			
			//moving to left
			if (curr->data > value)
			{
				if (false == curr->lflag)
				{
					curr = curr->left;
				}
				else
				{
					break;
				}
			}
				//moving to right
			else
			{
					if (false == curr->rflag)
					{
						curr = curr->right;
					}
					else
					{
						break;
					}
			}
		}//end while
		PTBT newnode = CreateNode(value);
		newnode->lflag = newnode->rflag = true;

		if (parent->data > value)
		{
			newnode->left = parent->left;
			newnode->right = parent;
			parent->lflag = false;
			parent->left = newnode;
		}
		else
		{
			newnode->right = parent->right;
			newnode->left = parent;
			parent->rflag = false;
			parent->right = newnode;
		}
	}
	return root;
}

void PreOrderTraversal(PTBT root);
void PostOrderTraversal(PTBT root);
void InOrderTraversal(PTBT root);

PTBT DeleteNode(PTBT root, int x);
