#pragma once
#include<iostream>
using namespace std;

#define SIZE 10

 typedef struct Node {
	int data;
	Node * next;
}Node;

class HashTable {
	Node* HashTab[SIZE];

public:
	HashTable()
	{
		for (int i = 0; i < SIZE; i++)
		{
			HashTab[i] = nullptr;
		}
	}

	void AddElement(int val);

	void DeleteElement(int val);

	void SearchElement(int val);

	int HashFunction(int val);
};

