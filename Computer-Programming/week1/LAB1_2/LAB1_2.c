#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int data[50];
	int num, i;
	int max = -1;

	srand(time(NULL));

	printf("Enter the number of random numbers:(<= 50): ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		data[i] = rand() % 100;
	for (i = 0; i < num; i++)
		if (data[i] > max)
			max = data[i];
	printf("�ִ밪�� %d\n", max);
	printf("---------------------------------\n");
	printf("�߻��� ������\n");
	for (i = 0; i < num; i++)
	{
		printf("%5d", data[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
}