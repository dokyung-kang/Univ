#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double score;

	scanf("%lf", &score);

	if (score >= 100)
		score *= 1.5;
	else if (score >= 50)
		score *= 1.25;
	else if (score >= 10)
		score *= 1.15;

	printf("%.2f", score);
}