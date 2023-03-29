#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init(int A[], int size)
{
	int i;

	srand(time(NULL));

	for (i = 0; i < size; i++)
		A[i] = rand() % 100;
}

void printList(int A[], int s, int e)
{
	int i;
	for (i = s; i < e; i++)
		printf("%d ", A[i]);
	printf("\n");
}

int partition(int A[], int p, int r)
{
	int i = 0, j = 0;
	int k;
	int temp;

	for (k = 0; k <= r; k++) {
		if (A[r] < A[k])
			j++;
		else {
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
			i++;
			j++;
		}
	}

	return i - 1;
}

int find(int A[], int p, int r, int order)
{
	int q;

	if (p < r) {
		q = partition(A, p, r);
		if(r > order)
			find(A, p, q - 1, order - 1);
		else
			find(A, p + 1, r, order - 1);
	}
	return A[order];
}

int main(void)
{
	int* list;
	int n;
	int idx;
	int findN;

	printf("Enter the number of numbers: ");
	scanf("%d", &n);
	printf("몇번째로 작은 수: ");
	scanf("%d", &idx);

	list = (int*)malloc(sizeof(int) * n);

	init(list, n);
	printList(list, 0, n);
	findN = find(list, 0, n - 1, idx - 1);
	printf("%d번째 작은 수는 %d", idx, findN);
}