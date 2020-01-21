#include"TBT.h"  
#include<stdio.h>


int main()
{
	PTBT root=NULL;
	int x;
	int choice;
	while (1)
	{
		printf("\n=====MENU=====\n");
		printf("1.Reserved.\n");
		printf("2.Add New Node.\n");
		printf("3.PreOrder.\n");
		printf("4.PostOrder.\n");
		printf("5.InOrder.\n");
		printf("6.Delete Node.\n");
		printf("7.EXIT\n ");
		fflush(stdin);
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			break;
		case 2:	printf("Enter data of Node: ");
			scanf_s("%d", &x); 
			root=InsertNode(root,x);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:InOrderTraversal(root);
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
