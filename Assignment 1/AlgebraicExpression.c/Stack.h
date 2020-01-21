#pragma once
#pragma once
// C program for array implementation of stack 
#include <limits.h> 
#include <stdio.h> 
#include <stdlib.h> 

#define M 30
// A structure to represent a stack 
typedef  struct Stack {
	int top;
	unsigned int capacity;
	char array[M][M];
}Stack;


struct Stack* createStack(unsigned capacity);
int isFull(struct Stack*);
int isEmpty(struct Stack*);
void push(struct Stack*, char* a);
struct BinarySearchTree* pop(struct Stack*);
struct BinarySearchTree* peek(struct Stack*);