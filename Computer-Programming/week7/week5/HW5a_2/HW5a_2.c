#define _CRT_SECURE_NO_WARNINGS
#define SIZE 4
#include <stdio.h>
void initTable(int arr[][4], int size);
void printTable(int arr[][4], int size);
void rotateTable(int arr1[][4], int arr2[][4], int size);
void copyTable (int arr1[][4], int arr2[][4], int size);
int main(void)
{
	int arr1[SIZE][4];
	int arr2[SIZE][4];
	int i;
	
	initTable(arr1, SIZE);
	printTable(arr1, SIZE);
	
	for (i = 0; i < 4; i++) {
		rotateTable(arr1, arr2, SIZE);
		printTable(arr2, SIZE);
		copyTable (arr1, arr2, SIZE);
	}
}

void initTable(int arr[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 4; j++)
			arr[i][j] = (4 * i) + j + 1;
}

void printTable(int arr[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++)
			printf("%3d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}

void rotateTable(int arr1[][4], int arr2[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++)
			arr2[j][size - i - 1] = arr1[i][j];
	}
}

void copyTable (int arr1[][4], int arr2[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++)
			arr1[i][j] = arr2[i][j];
	}
}