//#include<iostream>
//#include<memory>
//using namespace std;
//
////how to create unique_ptr instance and pass them bw functions
//
//class Test
//{
//
//public:
//	void Display()
//	{
//		cout << "Inside Display " << endl;
//	}
//};
//
//int main()
//{
//	//create an unique_ptr to an arrzy of 5 ints.
//	auto p = make_unique<int[]>(5);
//
//	//Initilization the array
//
//	for (int i=0;i<5;i++)
//	{
//		p[i] = i;
//		cout << p[i] << "  " ;
//	}
//	cout << endl;
//	unique_ptr<Test> ptr1(new Test());
//	ptr1->Display();
//	cout << "Memory Addres: " << ptr1.get() << endl;
//
//	//try to copy ptr 1 to ptr2
//		//unique_ptr1<Test> = ptr1;		//error
//
//		//solution to error
//	unique_ptr<Test> ptr3 = move(ptr1);
//	ptr3->Display();
//	cout << "Memory Addres ptr 3: " << ptr3.get() << endl;
//	cout << "Memory Addres ptr 1: " << ptr1.get() << endl;
//	ptr1->Display();
//
//	cout << "----------------------------------------------" << endl;
//																											//this is important...
//	Test* t = new Test();
//	t = nullptr;
//	t->Display();
//}