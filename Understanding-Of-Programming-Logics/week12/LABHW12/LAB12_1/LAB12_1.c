#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int scoreN, n, i, average;
	int total = 0;
	int scores[40];

	printf("Enter the number of scores(0 < number <= 40): ");
	scanf("%d", &scoreN);

	for (i = 0; i <scoreN ; i++)
	{
		printf("Enter a score: ");
		scanf("%d", &n);
		scores[i] = n;
		total += scores[i];
	}
	average = total / scoreN;
	printf("------------------------------\n");
	printf("Total: %d\n", total);
	printf("Average: %d\n", average);

	for (i = 0; i < scoreN; i++)
		printf("%d ", scores[i]);
	return 0;
}