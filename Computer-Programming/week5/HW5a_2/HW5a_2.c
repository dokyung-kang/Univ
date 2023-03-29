#define _CRT_SECURE_NO_WARNINGS
#define SIZE 4
#include <stdio.h>
void f1(int arr[][4], int size);
void f2(int arr[][4], int size);
void f3(int arr1[][4], int arr2[][4], int size);
void switchArr (int arr1[][4], int arr2[][4], int size);
int main(void)
{
	int arr1[SIZE][4];
	int arr2[SIZE][4];
	int i;
	
	f1(arr1, SIZE);
	f2(arr1, SIZE);
	
	for (i = 0; i < 4; i++) {
		f3(arr1, arr2, SIZE);
		printf("\n");
		f2(arr2, SIZE);
		switchArr (arr1, arr2, SIZE);
	}
}

void f1(int arr[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 4; j++)
			scanf("%d", &arr[i][j]);
}

void f2(int arr[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++)
			printf("%3d ", arr[i][j]);
		printf("\n");
	}
}

void f3(int arr1[][4], int arr2[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++)
			arr2[j][size - i - 1] = arr1[i][j];
	}
}

void switchArr (int arr1[][4], int arr2[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++)
			arr1[i][j] = arr2[i][j];
	}
}