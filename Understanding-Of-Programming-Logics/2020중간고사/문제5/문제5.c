#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int deposit, target, total;
	int year, month, i;

	scanf("%d %d", &deposit, &target);

	total = 0;
	for (i = 0; total < target; i++)
		total = (total + deposit) * 1.02;
	year = i / 12;
	month = i % 12;

	printf("%d %d %d", year, month, total);
}