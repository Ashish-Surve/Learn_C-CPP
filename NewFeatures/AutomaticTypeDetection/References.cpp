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


	cout << "----------------------------------------" << endl;
	//reference to an array

	int arr[5] = { 1,2,3,4,5 };
	//																					--IMPORTANT
	int (&ref2)[5] = arr;
	cout << ref2[3] << endl;

	//Range based loop  c++11

	cout << "----------------------------------------" << endl;

	for (int i : ref2)
	{
		cout << i << endl;
	}


	cout << "----------------------------------------" << endl;

	//Pointer to a reference- not possibke

	int dat = 99;
	int &ref4 = dat;
	int* ptr = &ref4;

	cout << *ptr << endl;
	ref4 = 85;
	cout << *ptr << endl;


	//Array of reference
		//Not possible


	//reference to a reference
	int &ref5 = ref4;



}
