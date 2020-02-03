#pragma once
#include"Person.h"
class SmartPointer
{
	Person *pData;

public:
	//default ctor
	SmartPointer() = default;

	//par ctor
	SmartPointer(Person*pValue):pData(pValue){}

	//dtor
	~SmartPointer()
	{
		if(pData)
		delete pData;

		cout << "Calling Destructor....." << endl;
	}

																									//Overload * and -> operators
																									Person*operator->()
																									{
																										return pData;
																									}
																									Person& operator*()
																									{
																										return *pData;
																									}
};