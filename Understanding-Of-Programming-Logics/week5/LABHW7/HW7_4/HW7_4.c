#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, score, i, total;
	double avg;

	printf("Enter a student number: ");
	scanf("%d", &n);

	i = 0;
	total = 0;
	while (i < n)
	{
		printf("Enter a score: ");
		scanf("%d", &score);

		total += score;

		i++;
	}
	if (n == 0)
		avg = 0;
	else
		avg = (double)total / n;

	printf("The total is %d\n", total);
	printf("The average is %.1f\n", avg);

	return 0;
}