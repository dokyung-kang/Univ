#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int gradeTable[5][4] = { {10, 15, 20, 0}, {30, 35, 20, 0}, {60, 65, 20, 0}, {90, 95, 20, 0}, {0, 0, 0, 0} };
	int i, j;

	printf("a)\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d", gradeTable[i][j]);
		printf("\n");
	}
	printf("b)\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%4d", gradeTable[i][j]);
			if (i < 4)
				gradeTable[i][3] += gradeTable[i][j];
			if (j < 3)
				gradeTable[4][j] += gradeTable[i][j];
		}
		printf("\n");
	}
}