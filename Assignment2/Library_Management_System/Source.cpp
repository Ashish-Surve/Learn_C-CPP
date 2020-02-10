#include<iostream>
using namespace std;
#include"Library.h"
#include"Student.h"
#include"Book.h"
int main()
{
	Library lib;
	//remove("BooksRecord.dat");			//delet this line later
	cout << "Loading Data... Please Wait...\n";
	lib.UpdateBookList();
	lib.UpdateStudentList();
	lib.UpdateIssueList();
	int choice;

	while (1)
	{
		/*cout << "1. Administrator\n2. Student\n\n" << endl;

		cout << "Enter your choice :\n";															//Edit later,,,,,,,,
		cin >> choice;*/
		choice = 2;
		if (choice == 1)
		{//Admin

			cout << "1. Add Book Record\n2. Show Books Records\n3. Remove book\n4.Modify Value\n5. Add Student Record\n6.Show Student Records\n" << endl;

			cout << "Enter your choice :\n";
			cin >> choice;

			switch (choice)
			{
			case 1:lib.AddBook();
				break;
			case 2:lib.Show_Records_Book();
				break;
			case 3:lib.RemoveBook();
				break;
			case 4:lib.ModifyBook();
				break;
			case 5: lib.AddStudent();
				break;
			case 6: lib.Show_Records_Student();
				break;
			default:return 0;
			}
		}
		else if (choice == 2)
		{
			//Student

			cout << "1. Issue Book\n2. Show Books \n3. Show Issued Books Records\n4.Return Book\n5. Add Student Record\n6.Show Student Records\n" << endl;

			cout << "Enter your choice :\n";
			cin >> choice;

			switch (choice)
			{
			case 1:lib.IssueBookToStudent();
				break;
			case 3:lib.Show_Issued_Book();
				break;
			case 2:lib.Show_Records_Book();
				break;
			case 4:lib.ReturnBook();
				break;
			default:return 0;


			}

		}
		
	}
	return 0;
}