//// Array and dereferencing of Array.
//#include <stdio.h>
//#include<stdlib.h>
//main()
//{
//	//Array Declarations
//	int arr[5];
//	int i;
//	//Array initilization
//	for (i = 0; i < 5; i++)
//		*(arr+(i*sizeof(int))) = i * 10;
//
//	for (i = 0; i < 5; i++)
//		*(arr + (i * sizeof(int))) = rand()%100;
//
//	for (i = 0; i < 5; i++)
//		printf("arr[%d]=%d\n",i, *(arr + (i * sizeof(int))));
//
//
//	return 0;
//}