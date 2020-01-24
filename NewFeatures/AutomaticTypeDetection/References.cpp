#include<iostream>
#include<string>
using namespace std;


int main()
{
	int Data = 5;
	cout << "Data Balue : " << Data << endl;

	int &ref = Data;

	cout << "ref value : " << ref << endl;

	cout << "----------------------------------------" << endl;

	cout << "Data Address : " << &Data << endl; 

	cout << "Ref Address : " << ref << endl;
}
