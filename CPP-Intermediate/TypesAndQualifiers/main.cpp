#include<iostream>
using namespace std;
int main()
{
	//DataTypes
	int iNum = 100;
	//generic DT
	int val = iNum;
	cout << "Val = "<<val << endl;

	cout << "-------------------------------------------"<< endl;
	char ch = 'y';
	val = ch;
	cout << "Val = " << val << endl;
	cout << "-------------------------------------------" << endl;
	cout << "SIZE: " << sizeof(val);
	string name = "Ashish";
	//val = name;
	float f = 3.14159265358979;
	val = f;
	cout << "\nVal = " << val << endl;
	cout << "-------------------------------------------" << endl;

}