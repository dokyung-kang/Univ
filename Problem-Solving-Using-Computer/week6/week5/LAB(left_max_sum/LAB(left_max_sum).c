#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int left_max_sum(int A[], int left, int right)
{
	int max = A[right];
	int sum = 0;
	int i;

	for (i = right; i >=left; i--) {
		sum += A[i];
		if (max < sum)
			max = sum;
	}
	return max;
}

int main(void)
{
	int A[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

	int max = left_max_sum(A, 4, 6);
	//int max = left_max_sum(A, 0, 4);
	//int max = left_max_sum(A, 4, 7);

	printf("max value = %d\n", max);
}