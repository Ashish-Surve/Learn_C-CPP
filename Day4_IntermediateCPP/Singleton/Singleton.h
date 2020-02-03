#pragma once
class Singleton
{
	static Singleton* s;
	//private constructor
	Singleton();
public:
	 static Singleton* getObject();
};

