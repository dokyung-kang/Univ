#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, subNum;
	int i, dividend;
	int posNum = 0;

	scanf("%d", &num);
	scanf("%d", &subNum);

	while (subNum != 0)
	{
		subNum /= 10;
		posNum++;
	}
	dividend = 1;
	for (i = 1; i <= posNum; i++)
		dividend *= 10;
	while (num != 0)
	{
		if (num % dividend == subNum)
			break;
		num /= 10;
	}
	printf("%d\n", num);
}