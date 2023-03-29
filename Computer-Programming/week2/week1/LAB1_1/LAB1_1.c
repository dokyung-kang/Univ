#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num[5];
	int i;
	int total = 0;
	double avg;

	for (i = 0; i < 5; i++)
	{
		printf("Enter %dth number : ", i + 1);
		scanf("%d", &num[i]);
		total += num[i];
	}
	avg = (double)total / 5;
	printf("----------------------------------\n");
	printf("ÃÑÇÕÀº %d\n", total);
	printf("Æò±ÕÀº %.0f\n", avg);
	printf("----------------------------------\n");
	for (i = 0; i < 5; i++)
		printf("array[%d] : %d\n", i, num[i]);
}