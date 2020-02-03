#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Record.h"
class PhoneDirectory
{
	vector<Record> pDir;

public:
	PhoneDirectory() = default;

	PhoneDirectory(int size)//find solution to make this efficient.
	{
		pDir.resize(size);
	}

	void Search_Customer_Details();

	inline void Add_Customer_Details()
	{
		string i, j;
		Handling_Stage k;
		cout << "Name?" << endl;
		cin >> i;
		cout << "Pno?" << endl;
		cin >> j;
		cout << "Handling Status?" << endl;
		cin >> k;
		pDir.emplace_back(Record(j,i,k));
	}
};