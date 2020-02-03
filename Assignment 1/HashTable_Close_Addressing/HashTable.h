#pragma once
#include<iostream>
using namespace std;

#define SIZE 10

typedef struct Block {
	int data;
	int  next;
}Node;

class HashTable {
	Block HashTab[SIZE];
	int current_size;

public:
	HashTable();

	void AddElement(int val);

	void DeleteElement(int val);

	void SearchElement(int val);

	inline int HashFunction(int val);

	void Display();
};

