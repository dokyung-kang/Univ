#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num;
	scanf("%d", &num);

	for (i = 2; i <= num; i++)
		if (i % 3 == 0 || i % 5 == 0)
			printf("%d", i);
}

