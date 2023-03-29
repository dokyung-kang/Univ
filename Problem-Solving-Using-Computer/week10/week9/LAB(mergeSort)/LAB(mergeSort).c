#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <time.h>
void merge(int A[], int p, int q, int r)
{
	int i = p;
	int j = q + 1;
	int t = 0;
	int k;
	int list[99] = { 0 };

	while (i <= q && j <= r) {
		if (A[i] <= A[j]) {
			list[t] = A[i];
			i++;
			t++;
		}
		else {
			list[t] = A[j];
			j++;
			t++;
		}
	}
	if (i > q) {
		for (k = j; k <= r; k++)
			list[t++] = A[k];
	}
	else {
		for (k = i; k <= q; k++)
			list[t++] = A[k];
	}
	t = 0;
	for (k = p; k <= r; k++)
		A[k] = list[t++];
}

void mergeSort(int A[], int p, int r)
{
	int q;

	if (p < r) {
		q = (p + r) / 2;
		mergeSort(A, p, q);
		mergeSort(A, q + 1, r);
		merge(A, p, q, r);
	}
}
void printList(int A[], int s, int e)
{
	int i;
	for (i = s; i < e; i++)
		printf("%d ", A[i]);
	printf("\n");
}

void random(int A[], int n)
{
	srand(time(NULL));
	int i;

	for (i = 0; i < n; i++)
		A[i] = rand() % 1000;
}

int main(void)
{
	int n;
	int *list;
	
	scanf("%d", &n);
	list = (int*)malloc(sizeof(int) * n);
	random(list, n);
	//printList(list, 0, n);
	mergeSort(list, 0, n - 1);
	printList(list, 0, n);
}