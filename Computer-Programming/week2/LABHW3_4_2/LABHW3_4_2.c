#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>
void printSet(int arr[], int size);
int main(void)
{
	int i, j, newN;
	int s[5];
	for (i = 0; i < SIZE; )
	{
		printf("다중집합에 추가할 원소: ");
		scanf("%d", &s[i]);

		newN = 1;
		for (j = 0; j < i; j++)
		{
			if (s[i] == s[j])
			{
				newN = 0;
				break;
			}
		}
		if (newN)
		{
			printSet(s, i);
			i++;
		}
		else
			printf("%d는 이미 집합에 있음\n", s[i]);
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