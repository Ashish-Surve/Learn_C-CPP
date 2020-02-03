#include"Singleton.h"
#include<iostream>
using namespace std;

//static datamember defination
Singleton* Singleton::s = nullptr;

Singleton::Singleton()
{

}

Singleton* Singleton::getObject()
{
	if (s==nullptr)
	{
		s = new Singleton();
	}
		return s;

}
