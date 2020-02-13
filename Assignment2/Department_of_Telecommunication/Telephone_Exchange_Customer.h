#pragma once
#include<string>
#include<list>
#include<map>
#include<iostream>

using namespace std;

class Telephone_Exchange_Customer
{
	string Name;
	string Address;

public:
	//default constructor
	Telephone_Exchange_Customer();

	//parametrized constructor
	Telephone_Exchange_Customer(string name, string address);

	//get method
	string getName()const;
	string getAddress()const;

	//set method
	void setName(string nm);
	void setAddress(string address);

	void Add_New_Customer_details_In_Telephone_Exchange_Collection(string name, string Address);
	bool Search_Customer_details_In_Telephone_Exchange_Collection(string name, string Address);
	int Count_all_Customer_In_Telephone_Exchange_Collection(string name, string Address);
	bool update_Customer_details_In_Telephone_Exchange_Collection_By_Name(string name, string Address);	
	bool delete_Customer_details_In_Telephone_Exchange_Collection_By_Name(string name, string Address);	
	void Write_Customer_details_In_Telephone_Exchange_Collection_By_Name(string name, string Address);
	Telephone_Exchange_Customer Read_Customer_details_In_Telephone_Exchange_Collection_By_Name(string name, string Address);

	void Display_Telephone_Exchange_Customer_details();
};
