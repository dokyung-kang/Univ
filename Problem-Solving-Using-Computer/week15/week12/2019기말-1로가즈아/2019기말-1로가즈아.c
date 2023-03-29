#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long cal(int n, long long *M)
{

	int min = n;
	if (n == 1)
		return 0;
	if (n % 3 == 0) {
		if (M[n / 3] == -1)
			M[n / 3] = cal(n / 3, M);
		if (M[n / 3] < min)
			min = M[n / 3];
	}
	if (n % 2 == 0) {
		if(M[n / 2] == -1)
			M[n / 2] = cal(n / 2, M);
		if (M[n / 2] < min)
			min = M[n / 2];
	}
	if (M[n - 1] == -1)
		M[n - 1] = cal(n - 1, M);
	if (M[n - 1] < min)
		min = M[n - 1];
	return min + 1;
}

int main(void)
{
	int n;
	long long *M;
	int i;

	scanf("%d", &n);
	M = (long long*)malloc(sizeof(long long) * n);
	for (i = 0; i < n; i++)
		M[i] = -1;
	printf("%lld", cal(n, M));
}