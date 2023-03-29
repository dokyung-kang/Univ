#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 뒤에서부터 역순인것 바로 앞 인덱스
// 10 20 50 40 30인 경우 최대 시퀀스는  50 40 30이 되고 그 바로 앞 인덱스는 1(20의 값을 가진)가 된다. 이를 반환한다
int searchPivot(int* a, int size)
{
	int maxIdx;
	int max;
	int i;

	maxIdx = 0;
	max = a[0];
	for (i = 0; i < size; i++) {
		if (a[i] > max) {
			maxIdx = i;
			max = a[i];
		}
	}
	return maxIdx - 1;
}

// 배열이 10 20 50 40 30이고 pivot이 1인 경우
// 인덱스 pivot의 뒷부분에서 a[pivot]인 20보다 크면서 가장 작은 수(10 20 50 40 30에서는 30)를 찾아 a[pivot]과 자리바꿈을 한다.
// 즉, 배열은 10 30 50 40 20이 된다
int searchNChangeNext(int* a, int size, int pivot)
{
	int i, temp;
	int min = 100, minIndex = -1;
	for (i = pivot + 1; i < size; i++)
		if (a[i] > a[pivot])
			if (a[i] < min) {
				min = a[i];
				minIndex = i;
			}

	temp = a[pivot];
	a[pivot] = a[minIndex];
	a[minIndex] = temp;
}
void testPrint(int* a, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
}

// left와 n-1 사이의 수를 정렬한다
// 10 30 50 40 20이고 left가 2이고 n이 5이면
// 정렬 결과는 10 30 20 40 50이다
void selectionSortNew(int A[], int left, int n)
{
	// 2022년도 중간고사 문제
	int maxIdx;
	int max;
	int i, j;
	int temp;

	for (i = left; i < n - 1; i++) {
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
}

int main(void)
{
	int n;
	int a[100];
	int pivot;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	pivot = searchPivot(a, n);
	if (pivot == -1)
		printf("-1\n");
	else {
		searchNChangeNext(a, n, pivot);
		//testPrint(a, n);
		selectionSortNew(a, pivot + 1, n);
		testPrint(a, n);
	}
}