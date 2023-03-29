#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int arr[100];
	int count[10] = { 0 };
	int i, num, cntN;

	srand(time(NULL));

	printf("Enter the number of random numbers:(<= 100): ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		arr[i] = rand() % 10;
		cntN = arr[i];
		count[cntN]++;
	}
	for (i = 0; i <= 9; i++)
		printf("%d의 개수는 %d\n", i, count[i]);
	printf("-----------------------------------------\n");
	printf("발생한 난수는\n");
	for (i = 0; i < num; i++)
	{
		printf("%5d", arr[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
}