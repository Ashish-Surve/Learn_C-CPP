#include "Date.h"
#include<iostream>
Date::Date()
{
	std::cout << "Inside Date Default Function" << std::endl;
	day = 0;
	month = 0;
	year = 0;
}

Date::Date(int d, int m, int y)
{
	std::cout << "Inside Date Parametrised Function" << std::endl;
	day = d;
	month = m;
	year = y;
}

Date::Date(const Date& dd)
{
	std::cout << "Inside Date Copy Function" << std::endl;
	day = dd.day;
	month = dd.month;
	year = dd.month;
}

Date Date::operator=(const Date & dd)
{
	std::cout << "Inside Date Overloaded = Function" << std::endl;
	day = dd.day;
	month = dd.month;
	year = dd.month;
	return *this;
}

void Date::Display()
{
	std::cout << "Inside Date Display Function" << std::endl;
	std::cout << "Date : " << day << "/" << month << "/" << year << std::endl;
}
