#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>
void printSet(int arr[], int size);
int main(void)
{
	int i;
	int s[5];
	for (i = 0; i < SIZE; i++)
	{
		printf("다중집합에 추가할 원소: ");
		scanf("%d", &s[i]);
		printSet(s, i);
	}
}
void printSet(int arr[], int size)
{
	int i;
	printf("{ ");
	for (i = 0; i <= size; i++)
	{
		printf("%d", arr[i]);
		if (i != size)
			printf(", ");
	}
	printf(" }");
	printf("\n");
}