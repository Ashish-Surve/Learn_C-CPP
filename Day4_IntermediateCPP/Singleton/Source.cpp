#include"Singleton.h"
#include<iostream>
using namespace std;
int main()
{
	 Singleton*s = Singleton::getObject();
	 Singleton *k= Singleton::getObject();
	 cout << s->getObject << "     " << k->getObject << endl;
	 cout << endl << "-----------------------------------------------------" << endl;

	 Singleton s1(*s);
	 cout << s1.getObject<< endl;
	 cout << endl << "-----------------------------------------------------" << endl;
	 cout << typeid(5).name();
}