#include"Telephone_Exchange_Customer.h"
#include"Local_Phone_number_directory.h"
#include"Department_of_Telecommunications.h"
#include<iostream>
using namespace std;
#include<string>
int main()
{
	int choice;
	char ch;
	Telephone_Exchange_Customer tel_cust1;
	Local_Phone_number_directory tel_number;
	Department_of_Telecommunications dot;
	//International_Telecommunication_Union Internation_phone_directory;
	do
	{
		cout << "------------------------------------------" << endl;
		cout << "1. Add_Telephone_Records_In_Department_of_Telecommunications" << endl;
		cout << "2. Search_Telephone_Records_In_Department_of_Telecommunications" << endl;
		cout << "3. Count_Telephone_Records_In_Department_of_Telecommunications" << endl;
		cout << "4. Update_Telephone_Records_In_Department_of_Telecommunications" << endl;
		cout << "5. Delete_Telephone_Records_In_Department_of_Telecommunications" << endl;
		cout << "6. Read_Telephone_Records_Of_Department_of_Telecommunications_From_File" << endl;
		cout << "7. Write_Telephone_Records_Of_Department_of_Telecommunications_In_File" << endl;
		cout << "8. Display_Telephone_Records_From_Department_of_Telecommunications "<< endl;

		cout << "Enter your choice" << endl;
		cin>> choice;
		switch (choice)
		{
		case 1:
		{
		dot.Add_Telephone_Records_In_Department_of_Telecommunications(1, 91, " ", 20, "P99", 7719042, "NEWAshish", "NEWpune");
			
			//Call Add method
		}
		break;
		case 2:
		{
			//Call Search method
		}
		break;
		case 3:
		{
			//Call Count method
		}
		break;
		case 4:
		{
			//Call Update method

		}
		break;
		case 5:
		{
			//Call Delete method
		}
		break;
		case 6:
		{
			//Call Read method

		}
		break;
		case 7:
		{
			//Call Write method
		}
		break;
		case 8:
		{
			dot.Display_Telephone_Records_From_Department_of_Telecommunications();
		}
		break;
		default:
			cout << "Invalide choice" << endl;
			break;
		}

		cout << "DO YOU WANT TO CONTINUE....Y/N " << endl;
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
}