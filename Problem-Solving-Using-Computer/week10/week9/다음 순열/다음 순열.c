#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// �ڿ������� �����ΰ� �ٷ� �� �ε���
// 10 20 50 40 30�� ��� �ִ� ��������  50 40 30�� �ǰ� �� �ٷ� �� �ε����� 1(20�� ���� ����)�� �ȴ�. �̸� ��ȯ�Ѵ�
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

// �迭�� 10 20 50 40 30�̰� pivot�� 1�� ���
// �ε��� pivot�� �޺κп��� a[pivot]�� 20���� ũ�鼭 ���� ���� ��(10 20 50 40 30������ 30)�� ã�� a[pivot]�� �ڸ��ٲ��� �Ѵ�.
// ��, �迭�� 10 30 50 40 20�� �ȴ�
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

// left�� n-1 ������ ���� �����Ѵ�
// 10 30 50 40 20�̰� left�� 2�̰� n�� 5�̸�
// ���� ����� 10 30 20 40 50�̴�
void selectionSortNew(int A[], int left, int n)
{
	// 2022�⵵ �߰���� ����
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