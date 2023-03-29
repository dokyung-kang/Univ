#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score, total = 0;

	do
	{
		scanf("%d", &score);

		if (score > 0)
			total += score;

	} while (score != -1);

	printf("%d\n", total);
}