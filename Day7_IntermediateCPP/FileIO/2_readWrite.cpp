//#include<iostream>		//to perform console I/O
//#include<fstream>		//To perform File I/O
//#include<string>
//using namespace std;
//
//void ReadTextFromFile();
//void WriteTextToFile();
//int main2()
//{
//	int choice;
//	while (1)
//	{
//		cout << "\n\n\n1. Read Text from file" << endl;
//		cout << "2. Write Text to file" << endl;
//
//		cout << "Enter your choice?" << endl;
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 1:ReadTextFromFile();
//			break;
//		case 2: WriteTextToFile();
//			break;
//		default: return 0;
//
//		}
//	}
//	return 0;
//}
//
//void ReadTextFromFile()
//{
//	//Input stream class
//	ifstream in("Inventory.dat");
//
//	string str;
//
//	if (!in) { cout << "cant open" << endl; return; }
//	else
//	{
//		while (getline(in,str))
//		{
//			cout << str;
//		}
//	}
//
//	in.close();
//
//
//}
//
//void WriteTextToFile()
//{
//	//Output sream class
//	ofstream out("Inventory.dat", ios::binary);
//
//	if (!out) { cout << "cant open" << endl; return; }
//	else
//	{
//		out << "I like C++\n";
//		out << "This is line 2\n";
//		out << "This is line 3\n";
//	}
//
//	out.close();
//
//
//}