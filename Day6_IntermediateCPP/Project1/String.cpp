#include"String.h"
#include<iostream>
using namespace std;


String::String(const char * c)
{
	cout << "inside String parameterised" << endl;
	Len = strlen(c);
	Name = new char[Len + 1];
	strcpy_s(Name, Len + 1, c);
}


String::String()
{
	cout << "inside String default" << endl;
	Len = 0;
	Name = new char[1];
	*Name = '\0';
}
String::~String()
{
	cout << "inside String dtor" << endl;
	if (Name != nullptr)
		delete[]Name;
	Name = nullptr;

}
void String::operator=(const String &s)
{
	cout << "inside String overloaded =" << endl;
	if (this == nullptr)
		return;
	else
	{
		if (Name != nullptr)
			delete[]Name;
		Len = s.Len;
		Name = new char[Len + 1];
		strcpy_s(Name, Len + 1, s.Name);
	}
}
String::String(const String &s)
{
	cout << "String Copy  Constructor" << endl;
	this->Len = s.Len;
	this->Name = new char[s.Len + 1];
	strcpy_s(this->Name, s.Len + 1, s.Name);
}
void String::Display()const
{
	cout << "inside String display" << endl;
	if (Name == nullptr)
		return;
	cout << Name << endl;

}