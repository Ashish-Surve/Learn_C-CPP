#pragma once
#define SIZE 5
#include<stdio.h>
#include<malloc.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

typedef struct Queue
{
	int rear, front;
	int size;
	int *arr;
}Queue;

Queue* setUpQueue();
void enQueue(Queue*,int value);
int deQueue(Queue*);
void displayQueue(Queue*);
BOOL isFull(Queue* q);
BOOL isEmpty(Queue* q);