#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j, total = 0;
	double avg;
	int max = -1, maxTotal = 0;

	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n");
	for (i = 0; i < 4; i++)
	{
		printf("\n%d��° row: ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%5d ", test[i][j]);
	}
	printf("\n\n");

	printf("��>\n");
	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n");
	for (i = 0; i < 4; i++)
		test[i][2] = -1;
	for (i = 0; i < 4; i++)
	{
		printf("\n%d��° row: ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%5d ", test[i][j]);
	}
	printf("\n\n");

	printf("��>\n");
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			total += test[i][j];
	avg = (double)total / 12;
	printf("Total is %d\n", total);
	printf("Average is %.2f\n", avg);
	printf("\n");

	printf("��>\n");
	for (i = 0; i < 4; i++)
	{
		max = -1;
		for (j = 0; j < 3; j++)
			if (max < test[i][j])
				max = test[i][j];
		printf("%d��° row������ �ִ밪: %d\n", i + 1, max);
		maxTotal += max;
	}
	printf("�ִ밪�� ��: %d", maxTotal);
}