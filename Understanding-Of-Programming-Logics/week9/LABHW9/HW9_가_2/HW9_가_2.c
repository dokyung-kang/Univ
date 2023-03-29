#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, i, j, k, n = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i += 2)
	{
		for (k = 1; k <= n; k++)
			printf(" ");
		n++;
		for (j = 1; j <= num - i + 1; j++)
			printf("*");
		printf("\n");
	}
}