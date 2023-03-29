#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;

	scanf("%d", &n);

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	printf("%d", i);
}