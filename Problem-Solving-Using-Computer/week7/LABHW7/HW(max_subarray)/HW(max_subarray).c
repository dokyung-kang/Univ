#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int right_max_sum(int A[], int left, int right)
{
	int max = A[left];
	int sum = 0;
	int i;

	for (i = left; i <= right; i++) {
		sum += A[i];
		if (max < sum)
			max = sum;
	}
	return max;
}

int left_max_sum(int A[], int left, int right)
{
	int max = A[right];
	int sum = 0;
	int i;

	for (i = right; i >= left; i--) {
		sum += A[i];
		if (max < sum)
			max = sum;
	}
	return max;
}

int max_subarray(int* A, int left, int right)
{
	int v1, v2, v3;
	int m;

	if (left >= right)
		return A[right];
	else {
		m = (left + right) / 2;
		v1 = max_subarray(A, left, m);
		v2 = max_subarray(A, m + 1, right);
		v3 = left_max_sum(A, left, m - 1) + right_max_sum(A, m, right);
		if (v1 > v2 && v1 > v3)
			return v1;
		else if (v2 > v1 && v2 > v3)
			return v2;
		else
			return v3;
	}
}

int main(void)
{
	//int A[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	//int A[] = {2, -1, 5, -2, 2, -3, 1};
	//int A[] = {3, -1, 1, 2, 3, 1, -1, 5};
	//int A[] = {1, 2, 3};
	//int A[] = {-1, -2, -3, -4};
	int A[] = {5};

	int lastIndex = sizeof(A) / sizeof(int) - 1;
	int max = max_subarray(A, 0, lastIndex);
	printf("max value = %d\n", max);
}