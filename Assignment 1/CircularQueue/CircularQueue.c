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
	if (isFull(q))
	{
		printf("Queue is full");
	}
	else
	{
		if (q->front == -1)
		{
			q->front = 0;
		}
		q->rear = (q->rear + 1) % SIZE;   // going round and round concept
		// inserting the element
		q->arr[q->rear] = value;
		printf("Enqueued");
	}

}
int deQueue(Queue* q)
{
	int y;

	if (isEmpty(q))
	{
		printf("Queue is empty.");
	}
	else
	{
		y = q->arr[q->front];
		if (q->front == q->rear)
		{
			// only one element in queue, reset queue after removal
			q->front = -1;
			q->rear = -1;
		}
		else
		{
			q->front = (q->front + 1) % SIZE;
		}
		return(y);
	}
}
void displayQueue(Queue* q)
{
	int i;
	int front = q->front;
	int rear = q->rear;
	if (isEmpty(q))
	{
		printf("Empty Queue");
	}
	else
	{
		
		for (i = front; i != rear; i = (i + 1) % SIZE)
		{
			printf( "%d\t", q->arr[i]);
		}
		printf("%d\t", q->arr[i]);
	}
}

BOOL isFull(Queue* q)
{
	int front = q->front;
	int rear = q->rear;
	if (front == 0 && rear == SIZE - 1)
	{
		return TRUE;
	}
	if (front == rear + 1)
	{
		return TRUE;
	}
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