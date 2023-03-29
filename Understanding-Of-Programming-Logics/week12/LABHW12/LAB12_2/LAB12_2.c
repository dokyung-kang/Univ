#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(NULL));
	int i, average;
	int total = 0;
	int n[10];
	
	for (i = 0; i < 10; i++)
		n[i] = rand() % 100;
	for (i = 0; i < 10; i++)
		total += n[i];
	average = total / 10;
	printf("Æò±ÕÀº %d\n", average);
	for (i = 0; i < 10; i++)
		printf("%d ", n[i]);

	return 0;
}