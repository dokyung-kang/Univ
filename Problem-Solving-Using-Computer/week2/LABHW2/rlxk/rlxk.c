#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int average;
	int score1, score2;

	printf("Enter two scores: ");
	scanf("%d", &score1);
	scanf("%d", &score2);

	average = (score1 + score2) / 2;

	printf("average is %d", (score1 + score2) / 2);
}