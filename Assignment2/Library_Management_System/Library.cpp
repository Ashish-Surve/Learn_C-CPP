#include "Library.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
Library::Library()
{

}
void Library::UpdateBookList()
{
	//Input stream class
	ifstream in("BooksRecord.dat");
	Book* r=new Book;
	bookList.clear();
	if (!in) { cout << "Can't Open for Reading\n" << endl; return; }
	else
	{
		while (in.read((char*)r, sizeof(Book)))
		{
			bookList.emplace_back(*r);
		}
		in.close();
	}
}

void Library::AddBook()
{
	int id;
	string name, author;
	cout << "Enter Book ID?" << endl;
	cin >> id;
	if (cin.fail()) {
		cout << "Wrong Input\n";
		cin.clear();								//SUPER IMPORTANT
		cin.ignore(INT_MAX, '\n');					//SUPER IMPORTANT
		return;
	}
	cout << "Enter Book Name?" << endl;
	cin >> name;
	cout << "Enter Book Author?" << endl;
	cin >> author;

	bookList.emplace_back(id, name, author);	//emplace obj
	Write_to_file(bookList.back());				//write the same obj to file
}

void Library::RemoveBook()
{
	int id, pos;
	Book *r = new Book();
	cout << "Enter Book ID?" << endl;
	cin >> id;
	if (cin.fail()) {
		cout << "Wrong Input\n";
		cin.clear();								//SUPER IMPORTANT
		cin.ignore(INT_MAX, '\n');					//SUPER IMPORTANT
		return;
	}
	//find the object and delete in file as well as vector
	ifstream in("BooksRecord.dat");
	ofstream out("temp.bak");
	if (!in ||!out) {
		cout << "Can't Open for Reading/Writing\n" << endl; return;}
	else
	{
		while (in.read((char*)r, sizeof(Book)))
		{
			if (r->getBookId() != id)		//if id same dont write.
			{
				out.write((char*)r, sizeof(Book));
			}
		}
		in.close();
		out.close();

		remove("BooksRecord.dat");		
		rename("temp.bak", "BooksRecord.dat");

		UpdateBookList();//since the file has been changed.
	}


}

void Library::ModifyBook()//incomplete
{
	int id,option,pos;
	string newVal;
	Book *r = new Book();
	cout << "Enter Book ID to modify?" << endl;
	cin >> id;

	if (cin.fail()) {
		cout << "Wrong Input\n";
		cin.clear();								//SUPER IMPORTANT
		cin.ignore(INT_MAX, '\n');					//SUPER IMPORTANT
		return;
	}
	cout << "What do u wish to modify?  1.Name 2. Author" << endl;
	cin >> option;

	cout << "Enter new Value?" << endl;
	cin >> newVal;

	
	//find the object and delete in file as well as vector
	fstream io("BooksRecord.dat", ios::in | ios::binary | ios::out);
	if (!io) {
		cout << "Can't Open for Reading/Writing\n" << endl; return;
	}
	else
		pos = io.tellg();
	{
		while (!io.eof() && io.read((char*)r, sizeof(Book)))
		{
			if (r->getBookId() == id)		//if id same dont write.
			{
				if (option == 1)
				{
					r->setBookName(newVal);
				}
				else if(option==2)
				{
					r->setBookAuthor(newVal);
				}
				io.seekp(pos);
				io.write((char*)r, sizeof(Book));
				cout << "---------Record Updated---------" << endl;
				break;
			}
			pos = io.tellg();
		}
		io.close();


		UpdateBookList();//since the file has been changed.
	}

}

void Library::IssueBookToStudent()
{
}

void Library::MaintainStudentLibraryCard()
{
}

void Library::Write_to_file(Book& r)
{
	//Output stream class
	ofstream out("BooksRecord.dat",ios::app);

	if (!out) { cout << "Can't Open for Writing" << endl; return; }
	else
	{
		out.write((char*)&r, sizeof(Book));
	}
	out.close();
}

void Library::Show_Records_Book()
{
	cout << "===================================================\n";
	cout << "==========  Library Management System  ============\n";

	cout << "ID=======Name====================Author============\n";
	for (auto i = bookList.cbegin(); i != bookList.cend(); ++i)
	{
		(i)->displayBookDetails();
	}
	cout << "===================================================\n";
}
