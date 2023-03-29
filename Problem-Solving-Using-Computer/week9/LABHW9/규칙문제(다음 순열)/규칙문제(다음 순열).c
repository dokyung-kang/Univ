#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int i;
	int j;
	int* A;
	int maxIdx;
	int max;
	int temp;
	int pivot;

	scanf("%d", &n);
	A = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);

	maxIdx = 0;
	max = A[0];
	for (i = 0; i < n; i++) {
		if (A[i] > max) {
			maxIdx = i;
			max = A[i];
		}
	}
	pivot = maxIdx - 1;
	for (i = pivot; i < n; i++) {
		if (A[pivot] < A[i] && A[i] <= max) {
			max = A[i];
			maxIdx = i;
		}
	}
	temp = A[pivot];
	A[pivot] = A[maxIdx];
	A[maxIdx] = temp;

	for (i = pivot + 1; i < n - 1; i++) {
		maxIdx = i;
		max = A[i];
		for (j = i + 1; j < n; j++) {
			if (max > A[j]) {
				max = A[j];
				maxIdx = j;
			}
		}
		temp = A[i];
		A[i] = A[maxIdx];
		A[maxIdx] = temp;
	}
	if (A[0] < 0)
		printf("-1");
	else {
		for (i = 0; i < n; i++)
			printf("%d ", A[i]);
	}
}