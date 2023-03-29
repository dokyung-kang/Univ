#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, aNum, bNum, b1, prime = 0;

	scanf("%d %d", &a, &b);

	while (a != 0)
	{
		b1 = b;
		while (b1 != 0)
		{
			aNum = a % 10;
			bNum = b1 % 10;
			a /= 10;
			b1 /= 10;
			if (aNum != bNum)
			{
				prime = 1;
				break;
			}
			else
				prime = 2;
		}
		if (prime == 2)
			break;
	}
	if (prime == 2)
	{
		if (a != 0)
			printf("%d", a);
		printf("%d\n", b);
	}
	else
		printf("0\n");
}