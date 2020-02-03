//#include<iostream>
//using namespace std;
//
//																									//Conversion Operator
//class Test
//{
//private:
//	int x;
//	char y;
//public:
//	Test() :x(0),y('A') {}
//	explicit Test(int e,char d) :x(e),y(d) {}		
//	int getVal()const { return x; }
//	int setVal(int e) { x = e; }
//
//																										//CODE FOR CONVERSION OPERATOR
//																										operator int()
//																										{
//																											return x;
//																										}
//																										operator char()
//																										{
//																											return y;
//																										}
//	void Display() { cout << "X : " << x << endl; }
//};
//void foo(Test T)
//{
//
//}
//
//int main()
//{
//	//create opbj of test.
//	Test t1;
//																							//convert from UDT to builtin type.
//																							int x = t1;
//	
//	cout << "X : " << x << endl;
//	return 0;
//}