#pragma once


typedef int BOOL;
#define TRUE 1
#define FALSE 0

#define SIZE 100
//count of books
static count = 0;
struct Library
{
	int ANo;
	char Title[50];
	char aName[50];
	float price;
	BOOL issue;
	
};

BOOL addBookInfo(struct Library[SIZE]);
BOOL displayBookInfo(struct Library lib[SIZE], int);
void listBooksAuthor(struct Library lib[SIZE], char *);
void listBooksNameANo(struct Library lib[SIZE], int ano);
void countOfBooks();
void listBooksANo(struct Library lib[SIZE]);