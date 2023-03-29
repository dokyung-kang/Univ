#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printManyStars(int starNum);
int main(void)
{
	int tomScore, maryScore;

	printf("Tom's score? ");
	scanf("%d", &tomScore);
	printf("Mary's score? ");
	scanf("%d", &maryScore);
	printf("---------- Score Histogram ----------\n");
	printf("Tom\t:");
	printManyStars(tomScore);
	printf("<%02d>\n", tomScore);
	printf("Mary\t:");
	printManyStars(maryScore);
	printf("<%02d>\n", maryScore);
	return 0;
}
void printManyStars(int starNum)
{
	for (int i = 1; i <= starNum; i++)
		printf("*");
	return;
}