#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i, num, avrg;
	int total = 0;
	int n[100];

	srand(time(NULL));
	printf("Enter the number of random numbers:<<= 100>: ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		n[i] = rand() % 100;
		total += n[i];
	}
	avrg = total / num;
	printf("난수의 평균은 %d\n", avrg);
	for (i = 0; i < num; i++)
	{
		printf("%5d", n[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
}