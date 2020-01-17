////Call by Value of Array isnt Possible.
//#include <stdio.h>
//#include<stdlib.h>
//void CallByValue(int *arr);
//void CallByAdd(int *arr);
//
//main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i;
//
//	
//	CallByValue(arr);
//	printf("After Call by Value");
//	for (i = 0; i < 5; i++)
//		printf("CallByValue : %d\n", *(arr + (i * sizeof(int))));
//
//	CallByAdd(arr);
//	printf("After Call by Add");
//		for (i = 0; i < 5; i++)
//			printf("CallByAdd : %d\n", arr[i]);
//
//
//	return 0;
//}
//
//void CallByValue(int *arr)
//{
//		int i;
//		for (i = 0; i < 5; i++)
//		*(arr + (i * sizeof(int))) = rand()%100;
//}
//
//void CallByAdd(int *arr)
//{
//		int i;
//		for (i = 0; i < 5; i++)
//			*(arr + (i * sizeof(int))) = rand() % 100;
//}
