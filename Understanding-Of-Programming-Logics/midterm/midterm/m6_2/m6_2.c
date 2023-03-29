#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, k, a, b, a1, b1, aNum, bNum;
	scanf("%d %d", &a, &b);
	a1 = a;
	b1 = b;
	for (i = 1; b1 != 0; i++)
	{
		bNum = b1 % 10;
		for (j = 1; a1 != 0; j++)
		{
			aNum = a1 % 10;
			if (aNum == bNum)
			{
				a1 /= 10;
				break;
			}
			else
				a1 /= 10;
		}
		b1 /= 10;
	}
	if (b1 == 0)
	{
		bNum = 0;
		for (k = 1; a % 10 != bNum; k++)
		{
			bNum = b % 10;
			a /= 10;
		}
		printf("%d", a);
	}
	else
		printf("0");
}