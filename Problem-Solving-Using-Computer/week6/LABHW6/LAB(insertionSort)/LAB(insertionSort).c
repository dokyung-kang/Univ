#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initArray(int arr[], int size)
{
	int i;
	srand(time(NULL));

	for (i = 0; i < size; i++)
		arr[i] = rand() % 1000;
}

void insertionSort(int arr[], int size)
{
	int i, j;
	int k;
	int temp;

	for (i = 1; i < size; i++) {
		for (j = 0; j < i; j++) 
			if (arr[j] > arr[i])
				break;
		temp = arr[i];
		for (k = i - 1; k >= j; k--)
			arr[k + 1] = arr[k];
		arr[j] = temp;
	}
}

void printArray(int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

int main(void)
{
	int* arr;
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);

	initArray(arr, n);
	printf("정렬 전 : \n");
	printArray(arr, n);
	printf("\n정렬 후 : \n");
	insertionSort(arr, n);
	printArray(arr, n);
}