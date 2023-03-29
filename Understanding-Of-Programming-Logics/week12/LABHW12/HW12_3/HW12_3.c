#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, income;
	double average;
	int total = 0;
	int best = 0, bestIndex;
	int incomes[7];

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income of day %d:", i + 1);
		scanf("%d", &income);
		incomes[i] = income;
	}
	for (i = 0; i < 7; i++)
		if (best < incomes[i])
		{
			best = incomes[i];
			bestIndex = i + 1;
		}
	printf("----------------------------------\n");
	printf("The best income: %d in day %d\n", best, bestIndex);
	printf("----------------------------------\n");
	for (i = 0; i < 7; i++)
		total += incomes[i];
	average = (double)total / 7;
	printf("The total is %d\n", total);
	printf("The average is %0.1f\n", average);
	printf("The good days and their incomes are\n");
	for (i = 0; i < 7; i++)
		if (incomes[i] > average)
			printf("day %d: %d\n", i + 1, incomes[i]);
	return 0;
}