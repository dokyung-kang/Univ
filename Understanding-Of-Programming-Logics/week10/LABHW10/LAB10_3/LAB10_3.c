#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, tomScore, maryScore;

	printf("Tom's score? ");
	scanf("%d", &tomScore);
	printf("Mary's score? ");
	scanf("%d", &maryScore);
	printf("---------- Score Histogram ----------\n");
	printf("Tom\t:");
	for (i = 1; i <= tomScore; i++)
		printf("*");
	printf("<%02d>\n", tomScore);
	printf("Mary\t:");
	for (j = 1; j <= maryScore; j++)
		printf("*");
	printf("<%02d>", maryScore);

	return 0;
}