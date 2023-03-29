#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int incomes[7];
	int i, n;
	int max = -1;

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income: ");
		scanf("%d", &n);
		incomes[i] = n;
	}
	for (i = 0; i < 7; i++)
		if (max < incomes[i])
			max = incomes[i];
	printf("The best income is %d\n", max);
	for (i = 0; i < 7; i++)
		printf("%d ", incomes[i]);
}