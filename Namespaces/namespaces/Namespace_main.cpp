#include<iostream>
#include"Namespace.h"
#include"Unnamed_Namespaces.h"
using namespace std;

int main()
{
	using namespace Allocators;
	::Init();
	Allocators::Init();
	//block for Data
	{
		using namespace Data;
		Command();
	}
	//block for Collections
	{
		using namespace Collection;
		Command();
	}
	//using scope resolution
	Data::Command();
	Collection::Command();


	return 0;
}