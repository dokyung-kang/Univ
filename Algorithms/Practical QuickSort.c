#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int A[], int n1, int n2)
{
	int temp;

	temp = A[n1];
	A[n1] = A[n2];
	A[n2] = temp;
}

int partition(int A[], int p, int r)
{
	int i;
	int idx;
	int pivot;

	pivot = A[r];
	idx = p - 1;

	for (i = p; i < r; i++) {
		if (A[i] <= pivot) {
			idx++;
			swap(A, idx, i);
		}
	}
	swap(A, idx + 1, r);

	return idx + 1;
}

void quickSort(int A[], int p, int r)
{
	int q;

	if (p < r) {
		q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}

void insertionSort(int A[], int p, int r)
{
	int i;
	int j;
	int idx;
	int temp;

	for (i = p + 1; i <= r; i++) {
		for (j = i - 1; j >= p; j--) {
			if (A[j] < A[i]) {
				break;
			}
		}

		j++;
		temp = A[i];

		for (idx = i; idx > j; idx--) {
			A[idx] = A[idx - 1];
		}
		A[j] = temp;
	}
}

void dualPivotQuickSort(int A[], int p, int r)
{
	int i;
	int len;
	int lenA;
	int leftP;
	int rightP;
	int idx1;
	int idx2;
	int temp;

	len = r - p;
	lenA = sizeof(A) / sizeof(int);

	leftP = A[p];
	rightP = A[r];

	idx1 = p + 1;
	idx2 = r - 1;

	if (p > r) {
		return;
	}

	if (len < lenA) {
		insertionSort(A, p, r);
	}

	if (A[p] > A[r]) {
		swap(A, A[p], A[r]);
	}

	for (i = p + 1; i <= idx2; i++) {

		if (A[i] <= leftP) {
			swap(A, idx1++, i);
		}

		if (A[i] >= rightP) {
			for (; (A[idx2] >= rightP) && (idx2 > i); idx2--);
			swap(A, idx2--, i);

			if (A[i] <= leftP) {
				swap(A, idx1++, i);
			}
		}
	}
	idx1--;
	idx2++;

	swap(A, idx1, p);
	swap(A, idx2, r);

	dualPivotQuickSort(A, p, idx1 - 1);
	dualPivotQuickSort(A, idx1 + 1, idx2 - 1);
	dualPivotQuickSort(A, idx2 + 1, r);
}

int main(void)
{
	int i;
	int len = 15000;
	int* arr1;
	int* arr2;
	double duration1;
	double duration2;

	arr1 = (int*)malloc(sizeof(int) * len);
	arr2 = (int*)malloc(sizeof(int) * len);

	srand(time(NULL));

	for (i = 0; i < len; i++) {
		arr1[i] = rand() % 100;
		arr2[i] = rand() % 100;
	}

	clock_t start1 = clock();
	quickSort(arr1, 0, len - 1);
	clock_t end1 = clock();
	duration1 = (double)(end1 - start1);
	printf("traditional : %lf", duration1);

	printf("\n");

	clock_t start2 = clock();
	dualPivotQuickSort(arr2, 0, len - 1);
	clock_t end2 = clock();
	duration2 = (double)(end2 - start2);
	printf("new : %lf", duration2);

	free(arr1);
	free(arr2);
}