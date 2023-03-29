#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, key, num = 0, count = 0, flag = 0;

	scanf("%d", &n);
	scanf("%d", &key);

	i = 1;
	while (i != n + 1)
	{
		scanf("%d", &num);
		if (num == key && flag == 0)
		{
			count = i;
			flag = 1;
		}

		i++;
	}
	if (count > 0)
		printf("%d", count);
	else
		printf("not found");
}