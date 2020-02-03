#pragma once
class Date
{
	int day, month, year;

public:

	//Default ctor
	Date();

	//Parameterised ctor
	Date(int d, int m, int y);

	//copy ctor
	Date(const Date&);

	//Overloaded assignment(=) operator
	Date operator=(const Date& dd);

	void Display();

};