#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 4; j++)
			printf("%d * %d = %d \t", i, 2 * j, i * (2 * j));
		printf("\n");
	}

	return 0;
}

/*
´ä

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 4; j++)
			printf("%d * %d = %d \t", i, 2 * j, i * (2 * j));
		printf("\n");
	}

	return 0;
}
*/