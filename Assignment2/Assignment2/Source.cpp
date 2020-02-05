#include<iostream>
#include"PhoneDirectory.h"
using namespace std;

int main()
{
	int choice;
	PhoneDirectory pd;
	
	while (1)
	{
		cout << "\n=====MENU=====\n";
		cout << "1.Add Element.\n2.Search Element.\n3. Element.\n4.Display\n7.EXIT\n ";
		fflush(stdin);
		cin >> choice;
		int x;
		switch (choice)
		{
		case 1:
			pd.Add_Customer_Details();
			break;
		case 2:
			pd.Search_Customer_Details();
			break;
		case 3:
				
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7: exit(0);
			break;
		default:
			printf("Wrong Choice!");
			break;
		}

	}
}