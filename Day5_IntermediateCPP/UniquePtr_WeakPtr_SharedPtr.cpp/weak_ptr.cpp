#include<iostream>
#include<memory>
#include<string>
using namespace std;

// how to create weak_ptr when we want 
// to assign one raw pointer to multiple owner

class Test
{
public:
	int no;
	string name;

	Test() :no(0), name("NULL") {}
	void Display()
	{
		cout << "Inside Display " << endl;
	}
};


int main()
{
	shared_ptr<Test>ptr1(new Test());
	cout << "Address contains by ptr1: " << ptr1.get() << endl;
	ptr1->Display();

	cout << "-----------------------------------------------------------" << endl;

	weak_ptr<Test> ptr3(ptr1);
	auto ptr2 = ptr3.lock();
	cout << "Address contains by ptr2: " << ptr2.get() << endl;
	ptr2->Display();

	cout << "-----------------------------------------------------------" << endl;
	cout << "Total pointer to: " << ptr1.get() << " : " << ptr1.use_count() << endl;

	cout << "resetting ptr1" << endl;
	ptr1.reset();
	cout << "Address contains by ptr1: " << ptr1.get() << endl;
	ptr1->Display();
	cout << "-----------------------------------------------------------" << endl;
	cout << "Address contains by ptr2: " << ptr2.get() << endl;
	cout << "value contains by ptr2: " << ptr2 << endl;
	ptr2->Display();
	cout << "Total pointer to: " << ptr2.get() << " : " << ptr2.use_count() << endl;



}