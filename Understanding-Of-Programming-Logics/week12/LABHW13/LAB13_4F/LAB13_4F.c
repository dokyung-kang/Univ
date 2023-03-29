#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i, j, n;
	int arr[10];
	srand(time(NULL));

	for (i = 0; i < 10; i++)
		arr[i] = rand() % 100;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 9 - i; j++)
			if (arr[j] > arr[j + 1])
			{
				n = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = n;
			}

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}