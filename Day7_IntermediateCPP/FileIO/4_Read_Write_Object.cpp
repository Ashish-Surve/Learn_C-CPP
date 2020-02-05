#include<iostream>		//to perform console I/O
#include<fstream>		//To perform File I/O
#include<string>
using namespace std;


class Employee {
public:
	int emp_id;
	string name;
	int salary;

	void Display()
	{
		cout << emp_id << endl;
		cout << name << endl;
		cout << salary << endl;
	}
};

void ReadTextFromFile();
void WriteTextToFile();
int main()
{
	int choice;
	while (1)
	{
		cout << "\n\n\n1. Read Text from file" << endl;
		cout << "2. Write Text to file" << endl;

		cout << "Enter your choice?" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:ReadTextFromFile();
			break;
		case 2: WriteTextToFile();
			break;
		default: return 0;

		}
	}
	return 0;
}

void ReadTextFromFile()
{
	//Input stream class
	ifstream in("Inventory.dat");

	Employee* e=new Employee;

	if (!in) { cout << "cant open" << endl; return; }
	else
	{
			in.read((char*)e, sizeof(Employee));
			e->Display();
			in.close();
	}

	


}

void WriteTextToFile()
{
	Employee e;
	e.emp_id = 101;
	e.name = "Ashish";
	e.salary = 5465465;

	//Output sream class
	ofstream out("Inventory.dat", ios::binary);

	if (!out) { cout << "cant open" << endl; return; }
	else
	{
		out.write((char*)&e, sizeof(Employee));

		out.close();
	}



}