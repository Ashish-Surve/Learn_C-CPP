#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Record.h"
using namespace std;
class PhoneDirectory
{
	vector<Record> pDir;
public:
	PhoneDirectory() :pDir(100) {};

	void Search_Customer_Details();

	void Write_to_file(string,string,Handling_Stage);

	void Add_Customer_Details();

	void Read_From_file(string, string, Handling_Stage);
};