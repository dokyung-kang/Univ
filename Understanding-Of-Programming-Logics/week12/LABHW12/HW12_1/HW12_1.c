#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, i, j, score;
	int scores[20];

	printf("Enter the number of scores<<= 20:");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Enter a score: ");
		scanf("%d", &score);
		scores[i] = score;
	}
	for (i = 0; i < num; i++)
	{
		printf("student%3d: ", i + 1);
		for (j = 0; j < scores[i]; j++)
			printf("*");
		printf("\n");
	}
}