#include"CircularQueue.h"

int main()
{
	Queue* q= setUpQueue();
	
	int choice;
	while (1)
	{
		printf("\n=====MENU=====\n");
		printf("1.EnQueue.\n");
		printf("2.DeQueue.\n");
		printf("3.Display.\n");
		printf("7.EXIT\n ");
		fflush(stdin);
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:printf("Enter enqueue data?\n");
			int x;
			scanf_s("%d", &x);
			enQueue(q, x);
			break;
		case 2:deQueue(q);
			break;
		case 3:displayQueue(q);
			break;
		case 7: exit(0);
			break;
		default:
			printf("Wrong Choice!");
			break;
		}
	}
}