#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
void readMatrix(int** a, int r, int c)
{
	int i, j;

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &a[i][j]);
}

void matrixMul(int** a, int** b, int** x, int aR, int aC, int bR, int bC)
{
	int i, j, k;

	for (i = 0; i < aR; i++) {
		for (j = 0; j < bC; j++) {
			x[i][j] = 0;
			for(k = 0; k < aC; k++)
				x[i][j] += a[i][k] * b[k][j];
		}
	}
}

void transMatrix(int** a, int** aa, int r, int c)
{
	int i, j;

	for (i = 0; i < c; i++) {
		for (j = 0; j < r; j++) {
			aa[i][j] = a[j][i];
		}
	}
}

void printMatrix(int** a, int r, int c)
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
	int** A;
	int** C;
	int** X;
	int** AA;
	int aRow, aCol;
	int cRow, cCol;
	int i, j;

	printf("Enter 행렬A의 행과 열의 개수: ");
	scanf("%d %d", &aRow, &aCol);
	printf("Enter 행렬C의 행과 열의 개수<C의 행은 %d이어야>: ", aCol);
	scanf("%d %d", &cRow, &cCol);
	A = (int**)malloc(sizeof(int*) * aRow);
	C = (int**)malloc(sizeof(int*) * cRow);
	X = (int**)malloc(sizeof(int*) * aRow);
	AA = (int**)malloc(sizeof(int*) * aCol);
	for (i = 0; i < aRow; i++) 
		A[i] = (int*)malloc(sizeof(int) * aCol);
	for(i = 0; i < cRow; i++)
		C[i] = (int*)malloc(sizeof(int) * cCol);
	for(i = 0; i < aRow; i++)
		X[i] = (int*)malloc(sizeof(int) * cCol);
	for(i = 0; i < aCol; i++)
		AA[i] = (int*)malloc(sizeof(int) * aRow);

	printf("<%d x %d> 행렬 A 입력:\n", aRow, aCol);
	readMatrix(A, aRow, aCol);
	printf("<%d x %d> 행렬 C 입력:\n", cRow, cCol);
	readMatrix(C, cRow, cCol);
	printf("행렬곱: \n");
	matrixMul(A, C, X, aRow, aCol, cRow, cCol);
	printMatrix(X, aRow, cCol);
	printf("전치행렬:\n");
	transMatrix(A, AA, aRow, aCol);
	printMatrix(AA, aCol, aRow);

	for (i = 0; i < aRow; i++)
		free(A[i]);
	for (i = 0; i < cRow; i++)
		free(C[i]);
	for (i = 0; i < aRow; i++)
		free(X[i]);
	for (i = 0; i< aCol; i++)
		free(AA[i]);
	free(A);
	free(C);
	free(X);
	free(AA);
}