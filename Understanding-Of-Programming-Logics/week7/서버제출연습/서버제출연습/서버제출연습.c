#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, unit, i, sum, count;

	scanf("%d %d", &n, &unit);

	sum = 0;
	count = n / unit;
	count = count * unit;

	for (i = 1; i <= count; i++)
	{
		sum += i;
			if (i % unit == 0)
			{
				printf("%d ", sum);
				sum = 0;
			}
	}

}