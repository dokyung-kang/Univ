#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initArray(int* arr, int size)
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
	int temp;

	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
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
	printf("\n���ĵ� ��: \n");
	printArray(random, n);

}