#pragma once
#include"Telephone_Exchange_Customer.h"
#include<iostream>
class Local_Phone_number_directory
{
	//Phone_cust_details - map the phone number with customer
	map <int, class Telephone_Exchange_Customer> Phone_cust_details;

public:
	//default constructor
	Local_Phone_number_directory();

	//parametrized constructor
	Local_Phone_number_directory(int ph_num, string nm, string address);
	Local_Phone_number_directory(int ph_num, Telephone_Exchange_Customer cust_dtl);

	//get method
	map <int, class Telephone_Exchange_Customer> get_Phone_cust_details()const;
	int getTEC_from_Key(int x);
	//set method
	void set_Phone_cust_details(map <int, class Telephone_Exchange_Customer> ph_cust_details);

	void Add_New_Phone_Number_and_customer_details_In_Telephone_Exchange_Collection(int ph_num, string nm, string address);
	bool Search_Customer_details_In_Telephone_Exchange_Collection(int ph_num, string nm, string address);
	int Count_all_Customer_In_Telephone_Exchange_Collection(int ph_num, string nm, string address);
	bool update_Customer_details_In_Telephone_Exchange_Collection_By_Name(int ph_num, string nm, string address);
	bool delete_Customer_details_In_Telephone_Exchange_Collection_By_Name(int ph_num, string nm, string address);
	void Write_Customer_details_In_Telephone_Exchange_Collection_By_Name(int ph_num, string nm, string address);
	Local_Phone_number_directory Read_Customer_details_In_Telephone_Exchange_Collection_By_Name(int ph_num, string nm, string address);
	void Display_Phone_Number_and_customer_details_In_Telephone_Exchange_Collection();
};

