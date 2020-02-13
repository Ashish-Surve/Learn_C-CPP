#include "Telephone_Exchange_Customer.h"

Telephone_Exchange_Customer::Telephone_Exchange_Customer()
{
	//Need to Implement
}

Telephone_Exchange_Customer::Telephone_Exchange_Customer(string name, string address)
{
	this->Name = name;
	this->Address = address;

	//Need to Implement
}

string Telephone_Exchange_Customer::getName() const
{
	//Need to Implement
	return Name;
}

string Telephone_Exchange_Customer::getAddress() const
{
	//Need to Implement
	return Address;
}

void Telephone_Exchange_Customer::setName(string nm)
{
	//Need to Implement
	Name = nm;
}

void Telephone_Exchange_Customer::setAddress(string address)
{
	//Need to Implement
	Address = address;
}

void Telephone_Exchange_Customer::Add_New_Customer_details_In_Telephone_Exchange_Collection(string name, string Address)
{
	this->Name = name;
	this->Address = Address;
	
}

bool Telephone_Exchange_Customer::Search_Customer_details_In_Telephone_Exchange_Collection(string name, string Address)
{
	//Need to Implement
	return false;
}

int Telephone_Exchange_Customer::Count_all_Customer_In_Telephone_Exchange_Collection(string name, string Address)
{
	//Need to Implement
	return 0;
}

bool Telephone_Exchange_Customer::update_Customer_details_In_Telephone_Exchange_Collection_By_Name(string name, string Address)
{
	//Need to Implement
	return false;
}

bool Telephone_Exchange_Customer::delete_Customer_details_In_Telephone_Exchange_Collection_By_Name(string name, string Address)
{
	//Need to Implement
	return false;
}

void Telephone_Exchange_Customer::Write_Customer_details_In_Telephone_Exchange_Collection_By_Name(string name, string Address)
{
	//Need to Implement
}

Telephone_Exchange_Customer Telephone_Exchange_Customer::Read_Customer_details_In_Telephone_Exchange_Collection_By_Name(string name, string Address)
{
	//Need to Implement
	return Telephone_Exchange_Customer();
}

void Telephone_Exchange_Customer::Display_Telephone_Exchange_Customer_details()
{
	std::cout << "Name :" << Name << "\t\tAddress :"<<Address<<endl;
}
