#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;
	int product = 1;

	printf("Enter a number:");
	scanf("%d", &n);

	i = 0;
	while (product <= n)
	{
		product = product * 2;
		i++;
	}
	printf("%d\n", i - 1);
}