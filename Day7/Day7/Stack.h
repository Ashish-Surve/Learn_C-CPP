#pragma once
// C program for array implementation of stack 
#include <limits.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include"BinarySearchTree.h"
// A structure to represent a stack 
struct Stack {
	int top;
	unsigned int capacity;
	struct BinarySearchTree** array;
};


struct Stack* createStack(unsigned capacity);
int isFull(struct Stack* );
int isEmpty(struct Stack* );
void push(struct Stack* , struct BinarySearchTree* );
struct BinarySearchTree* pop(struct Stack* );
struct BinarySearchTree* peek(struct Stack* );