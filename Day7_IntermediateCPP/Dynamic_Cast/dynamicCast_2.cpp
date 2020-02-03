#include<iostream>
using namespace std;
#include"dynamicCast_2.h"

int main()
{
	char ch;
	int choice;
	do
	{
		cout << "1. Draw Rectangle Shape" << endl;
		cout << "2. Draw Triangle Shape" << endl;
		cout << "enter choice" << endl;
		cin >> choice;
		Rectangle R;
		Triangle T;
		switch (choice)
		{
		case 1:R=Rectangle();
			Draw(&R);
				break;
		case 2:T=Triangle();
			Draw(&T);
			break;
		}
		cout << "Continue?...Y/N" << endl;
		cin >> ch;
	} while (ch == 'y');

}