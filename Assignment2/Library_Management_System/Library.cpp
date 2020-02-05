#include "Library.h"


Library::Library()
{

}

list<Book> Library::getBookList()
{
	return list<Book>();
}

void Library::AddBook()
{
	int id;
	string name, author;
	cout << "Enter Book ID?" << endl;
	cin >> id;
	cout << "Enter Book Name?" << endl;
	cin >> name;
	cout << "Enter Book Author?" << endl;
	cin >> author;
	bookList.emplace_back(id, name, author);
}

void Library::RemoveBook()
{
}

void Library::ModifyBook()
{
}

void Library::IssueBookToStudent()
{
}

void Library::MaintainStudentLibraryCard()
{
}
