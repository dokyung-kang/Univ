#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, total = 0;

	i = 1;
	while (i <= 5)
	{
		do
		{
		printf("0���� ū ���� �Է�(%d��°):", i);
		scanf("%d", &num);
		} while (num <= 0);

		total += num;
		i++;
	}
	printf("�Էµ� ���� �� ��: %d", total);
}