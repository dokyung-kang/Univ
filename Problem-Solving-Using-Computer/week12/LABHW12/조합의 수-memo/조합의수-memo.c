#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int comb(int n, int r, int** M)
{
	if (r == 0 || r == n)
		return 1;
	else {
		// return comb(n-1, r-1) + comb(n - 1, r);
		// 코드 작성
		if (M[n - 1][r - 1] == 0)
			M[n - 1][r - 1] = comb(n - 1, r - 1, M);
		if (M[n - 1][r] == 0)
			M[n - 1][r] = comb(n - 1, r, M);


		return M[n - 1][r - 1] + M[n - 1][r];
	}
}
int main(void)
{
	int n, r;
	int i, j;
	int** M; // memo

	printf("Enter n and r of nCr: ");
	scanf("%d %d", &n, &r);

	M = (int**)malloc(sizeof(int*) * n);
	for (i = 0; i < n; i++)
		M[i] = (int*)malloc(sizeof(int) * (r + 1));

	for (i = 0; i < n; i++)
		for (j = 0; j <= r; j++)
			M[i][j] = 0;

	printf("%dC%d = %d\n", n, r, comb(n, r, M));

	printf("\n메모:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j <= r; j++)
			printf("%3d", M[i][j]);
		printf("\n");
	}
	return 0;
}