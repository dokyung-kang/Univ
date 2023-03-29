#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void selectSort(int list[], int size);
void printData(int list[], int size);
int main(void)
{
	int arr[10];
	int i;
	
	srand(time(NULL));

	for (i = 0; i < 10; i++)
		arr[i] = rand() % 100;

	printf("발생된 난수:\t");
	printData(arr, 10);
	printf("\n");
	selectSort(arr, 10);
	printf("정렬 후:\t");
	printData(arr, 10);
}

void printData(int list[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%d ", list[i]);
}

void selectSort(int list[], int size)
{
	int i, j, temp, minIndex;
	for (i = 0; i < size - 1; i++){
		minIndex = i;
		for (j = i + 1; j < size; j++)
			if (list[j] < list[minIndex])
				minIndex = j;
		temp = list[i];
		list[i] = list[minIndex];
		list[minIndex] = temp;
	}
}
