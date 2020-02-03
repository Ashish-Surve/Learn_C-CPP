#pragma once

class String
{
	static String obj;
	int Len;
	char *Name;
	static int some;
public:
	String();						//Constructor
	String(const char *);	//Parametrised Constructor
	void operator=(const String &s);			//overloaded assignment operator
	String(const String &s);
	~String();
	void Display()const;

};