#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int H(int n, int *M)
{
	int i;
	int sum = 0;

	if (n == 0 || n == 1)
		return 1;
	else {
		for (i = 0; i < n; i++) {
			if (M[i] == 0)
				M[i] = H(i, M);
			if (M[n - i - 1] == 0)
				M[n - i - 1] = H(n - i - 1, M);
			sum += M[i] * M[n - i - 1];
		}
		return sum;
	}
}

int main(void)
{
	int i, n;
	int* M; //Memo
	printf("0보다 큰 정수: ");
	scanf("%d", &n);
	M = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		M[i] = 0;

	printf("결과는 %d\n", H(n, M));
}