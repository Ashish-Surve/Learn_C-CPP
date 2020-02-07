#include<iostream>
using namespace std;
#include<string>


class Array
{
private:
	int size;
	int* ptr;

public:
	Array()=default;
	//constructor
	Array(int n) :size(n), ptr(new int[n]) {}

	//copy 
	Array(const Array& arr) :size(arr.size), ptr(new int[arr.size])
	{
		for (int i = 0; i < size; i++)
		{
			ptr[i] = arr.ptr[i];
		}

	}

	//dctor
	~Array() { delete[] ptr; }
};

class MoveableArray
{
private:
	int size;
	int* ptr;

public:
	MoveableArray() = default;
	//constructor
	MoveableArray(int n) :size(n), ptr(new int[n]) { cout << "Parameterised Ctor" << endl; }

	//copy 
	MoveableArray(const MoveableArray& arr) :size(arr.size), ptr(new int[arr.size])
	{
		cout << "Copy Ctor" << endl;
		for (int i = 0; i < size; i++)
		{
			ptr[i] = arr.ptr[i];
		}

	}

	//move ctor
	MoveableArray(MoveableArray&& arr) :size(arr.size), ptr(arr.ptr)
	{
		cout << "Move Ctor" << endl;
		arr.ptr = nullptr;
	}

	//dctor
	~MoveableArray() { delete[] ptr; }
};

MoveableArray func_temp_array_object(int sz)
{
	MoveableArray m(sz);
	return m;
}

int main()
{
	MoveableArray marray1(3);
	MoveableArray marray2(marray1);
	MoveableArray marray3(func_temp_array_object(3));
	return 0;
}