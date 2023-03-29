#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long H(int n, long long* M)
{
	int i;
	long long sum = 0;

	if (n == 1)
		return 1;
	else {
		for (i = 1; i < n; i++) {
			if (M[n - i - 1] == 0)
				M[n - i - 1] = H(n - i, M);
			sum += i * M[n - i - 1];
		}
		return sum;
	}
}

int main(void)
{
	int i, n;
	long long* M; 
	scanf("%d", &n);
	M = (long long*)malloc(sizeof(long long) * n);
	for (i = 0; i < n; i++)
		M[i] = 0;

	printf("%lld\n", H(n, M));
}