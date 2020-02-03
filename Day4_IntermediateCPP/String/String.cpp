#include"String.h"
#include<iostream>
using namespace std;


String::String(const char * c)
{
	cout << "inside parameterised" << endl;
	Len = strlen(c);
	Name = new char[Len+1];
	strcpy_s(Name, Len + 1, c);
}


String::String()
{
	cout << "inside default" << endl;
	Len = 0;
	Name = new char[1];
	*Name = '\0';
}
String::~String()
{
	if (Name != nullptr)
		delete[]Name;
}
void String::operator=(const String &s)
{
	if (this == nullptr)
		return ;
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
	cout << "Copy Constructor"<<endl;
	this->Len = s.Len;
	this->Name = new char[s.Len + 1];
	strcpy_s(this->Name, s.Len + 1, s.Name);
}
void String::Display()const
{
	if (Name == nullptr)
		return;
	cout << Name<<endl;
	
}