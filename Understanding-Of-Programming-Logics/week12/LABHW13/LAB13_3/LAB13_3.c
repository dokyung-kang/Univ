#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>
int main(void)
{
	int odd[SIZE], even[SIZE];
	int num;
	int i, oddIndex = 0, evenIndex = 0;

	for (i = 0; i < SIZE; i++)
	{
		printf("Enter a number:");
		scanf("%d", &num);
		if (num % 2 == 0)
		{
			even[evenIndex] = num;
			evenIndex++;
		}
		else
		{
			odd[oddIndex] = num;
			oddIndex++;
		}
	}
	printf("\nÈ¦¼ö Ãâ·Â:");
	for (i = 0; i < oddIndex; i++)
		printf("%d ", odd[i]);
	printf("\nÂ¦¼ö Ãâ·Â:");
	for (i = 0; i < evenIndex; i++)
		printf("%d ", even[i]);
	printf("\n");

		return 0;
}