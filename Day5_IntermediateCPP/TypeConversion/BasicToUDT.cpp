//#include<iostream>
//using namespace std;
//
//class Test
//{
//private:
//	int x;
//public:
//	Test():x(0){}
//	explicit 	
//	Test(int e) :x(e) {}		//here we prevent disallow of constructr while using = at line 23,24
//	int getVal()const { return x; }
//	int setVal(int e) { x = e; }
//	void Display() { cout << "X : " << x << endl; }
//};
//void foo(Test T)
//{
//
//}
//
//int main()
//{
//	//create an obj of test class.
//	Test Tobj = 3;
//	Tobj = 7;			//calling parameterised constructor- can be prevented by using explicit.
//	Tobj.Display();
//	return 0;
//}