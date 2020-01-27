#pragma once
#include<iostream>
using namespace std;
void Init(){
	cout << "Inside global init" << endl;
}

namespace Allocators
{
	class CRTHeap{};
	class ProcessHeap{};
	class stack{};

	void Init(){
		cout << "Inside Local Init" << endl;
	}
}