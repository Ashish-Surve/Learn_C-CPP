#include "Book.h"

string Book::getBookName()
{
	return book_name;
}

string Book::getBookAuthor()
{
	return book_author;
}

int Book::getBookId() 
{
	return book_id;;
}

void Book::setBookName(string bn)
{
	book_name = bn;
}

void Book::setBookAuthor(string ba)
{
	book_author = ba;
}

void Book::displayBookDetails()const
{
	cout << book_id << "\t" << book_name << "\t\t\t" << book_author << endl;
}
