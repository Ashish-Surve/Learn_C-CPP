#pragma once
#include"Telephone_Exchange_Customer.h"
#include"Local_Phone_number_directory.h"
#include<iostream>
#include<map>
#include<list>
using namespace std;
//Subscriber Trunk Dialling (STD) codes are assigned to each city/town/village, 
//with the larger Metro cities having shorter area codes (STD codes),
//which are from 2 to 8 digits long
class Subscriber_Trunk_Dialling
{
	//area_phone_directory - store pair of the ( area code, area name,)
	// and list of local directory (phone number and customer details).
	map<pair<int, string>, list<class Local_Phone_number_directory>> area_phone_directory;

	public:
		Subscriber_Trunk_Dialling();

		//parametrized constructor
		Subscriber_Trunk_Dialling(int area_code, string area_name, int ph_num, string name, string address);


		//get method
		map<pair<int, string>, list<class Local_Phone_number_directory>> get_area_phone_directory()const;
		int exists(int x, string y);
		//set method
		void set_area_phone_directory(map<pair<int, string>, list<class Local_Phone_number_directory>> area_ph_dir);
	
		void Add_STD_Code_Name_For_Local_Phone_number_directory(int area_code, string area_name, int ph_num, string name, string address);
		bool Search_STD_Code_Name_For_Local_Phone_number_directory(int area_code, string area_name, int ph_num, string name, string address);
		int Count_STD_Code_Name_For_Local_Phone_number_directory(int area_code, string area_name, int ph_num, string name, string address);
		bool Update_STD_Code_Name_For_Local_Phone_number_directory(int area_code, string area_name, int ph_num, string name, string address);
		bool Delete_STD_Code_Name_For_Local_Phone_number_directory(int area_code, string area_name, int ph_num, string name, string address);
		Subscriber_Trunk_Dialling Read_STD_Code_Name_For_Local_Phone_number_directory(int area_code, string area_name, int ph_num, string name, string address);
		void Write_STD_Code_Name_For_Local_Phone_number_directory(int area_code, string area_name, int ph_num, string name, string address);
		void Display_STD_Code_Name_and_Local_Phone_number_directory();
};
