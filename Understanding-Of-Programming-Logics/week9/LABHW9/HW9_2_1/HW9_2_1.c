#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score, total = 0, count = 0, max = -1;
	double avg;

	printf("Enter a score(-1 for exit): ");
	scanf("%d", &score);
	while (score != -1)
	{
		if (max < score)
			max = score;
		count++;
		total += score;
		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score);
	}
	avg = (double)total / count;

	printf("You've entered %d students.\n", count);
	if (count > 0)
	{
		printf("The total is %d.\n", total);
		printf("The average is %.1f.\n", avg);
		printf("The best score is %d.\n", max);
	}
	else
		printf("There is no data.");
}