#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int mul[8][9];
	int i, j;
	int n;

	printf("--������ ǥ�� ������ �����ϴ�.\n");
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			mul[i][j] = (i + 2) * (j + 1);
			printf("%4d", mul[i][j]);
		}
		printf("\n");
	}
	printf("--���ϴ� ��������? ");
	scanf("%d", &n);
	for (i = 0; i < 9; i++)
		printf("%4d", mul[n - 2][i]);
}