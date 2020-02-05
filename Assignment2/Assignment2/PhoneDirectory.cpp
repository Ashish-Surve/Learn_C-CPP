#include "PhoneDirectory.h"
#include<iterator>
#include<fstream>
#include<string>

void PhoneDirectory::Search_Customer_Details()
{
	string i, j;
	Handling_Stage k;
	cout << "Search Employee by Name?"<< endl;
	cin >> i;
		
	//Input stream class
	ifstream in("Inventory.dat");

	Record* r = new Record;

	if (!in) { cout << "cant open" << endl; return; }
	else
	{
		while(!in.eof())
		{ 
			in.read((char*)r, sizeof(Record));
			if (r->name == i)
			{
				cout << "=================================\n";
				r->Display();
				cout << "=================================\n";
				in.close();
				return;
			}

		}
		in.close();
	}

}

void PhoneDirectory::Write_to_file(string j,string i,Handling_Stage k)
{
	Record r;
	r.name = i;
	r.pno = j;
	r.hs = k;

	//Output sream class
	ofstream out("Inventory.dat", ios::binary| ios::app);

	if (!out) { cout << "cant open" << endl; return; }
	else
	{
		out.write((char*)&r, sizeof(Record));
		out.close();
	}


}

void PhoneDirectory::Add_Customer_Details()
{

	string i, j;
	Handling_Stage k;
	cout << "Name?" << endl;
	cin >> i;
	cout << "Pno?" << endl;
	cin >> j;
	cout << "Handling Status?" << endl;
	cin >> k;
	pDir.emplace_back(j, i, k);

	Write_to_file(j, i, k);
}
