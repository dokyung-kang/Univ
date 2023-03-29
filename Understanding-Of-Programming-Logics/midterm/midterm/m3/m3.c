#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, x, y, num;
	int count = 0;
	int sum = 0;

	scanf("%d %d", &x, &y);

	for (i = 1; i <= 10; i++)
	{
		scanf("%d", &num);
		if (x < num && num < y)
		{
			sum += num;
			count++;
		}
	}
	printf("%d\n", sum);
	printf("%d\n", count);
}