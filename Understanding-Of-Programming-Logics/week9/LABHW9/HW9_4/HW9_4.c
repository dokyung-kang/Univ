#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num = 2, count = 0;

	do
	{
		for (i = 2; i <= num - 1; i++)
			if (num % i == 0)
			{
				num++;
				i = 2;
			}
		printf("%d번째 소수는 %d\n", count + 1, num);
		num++;
		count++;
	} while (count < 10);
}