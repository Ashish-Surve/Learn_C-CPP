#include "Department_of_Telecommunications.h"
#include<iterator>
#include<list>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

Department_of_Telecommunications::Department_of_Telecommunications()
{
	/*Nation_area_phone_Number_directory.insert(make_pair(make_pair(91, "India"), list<Subscriber_Trunk_Dialling>{Subscriber_Trunk_Dialling(20, "P1", 705544, "Rohit", "Address1"),
		Subscriber_Trunk_Dialling(40, "P2", 705546544, "Ashish", "Address2"),
		Subscriber_Trunk_Dialling(60, "P3", 755405544, "Rohit2", "Address3"),
		Subscriber_Trunk_Dialling(80, "P4", 70555644, "Rohit3", "Address4")
	}));

	Nation_area_phone_Number_directory.insert(make_pair(make_pair(90, "Austrailia"), list<Subscriber_Trunk_Dialling>{Subscriber_Trunk_Dialling(20, "Pune", 705544, "Rohit", "Address1"),
		Subscriber_Trunk_Dialling(80, "Muimbai", 705546544, "Ashish", "Address2"),
		Subscriber_Trunk_Dialling(41, "Pune2", 755405544, "Rohit2", "Address3"),
		Subscriber_Trunk_Dialling(20, "Pune3", 70555644, "Rohit3", "Address4")
	}));*/

	//Nation_area_phone_Number_directory.insert_or_assign(make_pair(11, "UK"), list<Subscriber_Trunk_Dialling>{Subscriber_Trunk_Dialling(20, "Pune", 705544, "Rohit", "Address1"),
	//	Subscriber_Trunk_Dialling(80, "Muimbai", 705546544, "Ashish", "Address2"),
	//	Subscriber_Trunk_Dialling(41, "Pune2", 755405544, "Rohit2", "Address3"),
	//	Subscriber_Trunk_Dialling(20, "Pune3", 70555644, "Rohit3", "Address4")
	//});

	//Nation_area_phone_Number_directory.insert_or_assign(make_pair(452, "USA"), list<Subscriber_Trunk_Dialling>{Subscriber_Trunk_Dialling(20, "Pune", 705544, "Rohit", "Address1"),
	//	Subscriber_Trunk_Dialling(80, "Muimbai", 705546544, "Ashish", "Address2"),
	//	Subscriber_Trunk_Dialling(41, "Pune2", 755405544, "Rohit2", "Address3"),
	//	Subscriber_Trunk_Dialling(20, "Pune3", 70555644, "Rohit3", "Address4")
	//});
}

Department_of_Telecommunications::Department_of_Telecommunications(int country_code, string country_name, int area_code, string area_name, int ph_num, string name, string address)
{
	Nation_area_phone_Number_directory.insert_or_assign(make_pair(country_code, country_name), list<Subscriber_Trunk_Dialling>{Subscriber_Trunk_Dialling(area_code, area_name, ph_num, name, address)});
	
}

map<pair<int, string>, list<class Subscriber_Trunk_Dialling>> Department_of_Telecommunications::get_Nation_area_phone_Number_directory() const
{
	return Nation_area_phone_Number_directory;
}

void Department_of_Telecommunications::set_Nation_area_phone_Number_directory(map<pair<int, string>, list<class Subscriber_Trunk_Dialling>> nation_ph_dir)
{
//Nation_area_phone_Number_directory = nat
}

void Department_of_Telecommunications::Add_Telephone_Records_In_Department_of_Telecommunications(int choice , int country_code, string country_name, int area_code, string area_name, int ph_num, string name, string address)
{
	Subscriber_Trunk_Dialling ListObject=Nation_area_phone_Number_directory[make_pair(country_code, country_name)]
}

bool Department_of_Telecommunications::Search_Telephone_Records_In_Department_of_Telecommunications(int choice, int country_code, string country_name, int area_code, string area_name, int ph_num, string name, string address)
{
	//Need to Implement
	
	return false;
}

int Department_of_Telecommunications::Count_Telephone_Records_In_Department_of_Telecommunications(int choice, int country_code, string country_name, int area_code, string area_name, int ph_num, string name, string address)
{
	//Need to Implement
	return 0;
}

bool Department_of_Telecommunications::Update_Telephone_Records_In_Department_of_Telecommunications(int choice, int country_code, string country_name, int area_code, string area_name, int ph_num, string name, string address)
{
	//Need to Implement
	return false;
}

bool Department_of_Telecommunications::Delete_Telephone_Records_In_Department_of_Telecommunications(int choice, int country_code, string country_name, int area_code, string area_name, int ph_num, string name, string address)
{
	//Need to Implement
	return false;
}

Department_of_Telecommunications Department_of_Telecommunications::Read_Telephone_Records_Of_Department_of_Telecommunications_from_File(int choice, int country_code, string country_name, int area_code, string area_name, int ph_num, string name, string address)
{
	//Need to Implement
	return Department_of_Telecommunications();
}

void Department_of_Telecommunications::Write_Telephone_Records_Of_Department_of_Telecommunications_In_File(int choice,int country_code, string country_name, int area_code, string area_name, int ph_num, string name, string address)
{
	//Need to Implement
}

// No marks for display method
void Department_of_Telecommunications::Display_Telephone_Records_From_Department_of_Telecommunications()
{
	for (auto x : Nation_area_phone_Number_directory)
	{
		cout << "=====================================================================\n";
		cout << "Country code: " << x.first.first << "\t\tCountry Name: " << x.first.second << endl;
		for (auto x1 : x.second)
		{
			cout << "------------------------------------------------------------------\n";
			x1.Display_STD_Code_Name_and_Local_Phone_number_directory();
			cout << "------------------------------------------------------------------\n";
		}
		cout << "=====================================================================\n";
	}
}
