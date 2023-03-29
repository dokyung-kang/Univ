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

int main(void)
{
	int A[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

	//int max = right_max_sum(A, 3, 5);
	//int max = right_max_sum(A, 3, 4);
	int max = right_max_sum(A, 5, 7);

	printf("max value = %d\n", max);
}