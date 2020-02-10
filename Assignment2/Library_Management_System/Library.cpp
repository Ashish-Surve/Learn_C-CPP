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
	if (!in) { cout << "UBL : Can't Open for Reading\n" << endl; return; }
	else
	{
		while (in.read((char*)r, sizeof(Book)))
		{
			bookList.emplace_back(*r);
		}
		in.close();
	}
	cout << "Book List Updated...\n" << endl;
}

void Library::UpdateStudentList()
{
	//Input stream class
	ifstream in("StudentRecord.dat");
	Student* s = new Student;
	studList.clear();
	if (!in) { cout << "USL : Can't Open for Reading\n" << endl; return; }
	else
	{
		while (in.read((char*)s, sizeof(Student)))
		{
			studList.emplace_back(*s);
		}
		in.close();
	}
	cout << "Student List Updated...\n" << endl;
}

void Library::UpdateIssueList()
{
	//Input stream class
	ifstream in("IssueRecord.dat");
	IssueEntry.clear();
	int temp[2];
	if (!in) { cout << "UIL : Can't Open for Reading\n" << endl; return; }
	else
	{
		while (in.read((char*)temp, sizeof(temp)))
		{
			IssueEntry.emplace(temp[0],temp[1]);
		}
		in.close();
		cout << "Issue List Updated...\n" << endl;
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
	int id;
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
	int sid, bid;
	cout << "Enter Stud ID?" << endl;
	cin >> sid;
	cout << "Enter Book ID?" << endl;
	cin >> bid;
	if (cin.fail()) 
	{
		cout << "Wrong Input\n";
		cin.clear();								//SUPER IMPORTANT
		cin.ignore(INT_MAX, '\n');					//SUPER IMPORTANT
		return;
	}

	auto search = IssueEntry.find(bid);
	if (search != IssueEntry.end()) {
		cout << "Book Already Issued\n" << endl;
		return;
	}
	else {
		ofstream out("IssueRecord.dat",ios::app);
		if (!out) 
		{
			cout << "Can't Open for Reading/Writing\n" << endl; 
			return;
		}

		Write_to_file(bid, sid);				//write Map to file.
		IssueEntry.emplace(bid, sid);
	}
	
}

void Library::ReturnBook()
{
	int bid;
	cout << "Enter Book ID?" << endl;
	cin >> bid;
	if (cin.fail()) {
		cout << "Wrong Input\n";
		cin.clear();								//SUPER IMPORTANT
		cin.ignore(INT_MAX, '\n');					//SUPER IMPORTANT
		return;
	}

	auto search = IssueEntry.find(bid);
	if (search != IssueEntry.end()) 
	{
		int temp[2];
		ifstream in("IssueRecord.dat");
		ofstream out("temp.bak");
		if (!in || !out) {
			cout << "ReturnBook : Can't Open for Reading/Writing\n" << endl; return;
		}
		else
		{
			while (in.read((char*)temp, sizeof(temp)))
			{
				if (bid != temp[0])		//if id same dont write.
				{
					out.write((char*)temp, sizeof(temp));
				}
				else
				{
					IssueEntry.erase(IssueEntry.find(bid));
				}
			}
			in.close();
			out.close();

			remove("IssueRecord.dat");
			rename("temp.bak", "issueRecord.dat");

			
			//UpdateIssueList();//since the file has been changed.
		}
	}
	else {
		cout << "Book Not Found\n" << endl;
		return;
	}

	//find the object and delete in file as well as vector
	
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

void Library::Write_to_file(Student &s)
{
	//Output stream class
	ofstream out("StudentRecord.dat", ios::app);

	if (!out) { cout << "Can't Open for Writing" << endl; return; }
	else
	{
		out.write((char*)&s, sizeof(Student));
	}
	out.close();
}

void Library::Write_to_file(int a,int b)
{

	//Output stream class
	ofstream out("IssueRecord.dat", ios::app);
	int tem[2];
	tem[0] = a;
	tem[1] = b;
	if (!out) { cout << "WF : Can't Open for Writing" << endl; return; }
	else
	{
		out.write((char*)&tem, sizeof(tem));
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

void Library::Show_Issued_Book()
{
	cout << "===================================================\n";
	cout << "==========  Library Management System  ============\n";

	cout << "BookID=======Student ID============================\n";
	for (auto i = IssueEntry.cbegin(); i != IssueEntry.cend(); ++i)
	{
		cout << i->first << "\t\t" << i->second << endl;
	}
	cout << "===================================================\n";
}


void Library::AddStudent()
{
	int id;
	string name;
	cout << "Enter Book ID?" << endl;
	cin >> id;
	if (cin.fail()) {
		cout << "Wrong Input\n";
		cin.clear();								//SUPER IMPORTANT
		cin.ignore(INT_MAX, '\n');					//SUPER IMPORTANT
		return;
	}
	cout << "Enter Stud Name?" << endl;
	cin >> name;


	studList.emplace_back(id, name);	//emplace obj
	Write_to_file(studList.back());				//write the same obj to file
	cout << "Student Record Added" << endl;
}

void Library::Show_Records_Student()
{

	cout << "===================================================\n";
	cout << "==========  Library Management System  ============\n";

	cout << "ID================Name============================\n";
	for (auto i = studList.cbegin(); i != studList.cend(); ++i)
	{
		cout << (*i);
	}
	cout << "===================================================\n";
}

