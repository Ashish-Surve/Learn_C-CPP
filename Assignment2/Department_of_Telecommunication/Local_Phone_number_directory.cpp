#include "Local_Phone_number_directory.h"
using namespace std;
Local_Phone_number_directory::Local_Phone_number_directory()
{
	//Need to Implement
}


Local_Phone_number_directory::Local_Phone_number_directory(int ph_num, string nm, string address)
{
	Phone_cust_details.insert(make_pair(ph_num, Telephone_Exchange_Customer(nm, address)));

}

Local_Phone_number_directory::Local_Phone_number_directory(int ph_num, Telephone_Exchange_Customer cust_dtl)
{

	//Need to Implement
}

map<int, class Telephone_Exchange_Customer> Local_Phone_number_directory::get_Phone_cust_details() const
{
	return Phone_cust_details;
}

int  Local_Phone_number_directory::getTEC_from_Key(int x)
{
	auto m = Phone_cust_details.find(x);
	if (m != Phone_cust_details.end())
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void Local_Phone_number_directory::set_Phone_cust_details(map<int, class Telephone_Exchange_Customer> ph_cust_details)
{
	Phone_cust_details = ph_cust_details;
}

void Local_Phone_number_directory::Add_New_Phone_Number_and_customer_details_In_Telephone_Exchange_Collection(int ph_num, string nm, string address)
{
	
}

bool Local_Phone_number_directory::Search_Customer_details_In_Telephone_Exchange_Collection(int ph_num, string nm, string address)
{
	//Need to Implement
	return false;
}

int Local_Phone_number_directory::Count_all_Customer_In_Telephone_Exchange_Collection(int ph_num, string nm, string address)
{
	//Need to Implement
	return 0;
}

bool Local_Phone_number_directory::update_Customer_details_In_Telephone_Exchange_Collection_By_Name(int ph_num, string nm, string address)
{
	//Need to Implement
	return false;
}

bool Local_Phone_number_directory::delete_Customer_details_In_Telephone_Exchange_Collection_By_Name(int ph_num, string nm, string address)
{
	//Need to Implement
	return false;
}

void Local_Phone_number_directory::Write_Customer_details_In_Telephone_Exchange_Collection_By_Name(int ph_num, string nm, string address)
{
	//Need to Implement
}

Local_Phone_number_directory Local_Phone_number_directory::Read_Customer_details_In_Telephone_Exchange_Collection_By_Name(int ph_num, string nm, string address)
{
	//Need to Implement
	return Local_Phone_number_directory();
}

void Local_Phone_number_directory::Display_Phone_Number_and_customer_details_In_Telephone_Exchange_Collection()
{
	for (auto x : Phone_cust_details)
	{
		cout << "Phone No: " << x.first << endl;
		x.second.Display_Telephone_Exchange_Customer_details();
	}
}
