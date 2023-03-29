#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j;

	i = 1;
	while (i <= 9)
	{
		j = 1;
		while (j <= 4)
		{
			printf("%d * %d = %d \t", i, 2 * j, i * (2 * j));
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}