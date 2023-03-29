#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int key, num, n, flag = 0, count = 0, i = 1;

	scanf("%d", &n);
	scanf("%d", &key);

	do
	{
		scanf("%d", &num);

		if (num == key && flag == 0)
		{
			count = i;
			flag = 1;
		}

		i++;
	} while (i != n + 1);

	if (count > 0)
		printf("%d", count);
	else
		printf("not found");

}