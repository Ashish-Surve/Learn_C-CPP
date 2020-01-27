#include<iostream>
#include"HashTable.h"

using namespace std;

int main()
{
	int choice;
	HashTable hash;
	while (1)
	{
		cout << "\n=====MENU=====\n";
		cout << "1.Add Element.\n2.Delete Element.\n3.Search Element.\n4.Display\n7.EXIT\n ";
		fflush(stdin);
		cin >> choice;
		int x;
		switch (choice)
		{
		case 1:
			cout << "Enter Element to Add" << endl;
			cin >> x;
			hash.AddElement(x);
			break;
		case 2:
			cout << "Enter Element to Delete" << endl;
			cin >> x;
			hash.DeleteElement(x);
			break;
		case 3:
			cout << "Enter Element to Search" << endl;
			cin >> x;
			hash.SearchElement(x);
			break;
		case 4:hash.Display();
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