#include "Subscriber_Trunk_Dialling.h"
list<Local_Phone_number_directory> l;
Subscriber_Trunk_Dialling::Subscriber_Trunk_Dialling()
{
	//map<pair<int, string>, list<class Local_Phone_number_directory>> area_phone_directory;


	//Need to Implement
}

Subscriber_Trunk_Dialling::Subscriber_Trunk_Dialling(int area_code, string area_name, int ph_num, string name, string address)
{
	area_phone_directory.insert(make_pair(make_pair(area_code, area_name), list<Local_Phone_number_directory>{ Local_Phone_number_directory(ph_num, name, address) }));
	
}

map<pair<int, string>, list<class Local_Phone_number_directory>> Subscriber_Trunk_Dialling::get_area_phone_directory() const
{
	//Need to Implement
	return area_phone_directory;
}

int Subscriber_Trunk_Dialling::exists(int ac, string an)
{
	auto x=area_phone_directory.find(make_pair(ac, an));
	if (x != area_phone_directory.end())
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void Subscriber_Trunk_Dialling::set_area_phone_directory(map<pair<int, string>, list<class Local_Phone_number_directory>> area_ph_dir)
{
	area_phone_directory = area_ph_dir;
}

void Subscriber_Trunk_Dialling::Add_STD_Code_Name_For_Local_Phone_number_directory(int area_code, string area_name, int ph_num, string name, string address)
{
	
}

bool Subscriber_Trunk_Dialling::Search_STD_Code_Name_For_Local_Phone_number_directory(int area_code, string area_name, int ph_num, string name, string address)
{
	//Need to Implement
	return false;
}

int Subscriber_Trunk_Dialling::Count_STD_Code_Name_For_Local_Phone_number_directory(int area_code, string area_name, int ph_num, string name, string address)
{
	//Need to Implement
	return 0;
}

bool Subscriber_Trunk_Dialling::Update_STD_Code_Name_For_Local_Phone_number_directory(int area_code, string area_name, int ph_num, string name, string address)
{
	//Need to Implement
	return false;
}

bool Subscriber_Trunk_Dialling::Delete_STD_Code_Name_For_Local_Phone_number_directory(int area_code, string area_name, int ph_num, string name, string address)
{
	//Need to Implement
	return false;
}

Subscriber_Trunk_Dialling Subscriber_Trunk_Dialling::Read_STD_Code_Name_For_Local_Phone_number_directory(int area_code, string area_name, int ph_num, string name, string address)
{
	//Need to Implement
	return Subscriber_Trunk_Dialling();
}

void Subscriber_Trunk_Dialling::Write_STD_Code_Name_For_Local_Phone_number_directory(int area_code, string area_name, int ph_num, string name, string address)
{
	//Need to Implement
}

void Subscriber_Trunk_Dialling::Display_STD_Code_Name_and_Local_Phone_number_directory()
{
	for (auto x : area_phone_directory)
	{
		cout << "Area Code: " << x.first.first << "\t\tArea Name" << x.first.second << endl;
		for (auto x1 : x.second)
		{
			x1.Display_Phone_Number_and_customer_details_In_Telephone_Exchange_Collection();
		}
	}
}
