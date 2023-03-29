#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		arr[i] = rand() % 100;
	return;
}
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void printMinMax(int arr[], int size)
{
	int i;
	int min = 999, max = 0;
	int maxIndex = 0, minIndex = 0;

	for (i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			maxIndex = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			minIndex = i;
		}
	}
	printf("ÃÖ´ñ°ª: ÀÎµ¦½º = %d, °ª = %d\n", maxIndex, max);
	printf("ÃÖ¼Ò°ª: ÀÎµ¦½º = %d, °ª = %d\n", minIndex, min);
}
int main(void)
{
	int a[10];
	srand(time(NULL));
	initArray(a, 10);
	printArray(a, 10);
	printMinMax(a, 10);

	return 0;
}