// Binary Search Tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>
#include"BinarySearchTree.h"

int main()
{
	PBST root = CreateNode();

	int choice;
	while (1)
	{
		printf("\n=====MENU=====\n");
		printf("1.Reserved.");
		printf("2.Add New Node.");
		printf("3.PreOrder.");
		printf("4.PostOrder.");
		printf("5.InOrder.");
		printf("6.List Books in Accession order.");
		printf("7.EXIT\n ");
		fflush(stdin);
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			break;
		case 2:AddNewNode(root);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5: InOrderTraversal(root);
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
