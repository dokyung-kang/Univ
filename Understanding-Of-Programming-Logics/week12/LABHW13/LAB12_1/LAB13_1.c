#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>
int main(void)
{
	int arrayA[SIZE] = { 1, 2, 3, 4, 1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i;
	int same;

	for (i = 0; i < SIZE; i++)
	{
		arrayB[i] = arrayA[i];
		arrayC[SIZE - i - 1] = arrayA[i];
	}
	printf("arrayA: ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", arrayA[i]);
	printf("\n");
	printf("arrayB: ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", arrayB[i]);
	printf("\n");
	printf("arrayC: ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", arrayC[i]);
	printf("\n");
	same = 1;
	for (i = 0; i < SIZE; i++)
		if (arrayA[i] != arrayB[i])
		{
			same = 0;
			break;
		}
	if (same)
		printf("ArrayA�� arrayB�� ����\n");
	else
		printf("ArrayA�� arrayB�� �ٸ���\n");
	same = 1;
	for (i = 0; i < SIZE; i++)
		if (arrayA[i] != arrayC[i])
		{
			same = 0;
			break;
		}
	if (same)
		printf("ArrayA�� arrayC�� ����\n");
	else
		printf("ArrayA�� arrayC�� �ٸ���\n");
}