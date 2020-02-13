#pragma once
#include "Subscriber_Trunk_Dialling.h"
#include"Local_Phone_number_directory.h"
#include<iostream>
#include<string>
using namespace std;

class  Department_of_Telecommunications
{
	// Nation_area_phone_Number_directory - map of -  International_Country_Calling_code and
	// list of STD code which map of pair of( area code, area name ) and
	// list of local phone number and customer details.
	map<pair<int, string>, list<class Subscriber_Trunk_Dialling>> Nation_area_phone_Number_directory;

public:
	Department_of_Telecommunications();

	//parametrized constructor
	Department_of_Telecommunications(int country_code, string country_name, int area_code, string area_name, int ph_num, string name, string address);

	//get method
	map<pair<int, string>, list<class Subscriber_Trunk_Dialling>> get_Nation_area_phone_Number_directory()const;

	//set method
	void set_Nation_area_phone_Number_directory(map<pair<int, string>, list<class Subscriber_Trunk_Dialling>> nation_ph_dir);

	void Add_Telephone_Records_In_Department_of_Telecommunications(int choice =0, int country_code = 91, string country_name = "India", int area_code = 20, string area_name = "Pune", int ph_num=0, string name = "", string address="");
	bool Search_Telephone_Records_In_Department_of_Telecommunications(int choice = 0, int country_code = 91, string country_name = "India", int area_code = 20, string area_name = "Pune", int ph_num = 0, string name = "", string address = "");
	int Count_Telephone_Records_In_Department_of_Telecommunications(int choice = 0, int country_code = 91, string country_name = "India", int area_code = 20, string area_name = "Pune", int ph_num = 0, string name = "", string address = "");
	bool Update_Telephone_Records_In_Department_of_Telecommunications(int choice = 0, int country_code = 91, string country_name = "India", int area_code = 20, string area_name = "Pune", int ph_num = 0, string name = "", string address = "");
	bool Delete_Telephone_Records_In_Department_of_Telecommunications(int choice = 0, int country_code = 91, string country_name = "India", int area_code = 20, string area_name = "Pune", int ph_num = 0, string name = "", string address = "");
	Department_of_Telecommunications Read_Telephone_Records_Of_Department_of_Telecommunications_from_File(int choice = 0, int country_code = 91, string country_name = "India", int area_code = 20, string area_name = "Pune", int ph_num = 0, string name = "", string address = "");
	void Write_Telephone_Records_Of_Department_of_Telecommunications_In_File(int choice = 0, int country_code = 91, string country_name = "India", int area_code = 20, string area_name = "Pune", int ph_num = 0, string name = "", string address = "");
	void Display_Telephone_Records_From_Department_of_Telecommunications();
};


