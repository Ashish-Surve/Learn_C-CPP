#pragma once
#include"Book.h"
#include"Student.h"
#include<list>
#include<map>
#include<iterator>

class Library
{
private:
	list<Book> bookList;
	list<Student> studList;
	map<int, int> IssueEntry;

public:
	Library();
	void UpdateBookList();
	void UpdateStudentList();
	void UpdateIssueList();
	void AddBook();
	void RemoveBook();
	void ModifyBook();
	void IssueBookToStudent();
	void ReturnBook();
	void MaintainStudentLibraryCard();
	void Write_to_file(Book&);
	void Write_to_file(Student&);
	void Write_to_file(int,int);
	void Show_Records_Book();
	void Show_Issued_Book();

	void AddStudent();
	void Show_Records_Student();
	
};