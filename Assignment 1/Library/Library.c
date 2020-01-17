#include"Library.h"

BOOL addBookInfo(struct Library lib[SIZE])
{
	static int ano = 1;
	lib[ano].ANo = ano;
	getchar();
	printf("\nEnter Title?\n");
	scanf_s("%[^\n]*c",lib[ano].Title,sizeof(lib[ano].Title));
	getchar();
	printf("\nEnter Author Name ?\n");
	scanf_s("%[^\n]*c", lib[ano].aName,sizeof(lib[ano].aName));

	printf("\nEnter Price?\n");
	scanf_s("%f", &lib[ano].price);

	lib[ano].issue = FALSE;
	ano++;
	count++;
	printf("\nData Added to Library\n");
	return TRUE;
}

BOOL displayBookInfo(struct Library lib[SIZE],int ano)
{
	if (ano > count)
		return FALSE;
	printf("\nA. No. : %5d", lib[ano].ANo);
	printf("\tTitle : %10s", lib[ano].Title);
	printf("\tAuthor Name : %15s", lib[ano].aName);
	printf("\tPrice : %2f",lib[ano].price);

	if(lib[ano].issue)
		printf("\tBook Issued : True");
	else
		printf("tnBook Issued : False");
	return TRUE;
}

void listBooksAuthor(struct Library lib[SIZE],char * name)
{
	int i;
	BOOL flag=TRUE;
	for (i = 1; i < count+1; i++)
	{
		if (strcmp(name, lib[i].aName))
		{
			displayBookInfo(lib, i);
			flag = FALSE;
		}

	}
	if (flag)
	{
		printf("\nNo Books of Author Found\n");
	}
}

void listBooksNameANo(struct Library lib[SIZE], int ano)
{
	printf("\nTitle : %s", lib[ano].Title);
}

void countOfBooks()
{
	printf("Number of Books : %d", count);
}

void listBooksANo(struct Library lib[SIZE])
{
	int i;
	for (i = 1; i < count + 1; i++)
	{
			displayBookInfo(lib, i);
	}
}