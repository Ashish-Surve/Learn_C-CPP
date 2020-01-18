#include"AVL_TREE.h"
#include<stdio.h>

int main()
{
	AVL_TREE* root=NULL;

	int choice;
	while (1)
	{
		printf("\n=====MENU=====\n");
		printf("1.Allocate.\n");
		printf("2.Add New Node.\n");
		printf("3.PreOrder.\n");
		printf("4.PostOrder.\n");
		printf("5.InOrder.\n");
		printf("6.Delete Node.\n");
		printf("7.EXIT\n ");
		fflush(stdin);
		scanf_s("%d", &choice);
		int x;
		switch (choice)
		{
		case 1:
			printf("Enter node data?\t");
			scanf_s("%d", &x);
			root = AllocateNewNodeMemory(x);
			break;
		case 2:
			printf("Enter new node data?\t");
			scanf_s("%d", &x);
			root=InsertNewNodeMemory(root,x);
			break;
		case 3:PreorderTransversal(root);
			break;
		case 4:
			break;
		case 5: InorderTransversal(root);
			break;
		case 6:
			break;
		case 7: exit(0);
			break;
		default:
			printf("Wrong Choice!");
			break;
		}

	}
}