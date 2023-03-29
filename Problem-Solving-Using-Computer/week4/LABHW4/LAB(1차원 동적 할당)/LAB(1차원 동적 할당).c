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

}