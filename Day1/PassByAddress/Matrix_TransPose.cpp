//#include<stdio.h>
//
//void transpose(int  mat[][3], int tran[][3]);
//
//int main()
//{
//	int  mat[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int trans[3][3];
//	transpose(mat, trans);
//	
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			printf("%d   ", trans[i][j]);
//		printf("\n");
//	}
//
//}
//
//void transpose(int mat[3][3],int tran[3][3])
//{
//	for (int i = 0; i < 3; i++)
//		for (int j = 0; j < 3; j++)
//			tran[j][i] = mat[i][j];
//}