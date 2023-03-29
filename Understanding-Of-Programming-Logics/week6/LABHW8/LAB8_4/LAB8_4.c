#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, score, max;
	
	max = -1;

	for (i = 0; i < 5; i++)
	{
		printf("Enter a score: ");
		scanf("%d", &score);

		if (max < score)
			max = score;
	}
	printf("The best score is %d. \n", max);

	return 0;
}