#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, m, sum;

	scanf("%d %d", &m, &n);

	sum = 0;
	for (; m <= n; m++)
	{
		for (i = 2; i <= m; i++)
			if (m % i == 0)
				break;
		if (m == i)
			sum += m;
	}
	printf("%d", sum);

}