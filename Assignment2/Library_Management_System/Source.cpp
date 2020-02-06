#include<iostream>
using namespace std;
#include"Library.h"
#include"Student.h"
#include"Book.h"
int main()
{
	Library lib;
	//remove("BooksRecord.dat");			//delet this later
	cout << "Loading Data... Please Wait...\n";
	lib.UpdateBookList();
	int choice;

	while(1)
	{
		/*cout << "1. Administrator\n2. Student\n\n" << endl;

		cout << "Enter your choice :\n";															//Edit later,,,,,,,,
		cin >> choice;*/
		choice = 2;
		if(choice==1)
		{//Admin

			cout << "1. Add Book Record\n2. Show Books Records\n3. Remove book\n4.Modify Value\n" << endl;

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
			default:return 0;
			}
		}
		else if(choice ==2)
		{
			//Student
		}

	}


	return 0;
}