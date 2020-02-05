//#include<iostream>		//to perform console I/O
//#include<fstream>		//To perform File I/O
//#include<string>
//using namespace std;
//
//void ReadTextFromFile();
//void WriteTextToFile();
//int main()
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
//	double cost;
//	string str;
//
//	if (!in) { cout << "cant open" << endl; return; }
//	else
//	{
//		while (!in.eof())
//		{
//			//when u use below line with empty line then then it doesnt work
//			//and doesnt chnage the value of the str or cost.
//			in >> str >> cost;	
//			cout << str << " : " << cost << endl;
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
//		out << "Radios " << 546 << endl;
//		out << "Toaster " << 875 << endl;
//		out << "Hammer " << 54<<endl;
//	}
//
//	out.close();
//
//
//}