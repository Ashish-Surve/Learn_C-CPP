#include<iostream>
using namespace std;
#include"Library.h"
#include"Student.h"
#include"Book.h"
int main()
{
	Library lib;
	lib.setUpAndLoad();

	int choice;
	char ch;

	while(1)
	{
		try
		{

			cout << "1. AddPhoneRecord\n2. SearchPhoneRecordByName" << endl;

			cout << "Enter your choice :\n";
			cin >> choice;

			switch (choice)
			{
			case 1:
				break;
			case 2:
				cout << "Enter Name to search its record :" << endl;

				break;
			case 3:
				cout << "Enter Mobile No. to search its record :" << endl;

				break;
			case 4:
				cout << "Enter Name to update its record :" << endl;

				break;
			case 5:
				cout << "Enter Mobile No.  to update its record :" << endl;

				break;
			case 6:
				cout << "Enter Mobile No.  to delete its record :" << endl;

				break;
			case 7:

				break;
			case 8:

				break;
			case 9:
				break;
			default:return 0;
			}
		}
		catch (...)
		{
			cout << "Exception caught" << endl;
		}

	}


	return 0;
}