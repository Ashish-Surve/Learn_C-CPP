#pragma once
#include"Book.h"
#include<list>

class Library
{
private:
	list<Book> bookList;

public:
	Library();
	void UpdateBookList();
	void AddBook();
	void RemoveBook();
	void ModifyBook();
	void IssueBookToStudent();
	void MaintainStudentLibraryCard();
	void Write_to_file(Book&);
	void Show_Records_Book();
};