#include "PhoneDirectory.h"
#include<iterator>

void PhoneDirectory::Search_Customer_Details()
{
	string i, j;
	Handling_Stage k;
	int choice;
	cout << "Search Employee by 1. Name or 2. Pno "<< endl;
	cin >> choice;

	if (choice == 1)
	{
		cout << "Name?" << endl;
		cin >> i;
		vector<Record>::iterator iter;

		for (iter = pDir.begin(); iter != pDir.end(); iter++)
		{
			if (iter->name == i)
			{
				cout << "Name : " <<iter->name<< endl;
				cout << "Phone No. : " << iter->pno << endl;
				if(iter->hs==Verified)
					cout << "Handling Status : Verified" << endl;
				else
					cout << "Handling Status : Not Verified" << endl;

				return;
			}
		}
		cout << "Record not found." << endl;
	}
	else if(choice==2)
	{
		cout << "Pno?" << endl;
		cin >> j;
	}
	

	cout << "Handling Status?" << endl;
	cin >> k;
	Record temp=Record(j, i, k);

}
