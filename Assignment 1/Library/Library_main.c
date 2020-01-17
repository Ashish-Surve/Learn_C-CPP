#include<stdio.h>
#include<string.h>
#include"Library.h"

int main()
{
	int choice;
	struct Library lib[100];
	while (1)
	{
		printf("\n=====MENU=====\n");
		printf("1.Add Book Information.\n2.Display Book Information.\n3.List Books of given Author.\n4.List Title of Book by ANo.\n5.Number of Books.\n6.List Books in Accession order.\n7.EXIT\n ");
		fflush(stdin);
		scanf_s("%d", &choice);

		switch (choice)
		{
				case 1:addBookInfo(lib);
					break;
				case 2: printf("\nEnter Book ANo?\n");
					int ano;
					scanf_s("%d", &ano);
					BOOL x=displayBookInfo(lib, ano);
					if (!x)
					{
						printf("\nWrong A.No.\n");
					}
					break;
				case 3: printf("\nEnter Book Author?\n");
					char aut[30];
					scanf_s("%s", aut, 30);
					displayBookInfo(lib, &aut);
					break;
				case 4: printf("\nEnter Book ANo?\n");
					int a_no;
					scanf_s("%d", &a_no);
					listBooksNameANo(lib, a_no);
					break;
				case 5:  countOfBooks();
					break;
				case 6: listBooksANo(lib);
					break;
				case 7: exit(0);
					break;
						default:
							printf("Wrong Choice!");
						break;
		}

	}
}