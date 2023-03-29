#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initArray(int *arr, int size)
{
	int i;

	srand(time(NULL));
	for (i = 0; i < size; i++) {
		arr[i] = rand() % 1000;
	}
}

void sortArray(int* arr, int size)
{
	int i, j;
	int max;
	int max_idx;
	int temp;

	for (i = 0; i < size - 1; i++) {
		max = arr[i];
		max_idx = i;
		for (j = i + 1; j < size; j++) {
			if (max > arr[j]) {
				max = arr[j];
				max_idx = j;
			}		
		}
		temp = arr[i];
		arr[i] = arr[max_idx];
		arr[max_idx] = temp;
	}
}

void printArray(int* arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

int main(void)
{
	int n;
	int* random;

	printf("Enter a number: ");
	scanf("%d", &n);
	random = (int*)malloc(sizeof(int) * n);
	initArray(random, n);
	printArray(random, n);
	sortArray(random, n);
	printf("\n정렬된 후: \n");
	printArray(random, n);

}