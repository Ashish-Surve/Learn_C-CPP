#pragma once
#include"Book.h"
#include<list>

class Library
{
private:
	list<Book> bookList;

public:
	Library();
	list<Book> getBookList();
	void AddBook();
	void RemoveBook();
	void ModifyBook();
	void IssueBookToStudent();
	void MaintainStudentLibraryCard();

};