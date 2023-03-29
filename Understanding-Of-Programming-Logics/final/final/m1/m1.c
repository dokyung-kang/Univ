#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int j, num;
	int total = 0;

	scanf("%d", &num);
	while (num != -1)
	{
		for (j = 2; j < num; j++)
			if (num % j == 0)
				break;
		if (j == num)
			total += num;
		scanf("%d", &num);
	}
	printf("%d", total);
}