#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int m, n, i, prime, total = 0;

	scanf("%d %d", &m, &n);

	while (m <= n)
	{
		prime = 1;
		for (i = 2; i < m; i++)
			if (m % i == 0)
			{
				prime = 0;
				break;
			}
		if (prime == 1)
			total += m;
		m++;
	}
	printf("%d", total);
}