#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
long long cal(long long n, long long* m)
{
	long long min = n;

	if (n == 1)
		return 0;
	
	if (n % 3 == 0) {
		if (m[n / 3] == -1)
			m[n / 3] = cal(n / 3, m);
		if (m[n / 3] < min)
			min = m[n / 3];
	}

	if (n % 2 == 0) {
		if (m[n / 2] == -1)
			m[n / 2] = cal(n / 2, m);
		if (m[n / 2] < min)
			min = m[n / 2];
	}

	if (m[n - 1] == -1)
		m[n - 1] = cal(n - 1, m);
	if (m[n - 1] < min)
		min = m[n - 1];

	return min + 1;
}

int main(void)
{
	long long n;
	long long* m;
	int i;
	long long result;

	scanf("%lld", &n);

	m = (long long*)malloc(sizeof(long long) * n);

	for (i = 0; i < n; i++)
		m[i] = -1;

	result = cal(n, m);

	printf("%lld", result);
}