#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
void readMatrix(int **a, int r, int c)
{
	int i, j;

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &a[i][j]);
}

void matrixAdd(int **a, int **b, int **x, int r, int c)
{
	int i, j;

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			x[i][j] = a[i][j] + b[i][j];
}

void printMatrix(int **a, int r, int c)
{
	int i, j;

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++)
			printf("%3d ", a[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int **A;
	int **B;
	int **X;
	int aRow, aCol;
	int i, j;

	printf("Enter 행렬A의 행과 열의 개수: ");
	scanf("%d %d", &aRow, &aCol);
	A = (int**)malloc(sizeof(int*) * aRow);
	B = (int**)malloc(sizeof(int*) * aRow);
	X = (int**)malloc(sizeof(int*) * aRow);
	for (i = 0; i < aRow; i++) {
		A[i] = (int*)malloc(sizeof(int) * aCol);
		B[i] = (int*)malloc(sizeof(int) * aCol);
		X[i] = (int*)malloc(sizeof(int) * aCol);
	}
	printf("<3 x 3> 행렬 A 입력:\n");
	readMatrix(A, aRow, aCol);
	printf("<3 x 3> 행렬 B 입력:\n");
	readMatrix(B, aRow, aCol);
	matrixAdd(A, B, X, aRow, aCol);
	printf("행렬합: \n");
	printMatrix(X, aRow, aCol);

	for (i = 0; i < aRow; i++) {
		free(A[i]);
		free(B[i]);
		free(X[i]);
	}
	free(A);
	free(B);
	free(X);
}