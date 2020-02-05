#pragma once
#include<iostream>
#include<string>
using namespace std;

typedef char Handling_Stage;
#define Verified 0
#define NotVerified 1

class Record
{
public:
	string pno;
	string name;
	Handling_Stage hs;

	Record() = default;
	Record(string no, string n, Handling_Stage h) :pno(no), name(n), hs(h) {};
	
	inline void Display()
	{
		cout << name << endl;
		cout << pno << endl;
		cout << hs << endl;
	}
};

