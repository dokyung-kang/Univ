#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, money;
	int same = 0;
	int mon[12];

	mon[0] = 11;
	mon[1] = 22;
	mon[2] = 33;
	mon[3] = 44;
	mon[4] = 55;
	mon[5] = 66;
	mon[6] = 11;
	mon[7] = 22;
	mon[8] = 33;
	mon[9] = 44;
	mon[10] = 55;
	mon[11] = 66;

	printf("Ž���� ������? ");
	scanf("%d", &money);

	for (i = 0; i < 12; i++)
		if (mon[i] == money)
		{
			same = 1;
			break;
		}
	if (same == 1)
		printf("���� %d�� ���� ù���� ���� %d�� �Դϴ�", money, i + 1);
	else
		printf("���� %d�� ���� ���� �����ϴ�", money);
}