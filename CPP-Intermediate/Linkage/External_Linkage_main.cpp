#include"Global.h"
#include<iostream>

//this error comes bcoz this vaiable is stored in Data Section.
//Severity	Code	Description	Project	File	Line	Suppression State
//Error	LNK2005	"int g_val" (? g_val@@3HA) already defined in External_Linkage.obj	Linkage	C : \Users\Administrator\source\repos\CPP - Intermediate\Linkage\External_Linkage_main.obj	1

using namespace std;
int main()
{
	cout << "In Main Func" << endl;
	cout << g_val << endl;
	Display();
}