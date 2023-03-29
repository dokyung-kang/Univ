#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, score, number;
	int max = -1, min = 9999;

	printf("Enter the number of scores: ");
	scanf("%d", &number);

	for (i = 0; i < number; i++)
	{
		printf("Enter a score: ");
		scanf("%d", &score);

		if (max < score)
			max = score;
		if (min > score)
			min = score;
	}
		if (number == 0)
			printf("no data \n");
		else
		{
			printf("The best score is %d \n", max);
			printf("The worst score is %d \n", min);
		}
	
		return 0;
	
}
