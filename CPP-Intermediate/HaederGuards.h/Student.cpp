#include"Global.h"
#include<iostream>

int main()
{
	std::cout << sizeof(struct date);
	struct date obj;
	obj.day = 12;
	std::cout << std::endl << obj.day;
}