#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void selectSort(int list[], int size);
int main(void)
{
	int arr[10];
	int i;
	
	srand(time(NULL));

	printf("발생된 난수:\t");

	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("정렬 후:\t");
	selectSort(arr, 10);
}
void selectSort(int list[], int size)
{
	int i, j, temp, minIndex;
	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;
		for (j = i + 1; j < size; j++)
			if (list[j] < list[minIndex])
				minIndex = j;
		temp = list[i];
		list[i] = list[minIndex];
		list[minIndex] = temp;
	}
	for (i = 0; i < size; i++)
		printf("%d ", list[i]);
}