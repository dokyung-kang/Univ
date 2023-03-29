#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, n, m;
	int count = 0;
	int sum = 0;

	scanf("%d %d", &n, &m);

	for (i = n; count < m; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
		{
			sum += i;
			count++;
		}
	}
	printf("%d", sum);
}