#include"CircularQueue.h"

Queue* setUpQueue()
{
	Queue* q = (Queue*)malloc(sizeof(Queue));
	q->size = SIZE;
	q->front = q->rear = -1;
	q->arr = (int*)malloc(sizeof(int)*SIZE);

	return q;
}
void enQueue(Queue* q, int value)
{
	if (!isFull(q))
	{
		if (q->front == -1 && q->rear == -1)
		{
			q->front=q->rear=0;		
		}
		else if (q->rear = SIZE - 1 && q->front != 0)
		{
			q->rear = 0;
		}
		else
		{
			q->rear = (q->rear + 1) % q->size;
			
		}
		q->arr[q->rear] = value;
	}
	else
		printf("Queue is Full");
}
int deQueue(Queue* q)
{
	if (!isEmpty(q))
	{
		if (q->front == q->rear)
		{
			q->front = q->rear = -1;
		}
		else if(q->front==SIZE-1)
		{
			q->front = 0;
		}
		else
		{
			q->front += 1;
		}
		
	}
	else
		printf("Queue is Empty");
}
void displayQueue(Queue* q)
{
	int i;
	int front = q->front;
	int rear = q->rear;
	if (front == -1)
		printf("\nCircular Queue is Empty!!!\n");
	else
	{
		i = front;
		printf("\nCircular Queue Elements are : \n");
		if (front <= rear) {
			while (i <= rear)
				printf("%d %d %d\n", q->arr[i++], front, rear);
		}
		else {
			while (i <= SIZE - 1)
				printf("%d %d %d\n", q->arr[i++], front, rear);
			i = 0;
			while (i <= rear)
				printf("%d %d %d\n", q->arr[i++], front, rear);
		}
	}
}

BOOL isFull(Queue* q)
{
	int r = q->rear;
	int f = q->front;

	if ((r + 1) % q->size == f)
		return TRUE;
	else
		return FALSE;
}

BOOL isEmpty(Queue* q)
{
	int r = q->rear;
	int f = q->front;

	if (f==-1)
		return TRUE;
	else
		return FALSE;
}