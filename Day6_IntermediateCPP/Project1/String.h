#pragma once

class String
{
	int Len;
	char *Name;
public:
	String();						//Constructor
	String(const char *);	//Parametrised Constructor
	void operator=(const String &s);			//overloaded assignment operator
	String(const String &s);
	~String();
	void Display()const;

};