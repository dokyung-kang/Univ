#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdio.h>

void swap(int* n1, int* n2)
{
	int temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int findPivot(int* a, int size)
{
	int pivot = -1;
	int i;

	for (i = size - 1; i >= 1; i--) {
		if (a[i] < a[i - 1]) {
			pivot = i;
			break;
		}
	}

	return pivot;
}

int findIdx(int* a, int pivot, int size)
{
	int i;
	int idx = 0;

	for (i = pivot; i < size; i++) {
		if (a[i] < a[pivot - 1]) {
			idx = i;
		}
		else {
			break;
		}
	}

	return idx;
}

void sortAll(int* a, int pivot, int n)
{
	int i;

	for (i = pivot; (i - pivot) * 2 < n - pivot; i++)
		swap(&a[i], &a[n + pivot - i - 1]);
}

int main(void)
{
	int n;
	int i;
	int pivot = -1;
	int tmpIdx;
	int a[10010];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	pivot = findPivot(a, n);

	if (pivot == -1) {
		printf("-1");

	}
	else {
		tmpIdx = findIdx(a, pivot, n);

		swap(&a[tmpIdx] , &a[pivot - 1]);

		sortAll(a, pivot, n);

		for (i = 0; i < n; i++)
			printf("%d ", a[i]);
	}
}