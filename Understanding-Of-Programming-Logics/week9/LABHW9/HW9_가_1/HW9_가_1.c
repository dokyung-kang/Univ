#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, i, j, k;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (k = 1; k <= i - 1; k++)
			printf(" ");
		for (j = 1; j <= num - i + 1; j++)
			printf("*");
		printf("\n");
	}
}