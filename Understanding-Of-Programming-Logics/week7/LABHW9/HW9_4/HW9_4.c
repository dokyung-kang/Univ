#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;
	int count = 1;

	n = 2;
	while (count <= 10)
	{
		for (i = 2;; i++)
		{
			if (i == n)
			{
				printf("%d번째 소수는 %d\n",count, n);
				count++;
				break;
			}
			if (n % i == 0)
				break;
		}
		n++;
	}

	return 0;
}